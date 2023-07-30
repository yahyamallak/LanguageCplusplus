#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct UserData
{
    string AccountNumber;
    int PinCode;
    string Name;
    string Phone;
    float AccountBalance;
    bool toDelete = false;
};

string GetString(string message)
{

    string sentence;

    cout << message;
    getline(cin >> ws, sentence);

    return sentence;
}

vector<string> SplitString(string sentence, string delimeter = " ")
{

    int pos = 0;
    string word;

    vector<string> tokens;

    while ((pos = sentence.find(delimeter)) != string::npos)
    {

        word = sentence.substr(0, pos);

        if (word != "")
        {
            tokens.push_back(word);
        }

        sentence.erase(0, pos + delimeter.length());
    }

    if (sentence != "")
    {
        tokens.push_back(sentence);
    }

    return tokens;
}

void PrintUserData(UserData userdata)
{

    cout << "--------------------------" << endl;

    cout << "Account number : " << userdata.AccountNumber << endl;

    cout << "--------------------------" << endl;

    cout << "PinCode : " << userdata.PinCode << endl;

    cout << "--------------------------" << endl;

    cout << "Name : " << userdata.Name << endl;

    cout << "--------------------------" << endl;

    cout << "Phone : " << userdata.Phone << endl;

    cout << "--------------------------" << endl;

    cout << "Account Balance : " << userdata.AccountBalance << endl;
}

string recordToLine(UserData userInfo, string delimeter = " ")
{

    string line = "";

    line += userInfo.AccountNumber + delimeter;
    line += to_string(userInfo.PinCode) + delimeter;
    line += userInfo.Name + delimeter;
    line += userInfo.Phone + delimeter;
    line += to_string(userInfo.AccountBalance);

    return line;
}

void saveClientsToFile(string filename, vector<UserData> clients)
{

    fstream outFile;
    string line;

    outFile.open(filename, ios::out);

    if (outFile.is_open())
    {

        for (UserData client : clients)
        {
            if (client.toDelete == false)
            {
                line = recordToLine(client, "#//#");
                outFile << line << endl;
            }
        }

        outFile.close();
    }
}

UserData lineToRecord(string sentence, string delimeter = " ")
{

    UserData userdata;
    vector<string> tokens;

    tokens = SplitString(sentence, "#//#");

    userdata.AccountNumber = tokens[0];
    userdata.PinCode = stod(tokens[1]);
    userdata.Name = tokens[2];
    userdata.Phone = tokens[3];
    userdata.AccountBalance = stof(tokens[4]);

    return userdata;
}

vector<UserData> getRecordFromFile(string filename)
{

    fstream recordFile;
    string recordLine;
    vector<UserData> usersData;

    recordFile.open(filename, ios::in);

    if (recordFile.is_open())
    {
        while (recordFile)
        {

            getline(recordFile, recordLine);

            usersData.push_back(lineToRecord(recordLine, "#//#"));

            if (recordFile.eof())
                break;
        }
    }

    recordFile.close();

    return usersData;
}

bool findRecord(UserData &userdata, string accountNumber)
{

    vector<UserData> usersData;
    usersData = getRecordFromFile("records.txt");

    for (UserData user : usersData)
    {
        if (user.AccountNumber == accountNumber)
        {
            userdata = user;
            return true;
        }
    }

    return false;
}

bool findClientByAccountNumber(string accountNumber, vector<UserData> &usersData, UserData &userdata)
{
    for (UserData &user : usersData)
    {
        if (findRecord(user, accountNumber))
        {
            userdata = user;
            return true;
        }
    }

    return false;
}

void updateData(UserData & client) {

    cout << "Pin Code ? ";
    cin >> client.PinCode;

    cout << "Name ? ";
    getline(cin >> ws, client.Name);

    cout << "Phone ? ";
    getline(cin >> ws, client.Phone);

    cout << "Account Balance ? ";
    cin >> client.AccountBalance;
}


bool updateClientData(string accountNumber, UserData & client, vector<UserData> & clients) {

    updateData(client);

    for(UserData & user : clients) {
        if(user.AccountNumber == accountNumber) {
            user = client;
            return true;
        }
    }

    return false;
}


bool updateClientDataByAccountNumber(string accountNumber, vector<UserData> &usersData)
{
    UserData client;
    char choice;

    if(findClientByAccountNumber(accountNumber, usersData, client)) {
        
        PrintUserData(client);

        cout << "Are you sure you want to update this client? [Y/N] ";
        cin >> choice;

        if(choice == 'Y' || choice == 'y') {

            updateClientData(accountNumber, client, usersData);

            saveClientsToFile("records.txt", usersData);

            cout << "Client updated successfully.";
        }

    } else {
        cout << "Client not found." << endl;
    }
}

int main()
{

    vector<UserData> usersData = getRecordFromFile("records.txt");
    string accountNumber = GetString("Please enter account number : ");

    updateClientDataByAccountNumber(accountNumber, usersData);

    return 0;
}   
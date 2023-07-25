#include <conio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct UserData {
    string AccountNumber;
    int PinCode;
    string Name;
    string Phone;
    float AccountBalance;
};

string GetString(string message) {

    string sentence;

    cout << message;
    getline(cin >> ws,sentence);

    return sentence;
}

vector<string> SplitString(string sentence, string delimeter = " ") {

    int pos = 0;
    string word;

    vector<string> tokens;

    while((pos = sentence.find(delimeter)) != string::npos) {
        
        word = sentence.substr(0, pos);

        if(word != "") {
            tokens.push_back(word);
        }

        sentence.erase(0, pos + delimeter.length());
    }

    if(sentence != "") {
        tokens.push_back(sentence);
    }


    return tokens;

}


UserData lineToRecord(string sentence, string delimeter = " ") {
    
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


vector<UserData> getRecordFromFile(string filename) {

    fstream recordFile;
    string recordLine;
    vector<UserData> usersData;

    recordFile.open(filename, ios::in);

    if(recordFile.is_open()) {
        while(recordFile) {

            getline(recordFile, recordLine);

            usersData.push_back(lineToRecord(recordLine, "#//#"));

            if(recordFile.eof()) break;
        }
    }
    
    recordFile.close();

    return usersData;

}


bool findRecord(UserData & userdata, string accountNumber) {

    vector<UserData> usersData;
    usersData = getRecordFromFile("records.txt");

    for(UserData user : usersData) {
        if(user.AccountNumber == accountNumber) {
            userdata = user;
            return true;
        }
    }

    return false;

}

void PrintUserData(UserData userdata) {

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


int main() {

    string accountNumber;
    UserData userdata;

    accountNumber = GetString("Please enter account number : ");

    if(findRecord(userdata, accountNumber)) {
        PrintUserData(userdata);
    } else {
        cout << "Client with Account number (" << accountNumber << ") not found!" << endl;
    }
    
    return 0;
}
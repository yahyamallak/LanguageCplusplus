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

void PrintHeader() {
    cout << "\n__________________________________________________________________________________________________\n\n";
    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(10) << "Pin code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) <<  "Phone";
    cout << "| " << left << setw(12) <<  "Balance";
    cout << "\n__________________________________________________________________________________________________\n\n";

}

void PrintUserData(UserData userdata) {

    cout << "| " << setw(15) << left << userdata.AccountNumber;
    cout << "| " << setw(10) << left << userdata.PinCode;
    cout << "| " << setw(40) << left << userdata.Name;
    cout << "| " << setw(12) << left << userdata.Phone;
    cout << "| " << setw(12) << left << userdata.AccountBalance;

}


void PrintRecords(vector<UserData> usersdata) {

    int size = usersdata.size();

    cout << "\n\t\t\t\t Client List ("<< size <<") clients." << endl;

    PrintHeader();

    for(int i = 0; i < size; i++) {
        PrintUserData(usersdata[i]);
        cout << endl;
    }

    cout << "\n__________________________________________________________________________________________________\n\n";
}


int main() {

    vector<UserData> usersData;

    usersData = getRecordFromFile("records.txt");

    PrintRecords(usersData);
    
    return 0;
}
#include <conio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct UserData {
    string AccountNumber;
    int PinCode;
    string Name;
    string Phone;
    float AccountBalance;
};


UserData GetUser() {

    UserData userdata;

    cout << "Enter Account number : ";
    getline(cin >> ws, userdata.AccountNumber);
    
    cout << "--------------------------" << endl;

    cout << "Enter PinCode : ";
    cin >> userdata.PinCode;
    
    cout << "--------------------------" << endl;

    cout << "Enter Name : ";
    getline(cin >> ws, userdata.Name);
    
    cout << "--------------------------" << endl;

    cout << "Enter Phone : ";
    getline(cin >> ws, userdata.Phone);
    
    cout << "--------------------------" << endl;

    cout << "Enter Account Balance : ";
    cin >> userdata.AccountBalance;
    
    cout << "--------------------------" << endl;

    return userdata;
}


string recordToLine(UserData userInfo, string delimeter = " ") {
    
    string line = "";

    line += userInfo.AccountNumber + delimeter;
    line += to_string(userInfo.PinCode) + delimeter;
    line += userInfo.Name + delimeter;
    line += userInfo.Phone + delimeter;
    line += to_string(userInfo.AccountBalance);

    return line;
}

void saveRecordToFile(string filename, string sentence) {

    fstream outFile;

    outFile.open(filename, ios::out | ios::app);

    if(outFile.is_open()) {
        outFile << sentence << endl;
        outFile.close();
    }
    
}

void addNewClient() {

    UserData userdata;
    userdata = GetUser();
    saveRecordToFile("records.txt", recordToLine(userdata, "#//#"));
}


void addClients() {

    char choice;

    do {

        system("cls");

        addNewClient();
        
        cout << "Record saved successfully." << endl;

        cout << "Do you want to add a record? [Y/N] ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

}


int main() {

    addClients();

    return 0;
}
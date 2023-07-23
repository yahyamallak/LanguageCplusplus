#include <iostream>
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


int main() {

    UserData userdata;

    userdata = GetUser();

    cout << "Client record : " << endl;
    cout << recordToLine(userdata, "#//#") << endl;
    

    return 0;
}
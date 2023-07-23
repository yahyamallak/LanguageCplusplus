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


int main() {

    string sentence;
    UserData userdata;

    sentence = GetString("Enter a string : ");

    userdata = lineToRecord(sentence);

    PrintUserData(userdata);

    return 0;
}
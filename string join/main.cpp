#include <iostream>
#include <string>
#include <vector>

using namespace std;


string GetString(string message) {

    string sentence;

    cout << message;
    getline(cin>>ws,sentence);

    return sentence;
}


vector<string> FillVector(vector<string> tokens) {

    char turn = 'y';

    do {

        

        tokens.push_back(GetString("Enter a string : "));

        cout << "[Y/N] to continue? ";
        cin >> turn;

    } while(turn == 'y');

    return tokens;
}


string JoinString(vector<string> tokens, string delimeter = " ") {

    string sentence = "";

    for(string& token : tokens) {
        sentence += token + delimeter;
    }

    return sentence.substr(0, sentence.length() - delimeter.length());
}


string JoinString(string tokens[], int size, string delimeter = " ") {

    string sentence = "";

    for(int i = 0; i < size; i++) {
        sentence += tokens[i] + delimeter;
    }

    return sentence.substr(0, sentence.length() - delimeter.length());
}


int main() {

    vector<string> tokens;
    string token[] = {"yahya","mallak"};
    string sentence;

    sentence = JoinString(FillVector(tokens), " ");

    cout << sentence << endl;
    cout << sentence.length() << endl;


    cout << "------------------------------" << endl;


    sentence = JoinString(token, 2, " ");

    cout << sentence << endl;
    cout << sentence.length() << endl;

    return 0;
}
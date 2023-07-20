#include <iostream>
#include <string>


using namespace std;


string GetString(string message) {

    string sentence;

    cout << message;
    getline(cin,sentence);

    return sentence;
}


void PrintEachWordString(string sentence, string delimeter = " ") {

    int position = 0;
    string word;

    while((position = sentence.find(delimeter)) != string::npos) {
        cout << position;
        word = sentence.substr(0, position);

        if(word != "") {
            cout << word << endl;
        }

        sentence.erase(0, position + delimeter.length());
    }
    
    if(sentence != "") {
        cout << sentence << endl;
    }
}


int main() {

    PrintEachWordString(GetString("Enter a string : "));

    return 0;
}
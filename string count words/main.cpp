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


int CountEachWordString(string sentence, string delimeter = " ") {

    int counter = 0, pos = 0;

    while((pos = sentence.find(delimeter)) != string::npos) {
        if((sentence.substr(0, pos)) != "") {
            counter++;
            sentence.erase(0, pos + delimeter.length());
        }
    }

    if(sentence != "") {
        counter++;
    }

    return counter;
}


int main() {

    string sentence = GetString("Enter a string : ");

    cout << "Words count : " << CountEachWordString(sentence);

    return 0;
}
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;


string GetString(string message) {

    string sentence;

    cout << message;
    getline(cin,sentence);

    return sentence;
}

string TrimLeft(string sentence, char delimeter = ' ') {

    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] != delimeter) {
            return sentence.substr(i, sentence.length() - 1);
        }
    }

    return "";
}

string TrimRight(string sentence, char delimeter = ' ') {

    for(int i = sentence.length() - 1; i >= 0 ; i--) {

        if(sentence[i] != delimeter) {
            return sentence.substr(0, i + 1);
        }

    }

    return "";

    return sentence;
}



string Trim(string sentence, char delimeter = ' ') {

    sentence = TrimRight(sentence, delimeter);
    sentence = TrimLeft(sentence, delimeter);

    return sentence;
}


int main() {

    string sentence = GetString("Enter a string : ");

    cout << "String : " << sentence << endl;
    cout << "String length : " << sentence.length() << endl;

    cout << "-----------------------------------" << endl;

    cout << "Trim : " << Trim(sentence) << endl;
    cout << "Trim length : " << Trim(sentence).length() << endl;

    cout << "-----------------------------------" << endl;

    cout << "Right Trim : " << TrimRight(sentence) << endl;
    cout << "Right Trim length : " << TrimRight(sentence).length() << endl;

    cout << "-----------------------------------" << endl;

    cout << "Left Trim : " << TrimLeft(sentence) << endl;
    cout << "Left Trim length : " << TrimLeft(sentence).length() << endl;


    return 0;
}
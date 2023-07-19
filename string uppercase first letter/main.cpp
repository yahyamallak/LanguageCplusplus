#include <iostream>
#include <string>


using namespace std;


string GetString(string message) {

    string sentence;

    cout << message;
    getline(cin,sentence);

    return sentence;
}

char UppercaseLetter(char letter) {

    int letterInt = int(letter);

    if(letterInt > 122 || letterInt < 97) {
        return letter;
    }

    letter = char( letterInt - 32 );

    return letter;
}

void PrintFirstLetterString(string sentence) {

    cout << sentence << endl;

    int isFirst = true;

    for(int i = 0; i < sentence.length() ; i++) {
        if(isFirst && sentence[i] != ' ') {
            cout << UppercaseLetter(sentence[i]);
            isFirst = false;
        } else {
            cout << sentence[i];
            if(sentence[i] == ' ') {
                isFirst = true;
            }
        }
    }
}


int main() {

    PrintFirstLetterString(GetString("Enter a string : "));

    return 0;
}
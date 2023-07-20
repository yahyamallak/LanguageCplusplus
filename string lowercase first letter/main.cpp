#include <iostream>
#include <string>


using namespace std;


string GetString(string message) {

    string sentence;

    cout << message;
    getline(cin,sentence);

    return sentence;
}

char LowercaseLetter(char letter) {

    int letterInt = int(letter);

    if(letterInt < 65 || letterInt > 90) {
        return letter;
    }

    letter = char( letterInt + 32 );

    return letter;
}

void PrintFirstLetterString(string sentence) {

    cout << sentence << endl;

    int isFirst = true;

    for(int i = 0; i < sentence.length() ; i++) {
        if(isFirst && sentence[i] != ' ') {
            cout << LowercaseLetter(sentence[i]);
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
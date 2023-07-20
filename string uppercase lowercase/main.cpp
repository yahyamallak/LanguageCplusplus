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

char UppercaseLetter(char letter) {

    int letterInt = int(letter);

    if(letterInt > 122 || letterInt < 97) {
        return letter;
    }

    letter = char( letterInt - 32 );

    return letter;
}

void PrintLowercaseString(string sentence) {

    cout << "The Lowercase string : " << endl;

    for(int i = 0; i < sentence.length() ; i++) {
        cout << LowercaseLetter(sentence[i]);
    }

    cout << endl;
}

void PrintUppercaseString(string sentence) {

    cout << "The Uppercase string : " << endl;

    for(int i = 0; i < sentence.length() ; i++) {
        cout << UppercaseLetter(sentence[i]);
    }

    cout << endl;
}


int main() {

    string sentence = GetString("Enter a string : ");

    PrintLowercaseString(sentence);
    PrintUppercaseString(sentence);

    return 0;
}
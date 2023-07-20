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


bool isVowel(char character) {
    char vowels[5] = {'a','e','i','o','u'};

    for(int i = 0; i < 5; i++) {
        if(LowercaseLetter(vowels[i]) == LowercaseLetter(character)) {
            return true;
        }
    }

    return false;
}


void PrintStringVowels(string sentence) {
    int counter = 0;

    for(int i = 0; i < sentence.length(); i++) {
        if(isVowel(sentence[i])) {
            cout << sentence[i] << "  ";
        }
    }
}


int main() {

    
    string sentence = GetString("Enter a string : ");

    cout << "All vowels : ";
    PrintStringVowels(sentence);

    return 0;
}
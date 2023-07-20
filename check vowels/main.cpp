#include <iostream>
#include <string>


using namespace std;


char GetChar(string message) {

    char character;

    cout << message;
    cin >> character;

    return character;
}

char InvertChar(char character) {

    int characterInt = int(character);

    if(characterInt > 96 && characterInt < 123 ) {
        return char(characterInt - 32);
    } else if(characterInt > 64 && characterInt < 91) {
        return char(characterInt + 32);
    }

    return character;
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

void PrintResult(bool vowel) {
    if(vowel) {
        cout << "It is a vowel.";
    } else {
        cout << "It is not a vowel.";
    }
}



int main() {

    char character = GetChar("Enter a character : ");

    PrintResult(isVowel(character));

    return 0;
}
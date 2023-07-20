#include <iostream>
#include <string>


using namespace std;


string GetString(string message) {

    string sentence;

    cout << message;
    getline(cin,sentence);

    return sentence;
}

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


int CountCharString(string sentence, char character, bool matchCase = true) {

    int counter = 0;

    if(matchCase) {
        for(int i = 0; i < sentence.length(); i++) {
            if(sentence[i] == character) {
                counter++;
            }    
        }
    } else {
        for(int i = 0; i < sentence.length(); i++) {
            if(LowercaseLetter(sentence[i]) == LowercaseLetter(character)) {
                counter++;
            }    
        }
    }

    

    return counter;

}


int main() {

    string sentence = GetString("Enter a string : ");
    char character = GetChar("Enter a character : ");

    cout << sentence << endl;
    cout << "Count " << character << " Letter : " << CountCharString(sentence, character) << endl;
    cout << "Count " << character << " Or " << InvertChar(character) << " Letter : " << CountCharString(sentence, character, false) << endl;

    return 0;
}
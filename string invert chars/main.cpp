#include <iostream>
#include <string>


using namespace std;


string GetString(string message) {

    string sentence;

    cout << message;
    getline(cin,sentence);

    return sentence;
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

string InvertCharString(string sentence) {

    for(int i = 0; i < sentence.length(); i++) {
        sentence[i] = InvertChar(sentence[i]);
    }

    return sentence;
}



int main() {

    string sentence = GetString("Enter a string : ");

    cout << InvertCharString(sentence);

    return 0;
}
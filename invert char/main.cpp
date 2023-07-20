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



int main() {

    char character = GetChar("Enter a character : ");

    cout << InvertChar(character);

    return 0;
}
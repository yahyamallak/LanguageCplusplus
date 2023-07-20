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


int CountCharString(string sentence, char character) {

    int counter = 0;

    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] == character) {
            counter++;
        }
    }

    return counter;

}



int main() {

    string sentence = GetString("Enter a string : ");
    char character = GetChar("Enter a character : ");

    cout << sentence << endl;
    cout << "Count " << character << " Letter : " << CountCharString(sentence, character);

    return 0;
}
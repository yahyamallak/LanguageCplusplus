#include <iostream>
#include <string>


using namespace std;


string GetString(string message) {

    string sentence;

    cout << message;
    getline(cin,sentence);

    return sentence;
}


bool isUpper(char character) {
    if(character > 64 && character < 91) {
        return true;
    }

    return false;
}

bool isLower(char character) {
    if(character > 96 && character < 123) {
        return true;
    }

    return false;
}

int CountStringUpp(string sentence) {

    int counter = 0;

    for(int i = 0; i < sentence.length(); i++) {
        if(isUpper(sentence[i])) {
            counter++;
        }
    }

    return counter;
}

int CountStringLow(string sentence) {
    int counter = 0;

    for(int i = 0; i < sentence.length(); i++) {
        if(isLower(sentence[i])) {
            counter++;
        }
    }

    return counter;
}



int main() {

    string sentence = GetString("Enter a string : ");

    cout << "String Length : " << sentence.length() << endl;
    cout << "String Upp Count : " << CountStringUpp(sentence) << endl;
    cout << "String Low Count : " << CountStringLow(sentence) << endl;

    return 0;
}
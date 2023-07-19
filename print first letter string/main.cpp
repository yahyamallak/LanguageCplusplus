#include <iostream>
#include <string>


using namespace std;


string GetString(string message) {

    string sentence;

    cout << message;
    getline(cin,sentence);

    return sentence;
}

void PrintFirstLetterString(string sentence) {

    cout << sentence << endl;

    cout << sentence[0] << endl;

    for(int i = 0; i < sentence.length() ; i++) {
        if(sentence[i] == ' ') {
           cout << sentence[i + 1] << endl;
        }
    }
}


int main() {

    PrintFirstLetterString(GetString("Enter a string : "));

    return 0;
}
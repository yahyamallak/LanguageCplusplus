#include <iostream>
#include <string>
#include <vector>

using namespace std;


string GetString(string message) {

    string sentence;

    cout << message;
    getline(cin,sentence);

    return sentence;
}

bool isPunctuation(char character) {

    char punctuations[] = {'.',':',',',';','!','?','_','-', '\'', '\"'};
    int arrayLength = sizeof(punctuations) / sizeof(char);

    for(int i = 0; i < arrayLength; i++) {
        if(character == punctuations[i]) {
            return true;
        }
    }

    return false;
}



string removeStringPunctuations(string sentence) {

    string cleanSentence = "";

    for(int i = 0; i < sentence.length(); i++) {
        if(!isPunctuation(sentence[i])) {
            cleanSentence += sentence[i];
        }
    }

    return cleanSentence;
}


int main() {

    string sentence;

    sentence = GetString("Enter a string : ");

    cout << "String : " << endl;
    cout << sentence << endl;

    cout << "String without punctuations : " << endl;
    cout << removeStringPunctuations(sentence) << endl;
    

    return 0;
}
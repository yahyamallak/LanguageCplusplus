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

char LowercaseLetter(char letter) {

    int letterInt = int(letter);

    if(letterInt < 65 || letterInt > 90) {
        return letter;
    }

    letter = char( letterInt + 32 );

    return letter;
}


string LowercaseString(string sentence) {

    for(int i = 0; i < sentence.length(); i++) {
        sentence[i] = LowercaseLetter(sentence[i]);
    }
    
    return sentence;
}


vector<string> SplitString(string sentence, string delimeter = " ") {

    int pos = 0;
    string word;

    vector<string> tokens;

    while((pos = sentence.find(delimeter)) != string::npos) {
        
        word = sentence.substr(0, pos);

        if(word != "") {
            tokens.push_back(word);
        }

        sentence.erase(0, pos + delimeter.length());
    }

    if(sentence != "") {
        tokens.push_back(sentence);
    }


    return tokens;

}

string JoinString(vector<string> tokens, string delimeter = " ") {

    string sentence = "";

    for(string& token : tokens) {
        sentence += token + delimeter;
    }

    return sentence.substr(0, sentence.length() - delimeter.length());
}

string StringReplace(string sentence, string toReplace, string replaceWith, bool caseSens = false) {

    vector<string> tokens;

    tokens = SplitString(sentence);

    for(string& token : tokens) {

        if(caseSens) {
            if(token == toReplace) {
                token = replaceWith;
            }
        } else {
            if(LowercaseString(token) == LowercaseString(toReplace)) {
                token = replaceWith;
            }
        }

    }

    return JoinString(tokens);
}



int main() {

    string sentence, word, newWord;

    sentence = GetString("Enter a string : ");
    word = GetString("Enter word to replace : ");
    newWord = GetString("Enter new word : ");

    cout << "Case sensitive : false" << endl;
    cout << StringReplace(sentence, word, newWord) << endl;

    cout << "---------------------------------------" << endl;

    cout << "Case sensitive : true" << endl;
    cout << StringReplace(sentence, word, newWord, true) << endl;

    

    return 0;
}
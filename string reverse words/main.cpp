#include <iostream>
#include <string>
#include <vector>

using namespace std;


string GetString(string message) {

    string sentence;

    cout << message;
    getline(cin>>ws,sentence);

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


string reverseWords(string sentence) {

    vector<string> tokens;
    string phrase = "";

    tokens = SplitString(sentence);

    vector<string>::iterator iter = tokens.end();


    while(iter != tokens.begin()) {
        --iter;
        phrase += *iter + " ";
    }

    return phrase.substr(0, phrase.length() - 1);
}



int main() {

    string sentence;


    sentence = reverseWords(GetString("Enter a string : "));

    cout << sentence;

    return 0;
}
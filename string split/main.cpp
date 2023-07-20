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

void PrintResult(vector<string> tokens) {
    for(int i = 0; i < tokens.size(); i++) {
        cout << tokens[i] << endl;
    }
}


int main() {

    vector<string> tokens;

    string sentence = GetString("Enter a string : ");

    tokens = SplitString(sentence);

    cout << "Tokens : " << tokens.size() << endl;

    PrintResult(tokens);


    return 0;
}
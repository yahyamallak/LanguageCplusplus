#include <iostream>
#include <string>

using namespace std;


string ReadText() {

        string text;

        cout << "Enter the text you wanna encrypt : ";
        getline(cin, text);

        return text;
}

string EncryptText(string text, short encryptionKey) {
    
    string textEncrypted = "";
    
    for(int i=0; i < text.length(); i++) {
        textEncrypted += (char)(int(text[i]) + encryptionKey);
    }

    return textEncrypted;
}

string DecryptText(string text, short encryptionKey) {
    
    string textDecrypted = "";
    
    for(int i=0; i < text.length(); i++) {
        textDecrypted += (char)(int(text[i]) - encryptionKey);
    }

    return textDecrypted;
}


int main() {

    const short encryptionKey = 2;

    string text = ReadText();
    string textAfterEncryption = EncryptText(text, encryptionKey);
    string textAferDecryption = DecryptText(textAfterEncryption, encryptionKey);


    cout << "Your text: " << text << endl;
    cout << "After encryption: " << textAfterEncryption << endl;
    cout << "After decryption: " << textAferDecryption << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;


string ReadPassword() {

        string password;

        cout << "Guess the password : ";
        cin >> password;

        return password;
}

bool GuessPassword(string password) {

        char firstLetter = char(password[0]);
        char secondLetter = char(password[1]);
        char lastLetter = char(password[2]);

        int counter = 0;

        for(int i = 1; i <= 26 ; i++) {
            for(int j = 1; j <= 26; j++) {
                for(int k = 1; k <= 26; k++) {
                    counter++;
                    if(firstLetter == char(i + 64) && secondLetter == char(j + 64) && lastLetter == char(k + 64)) {
                        cout <<  "Password " << password << " is found after " << counter << " trial(s)";
                        return true;
                    }
                    
                }
            }
        }

        return false;
}


int main() {

    GuessPassword(ReadPassword());

    return 0;
}
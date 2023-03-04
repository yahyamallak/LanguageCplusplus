#include <iostream>
#include <string>

using namespace std;


int ReadPositiveNumber(string Message) {
    int Number;

    do {

        cout << Message;
        cin >> Number;

    } while(Number < 0);

    return Number;
}



void PrintLetterPattern(int Number) {

    for(int i = 1; i <= Number ; i++) {
        for(int j = i; j >= 1; j--) {
            cout << char(i + 64);
        }
        cout << endl;
    }
}



int main() {

    PrintLetterPattern(ReadPositiveNumber("Please enter a positive number ? "));

    return 0;
}
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



void PrintInvertedPattern(int Number) {

    for(int i = Number; i >= 1 ; i--) {
        for(int j = 1; j <= i; j++) {
            cout << (char)(i + 64);
        }
        cout << endl;
    }
}



int main() {

    PrintInvertedPattern(ReadPositiveNumber("Please enter a positive number ? "));

    return 0;
}
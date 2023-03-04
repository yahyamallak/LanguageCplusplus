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



void PrintPattern(int Number) {

    for(int i = 1; i <= Number ; i++) {
        for(int j = i; j >= 1; j--) {
            cout << i;
        }
        cout << endl;
    }
}



int main() {

    PrintPattern(ReadPositiveNumber("Please enter a positive number ? "));

    return 0;
}
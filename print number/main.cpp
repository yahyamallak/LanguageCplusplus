#include <iostream>
#include <string>

using namespace std;


int ReadPositiveNumber(string Message) {
    int Number;

    do {

        cout << Message << endl;
        cin >> Number;

    } while(Number < 0);

    return Number;
}


int ReveseNumber(int Number) {
    
    int newNumber = 0;

    while(Number) {
        newNumber = ( Number % 10 ) + newNumber * 10;
        Number = Number / 10;
    }
    
    return newNumber;
}



void PrintDigits(int Number) {
    
    int rest = 0;

    do {
        rest = Number % 10;
        Number = Number / 10;
        cout << rest << endl;

    } while(Number);
}


int main() {


    PrintDigits(ReveseNumber(ReadPositiveNumber("Enter a positive number ? ")));


    return 0;
}
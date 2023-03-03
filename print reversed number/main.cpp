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



void PrintDigits(int Number) {
    
    int rest = 0;

    do {
        rest = Number % 10;
        Number = Number / 10;
        cout << rest << endl;

    } while(Number);
}


int main() {


    PrintDigits(ReadPositiveNumber("Enter a positive number ? "));


    return 0;
}
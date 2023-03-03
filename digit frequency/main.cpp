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



int CountDigitFrequency(short digit, int Number) {

    int counter = 0;

    while(Number) {
        if(Number % 10 == digit) 
            counter++;

        Number = Number / 10;
    }

    return counter;
    
}


int main() {

    int Number = ReadPositiveNumber("Enter a positive number ? ");
    short Digit = ReadPositiveNumber("Enter a positive digit ? ");


    cout << Digit << " Frequency is " << CountDigitFrequency(Digit, Number) << " time(s).";

    return 0;
}
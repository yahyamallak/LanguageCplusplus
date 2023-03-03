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


void PrintAllDigitsFrequency(int Number) {

    for(int i = 0; i < 10; i++) {

        int count = CountDigitFrequency(i, Number);
    
        if(count) {
            cout << "Digit " << i << " Frequency is " << count << " time(s)." << endl;
        }
    }
    
}


int main() {

    PrintAllDigitsFrequency(ReadPositiveNumber("Enter a positive number ? "));

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2};

int ReadPositiveNumber(string Message) {
    int Number;

    do {

        cout << Message;
        cin >> Number;

    } while(Number < 0);
}

enPrimeNotPrime CheckPrime(int Number) {
    for(int i = 2; i <= Number; i++) {
        if(i != Number) {
            if((Number % i) == 0) {
                return enPrimeNotPrime::NotPrime;
            }
        }
    }
    return enPrimeNotPrime::Prime;
}


void PrintPrimeNumbersFrom1ToN(int Number) {
    for(int i = 1; i <= Number; i++) {
        if(CheckPrime(i) == enPrimeNotPrime::Prime) {
            cout << i << endl;
        }
    }
}



int main() {

    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number ? "));

    return 0;
}
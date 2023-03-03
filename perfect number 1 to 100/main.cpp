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


bool isPerfectNumber(int Number) {
    int sum = 0;

    for(int i = 1; i < Number; i++) {
        if(Number % i == 0) {
            sum += i;
        }
    }

    return Number == sum;
}


void PrintPerfectNumberFrom1ToN(int Number) {
    for(int i = 1; i <= Number; i++) {
        if(isPerfectNumber(i)) {
            cout << i << endl;
        }
    }
}

int main() {


    PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Enter a positive number ? "));


    return 0;
}
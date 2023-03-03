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


void PrintResults(int Number) {
    if(isPerfectNumber(Number)) {
        cout << "a Perfect number" << endl;
    } else {
        cout << "Not a Perfect number" << endl;
    }
}

int main() {


    PrintResults(ReadPositiveNumber("Enter a positive number ? "));


    return 0;
}
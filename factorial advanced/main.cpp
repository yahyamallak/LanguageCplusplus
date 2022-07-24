#include <iostream>

using namespace std;

int readPositiveNumber(string message) {
    int number;

    do {

        cout << message << endl;
        cin >> number;

    } while ( number < 0);

    return number;
}

int factorial(int number) {
    int factorial = 1;

    for(int counter = number; counter >= 1 ; counter--) {
        factorial *= counter;
    }

    return factorial;
}


int main() {


    cout << factorial(readPositiveNumber("Enter a number : "));

    return 0;
}
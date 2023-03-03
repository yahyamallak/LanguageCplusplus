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



int SumOfDigits(int Number) {
    
    int sum = 0;

    do {
        sum += Number % 10;
        Number = Number / 10;
    } while(Number);

    return sum;
}


int main() {


    cout << SumOfDigits(ReadPositiveNumber("Enter a positive number ? "));


    return 0;
}
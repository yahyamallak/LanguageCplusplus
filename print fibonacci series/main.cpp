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



void PrintFibonacciSeries(int number) {
    
    int prevNum = 1, currNum = 1, sum = 0;

    cout << prevNum << "  ";
    cout << currNum << "  ";

    for(int i = 2; i < number; i++) {
        sum = prevNum + currNum;
        cout << sum << "  ";
        prevNum = currNum;
        currNum = sum;
    }
}





int main() {

    PrintFibonacciSeries(ReadPositiveNumber("Enter a number : "));

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

float readNumber(string message) {
    float number;

    cout << message << endl;
    cin >> number;

    return number;
}

float SquareRoot(float number) {
    if(number >= 0) {

        return pow(number, 0.5);
        
    } else {
        cout << "Error, number should be positive.";
    }
}


int main() {

    cout << SquareRoot(readNumber("Enter a number : "));

    return 0;
}
#include <iostream>

using namespace std;

float readNumber(string message) {
    float number;

    cout << message << endl;
    cin >> number;

    return number;
}

int round(float number) {

    if(number >= 0) {
        return ((number - int(number)) >= .5) ? (number) + 1 : (number);
    } else {
        return ((number - int(number)) * -1  >= .5) ? (number) - 1 : (number);
    }
    
}


int main() {

    cout << round(readNumber("Enter a number : "));

    return 0;
}
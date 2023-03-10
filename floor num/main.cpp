#include <iostream>

using namespace std;

float readNumber(string message) {
    float number;

    cout << message << endl;
    cin >> number;

    return number;
}

int floor(float number) {
    if(number >= 0) {
        return number;
    } else {
        return number - 1;
    }
    
}


int main() {

    cout << floor(readNumber("Enter a number : "));

    return 0;
}
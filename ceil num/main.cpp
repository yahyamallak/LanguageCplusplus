#include <iostream>

using namespace std;

float readNumber(string message) {
    float number;

    cout << message << endl;
    cin >> number;

    return number;
}

int ceil(float number) {

    if(number >= 0) {
        return ((number - int(number)) > 0) ? number + 1 : number;
    } else {
        return number;
    }
    
}


int main() {

    cout << ceil(readNumber("Enter a number : "));

    return 0;
}
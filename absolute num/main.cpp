#include <iostream>

using namespace std;

int readNumber(string message) {
    int number;

    cout << message << endl;
    cin >> number;

    return number;
}

int absolute(int number) {
    return (number >= 0) ? number : number * -1;
}


int main() {

    cout << absolute(readNumber("Enter a number : "));

    return 0;
}
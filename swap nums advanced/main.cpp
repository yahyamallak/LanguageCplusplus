#include <iostream>

using namespace std;


void getNums(int &x, int &y) {
    cout << "Enter first number : ";
    cin >> x;

    cout << "Enter second number : ";
    cin >> y;
}


void swapNums(int &x, int &y) {
    x = x + y;
    y = x - y;
    x = x - y;
}


void printResult(int x, int y) {
    cout << "The Number X = " << x << endl;
    cout << "The Number Y = " << y << endl;
    cout << "********************************"<< endl;
}


int main() {

    int x, y;

    getNums(x,y);

    printResult(x, y);

    swapNums(x,y);

    printResult(x, y);

    return 0;
}
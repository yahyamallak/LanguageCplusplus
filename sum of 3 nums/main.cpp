/*
 by ref

*/

#include <iostream>

using namespace std;

void getNums(int &x, int &y, int &z) {

    cout << "Enter a number : ";
    cin >> x;

    cout << "Enter a number : ";
    cin >> y;

    cout << "Enter a number : ";
    cin >> z;

}

int addNums(int &x, int &y, int &z) {
    return x + y + z;
}

void printResult(int sum) {
    cout << "The result : " << sum;
}

int main() {

    int x, y, z;

    getNums(x, y, z);

    printResult(addNums(x, y, z));

    return 0;
}
#include <iostream>

using namespace std;

int main() {

    int num = 0;

    cout << "Enter a number : ";
    cin >> num;

    (num > 0) ? cout << "positive" : (num < 0 ) ? cout << "negative" : cout << "zero";

    return 0;
}
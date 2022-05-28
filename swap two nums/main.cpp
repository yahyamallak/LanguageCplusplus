#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    cout << "Enter a number 1 : ";
    cin >> a;

    cout << "Enter a number 2 : ";
    cin >> b;

    cout << "Before : " << endl;
    cout << "A = " << a << endl << "B = " << b << endl;

    c = a;
    a = b;
    b = c;

    cout << "After : " << endl;
    cout << "A = " << a << endl << "B = " << b;

    return 0;
}
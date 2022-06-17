#include <iostream>

using namespace std;


int main(){

    int a, b;

    cout << "Enter A number : ";
    cin >> a;

    cout << "Enter B number : ";
    cin >> b;

    a = a + b;
    b = a - b; 
    a = a - b;

    cout << "A = " << a << " B = " << b;


    return 0;
}
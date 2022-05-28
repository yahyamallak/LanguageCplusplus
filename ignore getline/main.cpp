#include <iostream>
#include <string>

using namespace std;

int main(){


    int a, c;
    string b;

    cin >> a;

    cin.ignore(1, '\n');
    getline(cin, b);

    cin >> c;

    cout << a << b << c;

    return 0;
}
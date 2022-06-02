#include <iostream>

using namespace std;

int main(){


    int a, b;

    cout << "Enter a number : ";
    cin >> a;

    cout << "Enter a number : ";
    cin >> b;

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout << "*";
        }
        cout << "\n";
    }


    return 0;
}
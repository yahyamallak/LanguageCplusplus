#include <iostream>

using namespace std;

int main(){


    cout << "Multiplication Table : " << endl;

    for(int i = 1; i <= 10; i++){
        cout << "Table of " << i << endl;
        for(int j = 1; j <= 10; j++){
            cout << i << " * " << j << " = " << i*j << endl;
        }
        cout << "--------------------------" << endl;
    }

    return 0;
}
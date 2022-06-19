#include <iostream>

using namespace std;

int main(){

    int k = 1;

    for(int i = 1; i <= 4 ; i++){
        for(int j = 3; j >= i; j--){
            cout << " ";
        }

        for(int j = 1; j <= k ; j++){
            cout << "*";
        }

        k = k + 2;
        cout << endl;

    }

    k=1;

    for(int i = 1; i <= 3 ; i++){
        for(int j = 1; j <= i; j++){
            cout << " ";
        }

        for(int j = 5; j >= k ; j--){
            cout << "*";
        }

        k = k + 2;
        cout << endl;

    }


    return 0;
}

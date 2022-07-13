/*

0 1 1 2 3 5 8 13 ......

*/

#include <iostream>

using namespace std;

int main(){

    int n, n1 = 0, n2 = 1, n3;

    cout << "Enter a number : ";
    cin >> n;

    cout << n1 << " " << n2 << " ";

    for(int i = 0; i < n; i++){
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }


    return 0;
}


/*

a = 1 + 1/2! + 1/3! +....+ 1/n!


*/

#include <iostream>

using namespace std;

int fac(int number){
    int res = 1;
    for(int i=1; i<=number; i++){
        res *= i;
    }

    return res;
}

int main(){


    int n;
    float result = 0;

    cout << "Enter a number : ";
    cin >> n;

    for(int i=1; i <= n; i++){
        result += (float) 1/fac(i);
    }
       
    cout << "The result = " << result;

    return 0;
}
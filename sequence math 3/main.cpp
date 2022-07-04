/*

a = 1 + x1/1! + x2/1/2! + x3/1/3! +....+ xn/1/n!


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


    int n, x;
    float result = 1;

    cout << "Enter numbers : ";
    cin >> n >> x;

    for(int i=1; i <= n; i++){
        result += (float) x / (float) 1/fac(i);
    }
       
    cout << "The result = " << result;

    return 0;
}
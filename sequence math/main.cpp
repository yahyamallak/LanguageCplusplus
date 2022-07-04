/*

a = 1 + 1/2 + 1/3 +....+ 1/n


*/

#include <iostream>

using namespace std;

int main(){


    int n;
    float result = 0;

    cout << "Enter a number : ";
    cin >> n;

    for(int i=1; i <= n; i++){
        result += (float)1/i;
    }
       
    cout << "The result = " << result;

    return 0;
}
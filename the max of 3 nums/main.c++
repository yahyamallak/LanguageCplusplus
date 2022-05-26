#include <iostream>

using namespace std;

int main(){

    int a, b, c, max;

    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;

    if(a > b){
        max = a;
    } else {
        max = b;
    }

    if(c > max){
        max = c;
    }

    cout << "The max of " << a << "&" << b << "&" << c << " is : " << max;

    return 0;
}


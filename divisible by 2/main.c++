#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Enter a number : ";
    cin >> a;

    if( a % 2 == 0){
        cout << "divisible by 2";
    } else {
        cout << "not divisible by 2";
    }
    

    return 0;
}

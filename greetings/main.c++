#include <iostream>

using namespace std;


int main(){

    int a;

    cout << "Enter a number : ";
    cin >> a;

    switch (a)
    {
    case 6:
        cout << "Bonjour";
        break;
    case 12:
        cout << "Bon après-midi";
        break;
    case 20:
        cout << "Bonsoir";
        break;
    case 23:
        cout << "Bonne nuit";
        break;
    
    default:
        cout << "Error";
        break;
    }

    return 0;
}


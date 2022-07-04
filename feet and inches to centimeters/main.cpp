#include <iostream>

using namespace std;

int main(){


    float feet, inches, cm;

    cout << "Enter feet : ";
    cin >> feet;

    cout << "Enter inches : ";
    cin >> inches;

    feet += inches / 12;

    cm = feet * 30.48;

    cout << feet << " feet = " << cm << " cm";

    return 0;
}
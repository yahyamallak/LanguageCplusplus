#include <iostream>

using namespace std;

int main(){


    float feet, cm;

    cout << "Enter feet : ";
    cin >> feet;

    cm = feet * 30.48;

    cout << feet << " feet = " << cm << " cm";

    return 0;
}
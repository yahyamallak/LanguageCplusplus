#include <iostream>

using namespace std;

int pwd(int base, int power);


int main() {


    cout << pwd(5,2);


    return 0;
}

int pwd(int base, int power) {
    if(power == 0) {
       return 1;
    } else {
        return (base * pwd(base, power - 1));
    }
}
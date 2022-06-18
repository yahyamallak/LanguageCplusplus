#include <iostream>

using namespace std;

int main(){

    int num;
    bool is_prime;

    cout << "Enter a number : ";
    cin >> num;

    for(int i = 2 ; i <= 100 ; i++){

        if(num != i){

            if(num % i != 0){
                is_prime = true;
            } else {
                is_prime = false;
                break;
            }
        }
    }

    if(is_prime){
        cout << "Prime number";
    } else {
        cout << "Not a Prime number";
    }

}
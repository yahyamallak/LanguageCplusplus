#include <iostream>

using namespace std;

int main(){

    int sum;

    cout << "Sum even numbers : " << endl;

    for(int i = 0 ; i <= 100 ; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }

    cout << "The sum : " << sum;
}
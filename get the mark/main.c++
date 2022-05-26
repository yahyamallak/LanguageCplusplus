#include <iostream>

using namespace std;


int main(){

    int a, b, c;
    float sum;

    cout << "Enter numbers : ";
    cin >> a >> b >> c;

    sum = a + b + c;

    if(sum / 3 < 10){
        cout << "Ajournée";
    } else if (sum / 3 >= 10 ){
        cout << "Passable";
    }else {
        cout << "Error";
    }
    

    

    return 0;
}


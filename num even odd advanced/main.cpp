#include <iostream>

using namespace std;

enum enNumberType { Odd = 1, Even = 2};

int ReadNumber(){
    int Num;

    cout << "Please enter a number : " << endl;
    cin >> Num;

    return Num;
}

enNumberType CheckNumberType(int Num) {
    if(Num % 2 == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumberType(enNumberType type) {
    if(type == 2)
        cout << "The number is even.";
    else if(type == 1)
        cout << "The number is odd.";
}

int main(){

    PrintNumberType(CheckNumberType(ReadNumber()));

    return 0;
}
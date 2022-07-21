/*
 by array

*/

#include <iostream>

using namespace std;

void getNums(int Nums[]) {

    for(int i = 0; i < 10; i++){
        cout << "Enter number " << i + 1 << " : ";
        cin >> Nums[i];
    }

}

int addNums(int Nums[]) {

    int sum;

    for(int i = 0; i < 10; i++)
        sum += Nums[i];

    return sum;
}

void printResult(int sum) {
    cout << "The result is : " << sum;
}

int main() {

    int Nums[10];

    getNums(Nums);

    printResult(addNums(Nums));

    return 0;
}
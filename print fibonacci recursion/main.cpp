#include <iostream>
#include <string>


using namespace std;


void FibonacciSeries(int number, int prev1, int prev2) {
    
    int sum = 0;

    if(number > 0) {
        sum = prev1 + prev2;
        prev2 = prev1;
        prev1 = sum;
        cout << sum << "  ";
        FibonacciSeries(number - 1, prev1, prev2);
    }
    
}


int main() {

    FibonacciSeries(10, 0, 1);

    return 0;
}
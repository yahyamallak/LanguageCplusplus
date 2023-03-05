#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int RandomNumber(int from, int to) {

    int number = rand() % (to - from + 1) + from;

    return number;
}


int main() {

    srand((unsigned)time(NULL));

   cout << RandomNumber(1, 5) << endl;
   cout << RandomNumber(1, 10) << endl;
   cout << RandomNumber(10, 20) << endl;
   cout << RandomNumber(100, 105) << endl;

    return 0;
}
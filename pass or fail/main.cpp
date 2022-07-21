/*
    mark >= 50 ==== pass
    else fail

*/


#include <iostream>

using namespace std;


int getMark() {

    int mark;

    cout << "Enter your mark : ";
    cin >> mark;

    return mark;
}

bool hasPassed(int mark) {
    if(mark >= 50)
        return true;
    else
        return false;
}


void printResult(bool result) {
    if(result)
        cout << "Passed";
    else
        cout << "Failed";
}


int main() {

    printResult(hasPassed(getMark()));

    return 0;
}
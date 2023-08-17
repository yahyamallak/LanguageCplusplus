#include <iostream>
#include <string>
#include <vector>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;

    do
    {

        cout << Message;
        cin >> Number;

    } while (Number < 0);

    return Number;
}

bool isYearLeap(int year) {
    return ((year % 100 == 0 && year % 400 == 0) || year % 4 == 0);
}

void showResult(bool isLeap) {
    if(isLeap) {
        cout << "Year is a leap" << endl;
    } else {
        cout << "Year is not a leap" << endl;
    }
}

int main()
{

    showResult(isYearLeap(ReadPositiveNumber("Enter a Year : ")));

    return 0;
}
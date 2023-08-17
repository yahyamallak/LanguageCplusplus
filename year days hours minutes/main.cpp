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

bool isYearLeap(int year)
{
    return ((year % 100 == 0 && year % 400 == 0) || year % 4 == 0);
}

int numberOfDaysInYear(int year) {
    return isYearLeap(year) ? 366 : 365;
}

int numberOfHoursInYear(int year) {
    return numberOfDaysInYear(year) * 24;
}

int numberOfMinutesInYear(int year) {
    return numberOfHoursInYear(year) * 60;
}

int numberOfSecondsInYear(int year) {
    return numberOfMinutesInYear(year) * 60;
}

int main()
{

    int year = ReadPositiveNumber("Enter a Year : ");

    cout << "Number of days    in year [" << year << "] is " << numberOfDaysInYear(year) << endl;
    cout << "Number of hours   in year [" << year << "] is " << numberOfHoursInYear(year) << endl;
    cout << "Number of minutes in year [" << year << "] is " << numberOfMinutesInYear(year) << endl;
    cout << "Number of seconds in year [" << year << "] is " << numberOfSecondsInYear(year) << endl;

    return 0;
}
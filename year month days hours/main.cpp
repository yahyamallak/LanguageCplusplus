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



int numberOfDaysInMonth(int year, short month) {

    if(month < 1 || month > 12) {
        return 0;
    }

    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (month == 2 && isYearLeap(year)) ? days[month - 1] + 1 : days[month - 1];

}

int numberOfHoursInMonth(int year, short month) {
    return numberOfDaysInMonth(year, month) * 24;
}

int numberOfMinutesInMonth(int year, short month) {
    return numberOfHoursInMonth(year, month) * 60;
}

int numberOfSecondsInMonth(int year, short month) {
    return numberOfMinutesInMonth(year, month) * 60;
}

int main()
{

    int year = ReadPositiveNumber("Enter a Year : ");
    short month = ReadPositiveNumber("Enter a month : ");

    cout << "Number of days    in month [" << month << "] is " << numberOfDaysInMonth(year, month) << endl;
    cout << "Number of hours   in month [" << month << "] is " << numberOfHoursInMonth(year, month) << endl;
    cout << "Number of minutes in month [" << month << "] is " << numberOfMinutesInMonth(year, month) << endl;
    cout << "Number of seconds in month [" << month << "] is " << numberOfSecondsInMonth(year, month) << endl;

    return 0;
}
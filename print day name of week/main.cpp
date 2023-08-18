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


int getDayOrder(int year, short month, short day) {

    int a, y, m;

    a = (14 - month) / 12;
    y = year - a;
    m = month + ( 12 * a ) - 2;

    return ( day + y + (y / 4) - (y / 100) + (y / 400) + ( ( 31 * m ) / 12 ) ) % 7; 
}

string getDayName(int dayOrder) {
    string days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    return days[dayOrder ];
}

void PrintResult(int year, short month, short day) {
    cout << endl;
    cout << "Date      : " << day << "/" << month << "/" << year << endl;
    cout << "Day order : " << getDayOrder(year, month, day) << endl;
    cout << "Day name  : " << getDayName(getDayOrder(year, month, day)) << endl;
}

int main()
{

    int year = ReadPositiveNumber("Enter a Year : ");
    short month = ReadPositiveNumber("Enter a month : ");
    short day = ReadPositiveNumber("Enter a day : ");

    PrintResult(year, month, day);

    return 0;
}
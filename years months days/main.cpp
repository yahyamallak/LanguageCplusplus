#include <iostream>

using namespace std;

int main(){

    int days, years, months;

    cout << "Enter days : ";
    cin >> days;

    years = days / 365;

    days = days % 365;

    months = days / 12;

    days = days % 12;

    cout << "Years = " << years << endl << "Months = " << months << endl << "Days = " << days;

    return 0;
}
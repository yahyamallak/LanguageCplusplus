#include<iostream>
#include <time.h>

using namespace std; 


struct Date {

    short day;
    short month;
    short year;

};

short ReadNumber() {
    short number;     
    cout << "\nHow many days to add? ";     
    cin >> number; 
    return number; 
}

short ReadDay() { 
    short Day;     
    cout << "\nPlease enter a Day? ";     
    cin >> Day; 
    return Day; 
} 

short ReadMonth() { 
    short Month;     
    cout << "\nPlease enter a Month? ";     
    cin >> Month; 
    return Month; 
} 

short ReadYear() { 
    short Year;     
    cout << "\nPlease enter a year? ";     
    cin >> Year; 
    
    return Year; 
}

Date enterDate(Date date) {

    date.day = ReadDay();
    date.month = ReadMonth();
    date.year = ReadYear();

    return date;
}

bool isLeapYear(short Year) { 
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0); 
} 

short numberOfDaysInYear(short year) {
    return isLeapYear(year) ? 366 : 365;
}

short DayOfWeekOrder(short Day, short Month, short Year) { 
    
    short a, y, m;     
    
    a = (14 - Month) / 12;     
    y = Year - a;     
    m = Month + (12 * a) - 2; 
    
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7; 

} 

string DayShortName(short DayOfWeekOrder) { 
    
    string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" }; 

    return arrDayNames[DayOfWeekOrder]; 

} 

short NumberOfDaysInAMonth(short Month, short Year) { 
    
    if (Month < 1 || Month>12) return  0; 
    
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; 
    
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1]; 

} 

short NumberOfDaysFromTheBeginningOfYear(short day, short month, short year) {

    short NumberDays = 0;

    for(int i = 1; i <= month - 1; i++ ) {   
        NumberDays += NumberOfDaysInAMonth(i, year);
    }

    NumberDays += day;

    return NumberDays;
}

bool isLastDay(Date date) {
    return (date.day == NumberOfDaysInAMonth(date.month, date.year));
}


bool isLastMonth(short month) {
    return (month == 12);
}

Date addOneDayToDate(Date date) {
    if(isLastDay(date)) {
        if(isLastMonth(date.month)) {
            date.day = 1;
            date.month = 1;
            date.year++;
        } else {
            date.day = 1;
            date.month++;
        }
    } else {
        date.day++;
    }

    return date;
}

bool date1EqualsDate2(Date date1, Date date2) {
    return (date1.year != date2.year) ? false : (date1.month != date2.month) ? false : (date1.day != date2.day) ? false : true;
}

int diffDates(Date date1, Date date2, bool inc = false) {
    int diff = 0;
    while(!date1EqualsDate2(date1, date2)) {
        date1 = addOneDayToDate(date1);
        diff++;
    }

    return inc ? ++diff : diff;
}

Date getSystemDate() {

    Date date;

    time_t t = time(0);
    tm* now = localtime(&t);

    date.year = now->tm_year + 1900;
    date.month = now->tm_mon + 1;
    date.day = now->tm_mday;

    return date;
}

short DayOfWeekOrder(Date date) {
    return DayOfWeekOrder(date.day, date.month, date.year);
}

bool IsEndOfWeek(Date date) {
    return (DayOfWeekOrder(date) == 6);
}

bool IsWeekEnd(Date date) {
    return (DayOfWeekOrder(date) == 5 || IsEndOfWeek(date));
}

bool IsBusinessDay(Date date) {
    return (!IsWeekEnd(date));
}

short DaysUntilTheEndOfWeek(Date date) {
    return 6 - DayOfWeekOrder(date);
}

short DaysUntilTheEndOfMonth(Date date) {

    Date date1;

    date1.day = NumberOfDaysInAMonth(date.month, date.year);
    date1.month = date.month;
    date1.year = date.year;

    return diffDates(date, date1, true);

}

short DaysUntilTheEndOfYear(Date date) {
    return numberOfDaysInYear(date.year) - NumberOfDaysFromTheBeginningOfYear(date.day, date.month, date.year);
}

short calculateVacationDays(Date date1, Date date2) {

    short days = 0;
    
    while(!date1EqualsDate2(date1, date2)) {
        
        if(IsBusinessDay(date1)) {
            days++;
        }

        date1 = addOneDayToDate(date1);
    }
    
    return days;

}


int main() { 
    
    Date date1, date2;

    cout << "Vacation starts : " << endl;
    date1 = enterDate(date1);

    cout << endl;

    cout << "Vacation ends : " << endl;
    date2 = enterDate(date2);

    cout << "Vacation from: " << DayShortName(DayOfWeekOrder(date1)) << " , " << date1.day << "/" << date1.month << "/" << date1.year << endl;
    cout << "Vacation to: " << DayShortName(DayOfWeekOrder(date2)) << " , " << date2.day << "/" << date2.month << "/" << date2.year << endl;

    cout << "Actual vacation days are : " << calculateVacationDays(date1, date2) << endl;

    return 0; 
}
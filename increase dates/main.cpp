#include<iostream>

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

short NumberOfDaysInAMonth(short Month, short Year) { 
    
    if (Month < 1 || Month>12) return  0; 
    
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; 
    
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1]; 

} 

bool isLastDay(Date date) {
    return (date.day == NumberOfDaysInAMonth(date.month, date.year));
}


bool isLastMonth(short month) {
    return (month == 12);
}

void lastDay(bool last) {
    if(last) {
        cout << "Yes, last day in month." << endl;
    } else {
        cout << "No, not last day in month." << endl;
    }
}

void lastMonth(bool month) {
    if(month) {
        cout << "Yes, last month in year." << endl;
    } else {
        cout << "No, not last month in year." << endl;
    }
}

Date increaseDateByOneDay(Date date) {
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

Date increaseDateByXDays(Date date, short days) {
    for(short i = 0; i < days; i++) {
        date = increaseDateByOneDay(date);
    }

    return date;
}

Date increaseDateByOneWeek(Date date) {

    for(short i = 0; i < 7; i++) {
        date = increaseDateByOneDay(date);
    }

    return date;
    
}


Date increaseDateByXWeeks(Date date, short weeks) {

    for(short i = 0; i < weeks; i++) {
        date = increaseDateByOneWeek(date);
    }

    return date;

}

Date increaseDateByOneMonth(Date date) {

    if(date.month == 12) {
        date.month = 1;
        date.year++;
    } else {
        date.month++;
    }

    short days = NumberOfDaysInAMonth(date.month, date.year);

    if(date.day > days) {
        date.day = days;
    }
    
    return date;

}

Date increaseDateByXMonths(Date date, short months) {

    for(short i = 0; i < months; i++) {
        date = increaseDateByOneMonth(date);
    }

    return date;

}

Date increaseDateByOneYear(Date date) {
    date.year++;
    return date;

}

Date increaseDateByXYears(Date date, short years) {

    for(short i = 0; i < years; i++) {
        date = increaseDateByOneYear(date);
    }

    return date;

}

Date increaseDateByXYearsFaster(Date date, short years) {
    date.year += years;
    return date;
}

Date increaseDateByOneDecade(Date date) {
    date.year += 10;
    return date;

}

Date increaseDateByXDecades(Date date, short decades) {

    for(short i = 0; i < decades; i++) {
        date = increaseDateByOneDecade(date);
    }

    return date;

}

Date increaseDateByXDecadesFaster(Date date, short decades) {
    date.year += (decades * 10);
    return date;
}

Date increaseDateByOneCentury(Date date) {
    date = increaseDateByXDecades(date, 10);
    return date;
}

Date increaseDateByOneMillennium(Date date) {
    date = increaseDateByXDecades(date, 100);;
    return date;
}


int main() { 
    
    Date date;

    date = enterDate(date);

    date = increaseDateByOneDay(date);

    cout << "Date after adding one day : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByXDays(date, 10);

    cout << "Date after adding 10 day : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByOneWeek(date);

    cout << "Date after adding one week : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByXWeeks(date, 10);

    cout << "Date after adding 10 weeks : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByOneMonth(date);

    cout << "Date after adding one month : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByXMonths(date, 5);

    cout << "Date after adding 5 months : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByOneYear(date);

    cout << "Date after adding one year : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByXYears(date, 10);

    cout << "Date after adding 10 years : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByXYearsFaster(date, 10);

    cout << "Date after adding 10 years (Faster) : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByOneDecade(date);

    cout << "Date after adding one decade : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByXDecades(date, 10);

    cout << "Date after adding 10 decades : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByXDecadesFaster(date, 10);

    cout << "Date after adding 10 decades (Faster) : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByOneCentury(date);

    cout << "Date after adding one century : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = increaseDateByOneMillennium(date);

    cout << "Date after adding one millennium : " << date.day << "/" << date.month << "/" << date.year << endl;
    

    return 0; 
}
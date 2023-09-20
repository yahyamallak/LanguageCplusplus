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

Date decreaseDateByOneDay(Date date) {
    if(date.day == 1) {
        if(date.month == 1) {
            date.year--;
            date.month = 12;
            date.day = 31;

        } else {
            date.month--;
            date.day = NumberOfDaysInAMonth(date.month, date.year);
        }
    } else {
        date.day--;
    }

    return date;
}

Date decreaseDateByXDays(Date date, short days) {
    for(short i = 0; i < days; i++) {
        date = decreaseDateByOneDay(date);
    }

    return date;
}

Date decreaseDateByOneWeek(Date date) {

    for(short i = 0; i < 7; i++) {
        date = decreaseDateByOneDay(date);
    }

    return date;
    
}


Date decreaseDateByXWeeks(Date date, short weeks) {

    for(short i = 0; i < weeks; i++) {
        date = decreaseDateByOneWeek(date);
    }

    return date;

}

Date decreaseDateByOneMonth(Date date) {

    if(date.month == 1) {
        date.year--;
        date.month = 12;
    } else {
        date.month--;
    }

    date.day = NumberOfDaysInAMonth(date.month, date.year);

    return date;

}

Date decreaseDateByXMonths(Date date, short months) {

    for(short i = 0; i < months; i++) {
        date = decreaseDateByOneMonth(date);
    }

    return date;

}

Date decreaseDateByOneYear(Date date) {
    date.year--;
    return date;

}

Date decreaseDateByXYears(Date date, short years) {

    for(short i = 0; i < years; i++) {
        date = decreaseDateByOneYear(date);
    }

    return date;

}

Date decreaseDateByXYearsFaster(Date date, short years) {
    date.year -= years;
    return date;
}

Date decreaseDateByOneDecade(Date date) {
    date.year -= 10;
    return date;

}

Date decreaseDateByXDecades(Date date, short decades) {

    for(short i = 0; i < decades; i++) {
        date = decreaseDateByOneDecade(date);
    }

    return date;

}

Date decreaseDateByXDecadesFaster(Date date, short decades) {
    date.year -= (decades * 10);
    return date;
}

Date decreaseDateByOneCentury(Date date) {
    date = decreaseDateByXDecades(date, 10);
    return date;
}

Date decreaseDateByOneMillennium(Date date) {
    date = decreaseDateByXDecades(date, 100);;
    return date;
}


int main() { 
    
    Date date;

    date = enterDate(date);

    date = decreaseDateByOneDay(date);

    cout << "Date after decreasing one day : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByXDays(date, 10);

    cout << "Date after decreasing 10 day : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByOneWeek(date);

    cout << "Date after decreasing one week : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByXWeeks(date, 10);

    cout << "Date after decreasing 10 weeks : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByOneMonth(date);

    cout << "Date after decreasing one month : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByXMonths(date, 5);

    cout << "Date after decreasing 5 months : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByOneYear(date);

    cout << "Date after decreasing one year : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByXYears(date, 10);

    cout << "Date after decreasing 10 years : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByXYearsFaster(date, 10);

    cout << "Date after decreasing 10 years (Faster) : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByOneDecade(date);

    cout << "Date after decreasing one decade : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByXDecades(date, 10);

    cout << "Date after decreasing 10 decades : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByXDecadesFaster(date, 10);

    cout << "Date after decreasing 10 decades (Faster) : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByOneCentury(date);

    cout << "Date after decreasing one century : " << date.day << "/" << date.month << "/" << date.year << endl;

    date = decreaseDateByOneMillennium(date);

    cout << "Date after decreasing one millennium : " << date.day << "/" << date.month << "/" << date.year << endl;
    

    return 0; 
}
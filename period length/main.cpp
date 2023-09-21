#include<iostream>

using namespace std; 


struct Date {

    short day;
    short month;
    short year;

};

struct Period {

    Date startDate;
    Date endDate;

};


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


bool date1EqualsDate2(Date date1, Date date2) {
    return (date1.year != date2.year) ? false : (date1.month != date2.month) ? false : (date1.day != date2.day) ? false : true;
}

bool isDate1BeforeDate2(Date date1, Date date2) {

    if(date1.year < date2.year) {
        return true;
    } else {
        if(date1.month < date2.month) {
            return true;
        } else {
            if(date1.day < date2.day) {
                return true;
            } else {
                return false;
            }
        }
    } 
}

bool isDate1AfterDate2(Date date1, Date date2) {
    return (!isDate1BeforeDate2(date1, date2) && !date1EqualsDate2(date1, date2));
}

void isBefore(bool before) {
    if(before) {
        cout << "Yes, Date1 before Date2" << endl;
    } else {
        cout << "No, Date1 not before Date2" << endl;
    }
}

void isAfter(bool after) {
    if(after) {
        cout << "Yes, Date1 after Date2" << endl;
    } else {
        cout << "No, Date1 not after Date2" << endl;
    }
}

short compareDates(Date date1, Date date2) {
    return (isDate1BeforeDate2(date1, date2) ? -1 : (isDate1AfterDate2(date1, date2) ? 1 : 0));
}

bool isPeriodsOverlap(Period date1, Period date2) {
    if(isDate1AfterDate2(date2.startDate, date1.endDate) || isDate1AfterDate2(date1.startDate, date2.endDate)) {
        return false;
    }
    return true;
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

int diffDates(Date date1, Date date2, bool inc = false) {
    int diff = 0;
    while(!date1EqualsDate2(date1, date2)) {
        date1 = addOneDayToDate(date1);
        diff++;
    }

    return inc ? ++diff : diff;
}

int periodLength(Period date, bool inc = false) {
    return diffDates(date.startDate, date.endDate, inc);
}


int main() { 
    
    Period date1;

    cout << "Enter Period 1 : " << endl;
    cout << "Enter start date : " << endl;

    date1.startDate = enterDate(date1.startDate);

    cout << "Enter end date : " << endl;

    date1.endDate = enterDate(date1.endDate);


    cout << "Period length : " << periodLength(date1) << endl;
    cout << "Period length (including end date) : " << periodLength(date1, true) << endl;

    return 0; 
}
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


int main() { 
    
    Date date;

    date = enterDate(date);

    lastDay(isLastDay(date));

    lastMonth(isLastMonth(date.month));
    

    return 0; 
}
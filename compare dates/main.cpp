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


int main() { 
    
    Date date1, date2;

    date1 = enterDate(date1);

    cout << endl;

    date2 = enterDate(date2);

    cout << compareDates(date1, date2);

    return 0; 
}
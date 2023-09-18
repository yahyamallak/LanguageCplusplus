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

bool compareDates(Date date1, Date date2) {

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

void isLess(bool less) {
    if(less) {
        cout << "Yes, Date1 less than Date2" << endl;
    } else {
        cout << "No, Date1 not less than Date2" << endl;
    }
}

int main() { 
    
    Date date1, date2;

    date1 = enterDate(date1);

    cout << endl;

    date2 = enterDate(date2);

    isLess(compareDates(date1, date2));

    return 0; 
}
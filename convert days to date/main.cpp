#include<iostream>

using namespace std; 


struct Date {

    short day;
    short month;
    short year;

};

bool isLeapYear(short Year) { 
    
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0); 
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

string MonthShortName(short MonthNumber) { 
    
    string Months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}; 
    
    return (Months[MonthNumber - 1]); 
} 
    
void PrintMonthCalendar(short Month, short Year) { 
    int NumberOfDays;
    
    int current = DayOfWeekOrder(1, Month, Year);     
    NumberOfDays = NumberOfDaysInAMonth(Month, Year); 

    printf("\n  _______________%s_______________\n\n",MonthShortName(Month).c_str()); 

    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n"); 

    int i; 
    for (i = 0; i < current; i++)         
        printf("     "); 
    
    for (int j = 1; j <= NumberOfDays; j++) {         
        printf("%5d", j); if (++i == 7)         
        {             
            i = 0;             
            printf("\n");         
        }     
    }    
    
    printf("\n  _________________________________\n"); 
    
} 

void PrintYearCalendar(int year) {
    
    printf("\n  _________________________________\n"); 

    printf("\n\t Calendar - %d", year); 
    
    printf("\n  _________________________________\n"); 

    for(int i = 1; i <= 12; i++) {
        PrintMonthCalendar(i, year);
    }
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

short NumberOfDaysFromTheBeginningOfYear(short day, short month, short year) {

    short NumberDays = 0;

    for(int i = 1; i <= month - 1; i++ ) {   
        NumberDays += NumberOfDaysInAMonth(i, year);
    }

    NumberDays += day;

    return NumberDays;
}

Date ConvertDaysToDate(short days, short year) {

    Date date;

    date.day = 0;
    date.month = 0;
    date.year = year;

    for(int i = 1; i <= 12; i++) {

        if(days < NumberOfDaysInAMonth(i, year)) {
            date.day = days;
            date.month++;
            break;
        }

       days -= NumberOfDaysInAMonth(i, year);
       date.month++;
    }

    return date;
}

int main() { 
    
    short Day = ReadDay();
    short Month = ReadMonth(); 
    short Year = ReadYear();
    
    short NumberDays = NumberOfDaysFromTheBeginningOfYear(Day, Month, Year);
 
    cout << "Number of days from the beginning of the year " << NumberDays << endl;

    Date date;

    date = ConvertDaysToDate(NumberDays, Year);

    cout << date.day << "/" << date.month << "/" << date.year << endl;

    system("pause>0"); 
    
    return 0; 
}
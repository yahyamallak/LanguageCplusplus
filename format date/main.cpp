#include<iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std; 

struct Date {

    short day;
    short month;
    short year;

};

string ReadDateString() {

    string date;
    cout << "Enter date dd/mm/yy : ";
    getline(cin, date);

    return date;
}

vector<string> SplitString(string sentence, string delimeter = " ") {

    int pos = 0;
    string word;

    vector<string> tokens;

    while((pos = sentence.find(delimeter)) != string::npos) {
        
        word = sentence.substr(0, pos);

        if(word != "") {
            tokens.push_back(word);
        }

        sentence.erase(0, pos + delimeter.length());
    }

    if(sentence != "") {
        tokens.push_back(sentence);
    }


    return tokens;

}

Date stringToDate(string dateString) {
    
    Date date;
    vector<string> dates;
    
    dates = SplitString(dateString, "/");

    date.day = atoi(dates[0].c_str());
    date.month = atoi(dates[1].c_str());
    date.year = atoi(dates[2].c_str());

    return date;
}


string dateToString(Date date, string format = "/") {

    string dateString, day, month, year;

    day = to_string(date.day);
    month = to_string(date.month);
    year = to_string(date.year);

    dateString = day + format + month + format + year;

    return dateString;

}


string ReplaceWordInString(string S1, string StringToReplace, string sRepalceTo) { 
    
    short pos = S1.find(StringToReplace); 
    
    while (pos != std::string::npos)
    { 
        S1=S1.replace(pos, StringToReplace.length(), sRepalceTo);         
        pos = S1.find(StringToReplace);
    } 
    
    return S1; 

}


string formatDate(Date date, string DateFormat = "dd/mm/yyyy") { 
    
    string FormattedDateString = "";
    
    FormattedDateString = ReplaceWordInString(DateFormat, "dd", to_string(date.day));     
    FormattedDateString = ReplaceWordInString(FormattedDateString, "mm", to_string(date.month));     
    FormattedDateString = ReplaceWordInString(FormattedDateString, "yyyy", to_string(date.year)); 
    
    return  FormattedDateString; 

}


int main() { 
    
    string dateString;
    Date date;

    dateString = ReadDateString();
    
    date = stringToDate(dateString);

    cout << formatDate(date, "dd/mm/yyyy") << endl;
    cout << formatDate(date, "mm/dd/yyyy") << endl;
    cout << formatDate(date, "dd-mm-yyyy") << endl;
    cout << formatDate(date, "mm-dd-yyyy") << endl;
    cout << formatDate(date, "yyyy/mm/dd") << endl;
    cout << formatDate(date, "Day: dd, Month: mm, Year: yyyy") << endl;

    return 0; 
}
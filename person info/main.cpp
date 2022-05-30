#include <iostream>
#include <string>

using namespace std;

struct strInfo
{
    string firstname;
    string lastname;
    int age;
    string phone;
};

void ReadInfo(strInfo &Person){
    cout << "Enter your first name : ";
    cin >> Person.firstname;

    cout << "Enter your last name : ";
    cin >> Person.lastname;

    cout << "Enter your age : ";
    cin >> Person.age;

    cout << "Enter your phone : ";
    cin >> Person.phone;
}

void PrintInfo(strInfo Person){
    cout << "First name : " << Person.firstname << endl;
    cout << "Last name : " << Person.lastname << endl;
    cout << "Age : " << Person.age << endl;
    cout << "Phone : " << Person.phone << endl;
}


int main(){

    strInfo Person1;
    ReadInfo(Person1);
    PrintInfo(Person1);


    return 0;
}
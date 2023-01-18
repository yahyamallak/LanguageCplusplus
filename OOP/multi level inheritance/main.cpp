#include <iostream>

using namespace std;

class Person {

    public:

    string name;
    int age;

};

class Employee : public Person {

    public:

    string company;
    string role;
    float salary;

};

class Developer : public Employee {

    public:

    string language;

};


int main() {

    Developer dev;

    dev.name = "yahya";
    dev.age = 28;
    dev.role = "developer";
    dev.salary = 1500;
    dev.company = "IBM";
    dev.language = "C#";


    cout << dev.name << endl;

    return 0;
}
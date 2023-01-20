#include <iostream>

using namespace std;


class Employee {

    string _firstname;
    string _lastname;
    string _title;
    string _email;
    string _phone;
    string _salary;
    string _department;


    public:

    Employee(string firstname, string lastname, string title, string email, string phone, string salary, string department) {
        _firstname = firstname;
        _lastname = lastname;
        _title = title;
        _email = email;
        _phone = phone;
        _salary = salary;
        _department = department;

    }

    FullName() {
        cout << _firstname << " "  << _lastname << endl; 
    }

    SendEmail() {
        cout << "Email has been sent successfully to "; 
        FullName();
    }

    SendSMS() {
        cout << "SMS has been sent successfully to "; 
        FullName();
    }

    Print() {
        cout << "First name : " << _firstname << endl;
        cout << "Last name  : " << _lastname << endl;
        cout << "Title      : " << _title << endl;
        cout << "Email      : " << _email << endl;
        cout << "Phone      : " << _phone << endl;
        cout << "Salary     : " << _salary << endl;
        cout << "Department : " << _department << endl;
    }

    // Set functions

    void setFirstname(string firstname) {
        _firstname = firstname;
    }

    void setLastname(string lastname) {
        _lastname = lastname;
    }

    void setTitle(string title) {
        _title = title;
    }

    void setEmail(string email) {
        _email = email;
    }

    void setPhone(string phone) {
        _phone = phone;
    }

    void setSalary(string salary) {
        _salary = salary;
    }

    void setDepartment(string department) {
        _department = department;
    }

    // Get functions

    string getFirstname() {
        return _firstname;
    }

    string getLastname() {
        return _lastname;
    }

    string getTitle() {
        return _title;
    }

    string getEmail() {
        return _email;
    }

    string getPhone() {
        return _phone;
    }

    string getSalary() {
        return _salary;
    }

    string getDepartment() {
        return _department;
    }


};


int main() {


    Employee employee1("Yahya", "Mallak", "Developer", "yahyamallak@gmail.com", "0658742596", "1500$", "IT");

    employee1.FullName();

    employee1.SendEmail();

    employee1.SendSMS();

    employee1.setFirstname("Adam");

    cout << employee1.getFirstname() << endl;

    employee1.setTitle("Designer");

    employee1.Print();


    return 0;
}
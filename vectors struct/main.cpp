#include <iostream>
#include <vector>

using namespace std;

struct Employee {
    string firstname;
    string lastname;
    int salary;
};

void readEmployees(vector <Employee> & Employees);

void printEmployees(vector <Employee> & Employees);


int main() {

    vector <Employee> Employees;
    readEmployees(Employees);
    printEmployees(Employees);

    return 0;
}


void readEmployees(vector <Employee> & Employees) {
    
    Employee employee;
    char choice = 'Y';

    do {

        cout << "Enter firstname? ";
        cin >> employee.firstname;

        cout << "Enter lastname? ";
        cin >> employee.lastname;

        cout << "Enter salary? ";
        cin >> employee.salary;

        Employees.push_back(employee);

        cout << "Do you want to read more employees? Y/N";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');
}


void printEmployees(vector <Employee> & Employees) {
    for(Employee & employee : Employees) {
        cout << employee.firstname << endl;
        cout << employee.lastname << endl;
        cout << employee.salary << endl;
        cout << endl;
    }
}
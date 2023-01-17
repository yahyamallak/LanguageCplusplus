#include <iostream>

using namespace std;

class Person {

private:

    string _name;
    int _age;

public:

    // Constructor

    Person(string name, int age) {
        _name = name;
        _age = age;
    }

    // Copy constructor

    Person(Person & obj) {
        _name = obj._name;
        _age = obj._age;
    }


    // Methods

    void printInfo() {
        cout << _name << endl;
        cout << _age << endl;
    }


};

int main(){


    Person person1("yahya", 28);

    person1.printInfo();

    // copy constructor

    Person person2 = person1;

    person2.printInfo();

    return 0;
}
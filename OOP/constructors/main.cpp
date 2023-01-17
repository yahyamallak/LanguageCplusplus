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


    // Methods

    void printInfo() {
        cout << _name << endl;
        cout << _age << endl;
    }


};

int main(){


    Person person1("yahya", 28);

    person1.printInfo();

    

    return 0;
}
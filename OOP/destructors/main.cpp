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

    // Destructor

    ~Person() {
        cout << "Done! object destroyed" << endl;
    }

    // Methods

    void printInfo() {
        cout << _name << endl;
        cout << _age << endl;
    }


};

void call() {
    Person person1("yahya",28);
    person1.printInfo();
}

int main(){

    call();

    return 0;
}
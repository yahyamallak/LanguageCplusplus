#include <iostream>

using namespace std;

class Person {

public:

    float mark;
    static int counter;


    Person(float mark) {
        this->mark = mark;
        counter++;
    }

    // Methods

    void print() {
        cout << "Mark : " << mark << endl;
        cout << "Person : " << counter << endl;
    }

    static void counterNumber(){
        cout << "Now : " << counter << endl;
    }


};

int Person::counter = 0;

int main(){


    Person p1(15);

    p1.print();

    Person p2(12);

    p2.print();

    Person::counterNumber();

    
    return 0;
}
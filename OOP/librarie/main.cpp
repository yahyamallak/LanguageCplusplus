#include <iostream>
#include "person.h"

using namespace std;


int main() {

    Person person1;

    person1.setName("Yahya");
    cout << person1.getName() << endl;

    person1.setAge(28);
    cout << person1.getAge() << endl;

    person1.setCountry("Morocco");
    cout << person1.getCountry() << endl;

    person1.setCity("Casablanca");
    cout << person1.getCity() << endl;

    person1.setStreet("Donia");
    cout << person1.getStreet() << endl;

    person1.setFlat(8);
    cout << person1.getFlat() << endl;

    return 0;
}
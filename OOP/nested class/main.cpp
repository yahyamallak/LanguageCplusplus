#include <iostream>

using namespace std;

class Person {

    class Address {

        public:
        
        string country;
        string city;
        string street;
        int flat;

    };

    public:

    string name;
    int age;
    Address address;

    Person(string name, int age, string country, string city, string street, int flat) {

        this->name = name;
        this->age = age;
        this->address.country = country;
        this->address.city = city;
        this->address.street = street;
        this->address.flat = flat;
    }


};


int main() {

    Person person1("Yahya", 28, "Morocco", "Casablanca", "Donia", 25);

    cout << person1.name << endl;
    cout << person1.address.country << endl;

    return 0;
}
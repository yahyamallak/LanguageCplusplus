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

    string _name;
    int _age;
    Address _address;
    
    public:

    // Name

    string getName() {
        return _name;
    }

    void setName(string name) {
        _name = name;
    }

    // Age

    int getAge() {
        return _age;
    }

    void setAge(int age) {
        _age = age;
    }

    // Address country

    string getCountry() {
        return _address.country;
    }

    void setCountry(string country) {
        _address.country = country;
    }


    // Address city

    string getCity() {
        return _address.city;
    }

    void setCity(string city) {
        _address.city = city;
    }


    // Address street

    string getStreet() {
        return _address.street;
    }

    void setStreet(string street) {
        _address.street = street;
    }


    // Address flat

    int getFlat() {
        return _address.flat;
    }

    void setFlat(int flat) {
        _address.flat = flat;
    }


};
#include <iostream>

using namespace std;

class Person {

    private:

    string _firstName;
    string _lastName;
    int _age;
    string _city;
    string _country;


    public:

    // First name

    void setFirstName(string firstname) {
        _firstName = firstname;
    }

    string getFirstName() {
        return _firstName;
    }

    // Last name

    void setLastName(string lastname) {
        _lastName = lastname;
    }

    string getLastName() {
        return _lastName;
    }

    // Age

    void setAge(int age) {
        _age = age;
    }

    int getAge() {
        return _age;
    }


    // City

    void setCity(string city) {
        _city = city;
    }

    string getCity() {
        return _city;
    }


    // Country

    void setCountry(string country) {
        _country = country;
    }

    string getCountry() {
        return _country;
    }


};

int main(){

    Person person1;

    person1.setFirstName("Yahya");
    person1.setLastName("Mallak");
    person1.setAge(28);
    person1.setCity("Casablanca");
    person1.setCountry("Morocco");

    string firstname = person1.getFirstName();
    string lastname = person1.getLastName();
    int age = person1.getAge();
    string city = person1.getCity();
    string country = person1.getCountry();


    cout << firstname << endl;
    cout << lastname << endl;
    cout << age << endl;
    cout << city << endl;
    cout << country << endl;


    return 0;
}
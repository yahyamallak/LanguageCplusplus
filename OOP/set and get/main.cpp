#include <iostream>
#include <string>

using namespace std;

class Person {

    private:

    string _name;


    public:

    string getName() {
        return _name;
    }

    void setName(string name) {
        _name = name;
    }


};

int main(){

    Person person1;

    person1.setName("Yahya");
    cout << person1.getName() << endl;
    
}
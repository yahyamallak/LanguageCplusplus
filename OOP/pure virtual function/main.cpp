#include <iostream>

using namespace std;

// Interface

class Phone {

    virtual void printInfo() = 0;
    virtual void isSmartphone() = 0;
};


class Iphone : public Phone {

    public :

    void printInfo() {

    };
    
    void isSmartphone() {

    };
};

int main() {


    return 0;
}
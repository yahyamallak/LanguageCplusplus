#include <iostream>

using namespace std;

class Test1 {

    private:

    int number;


    public:

    Test1() {
        number = 10;
    }

    friend class Test2;

};


class Test2 {

    public:

    void print(Test1 obj) {
        cout << "The number : " << obj.number << endl;
    }

};


int main() {

    Test2 test2;
    Test1 test1;
    
    test2.print(test1);

    return 0;
}
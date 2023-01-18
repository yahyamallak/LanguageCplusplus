#include <iostream>

using namespace std;

class Test1 {

    private:

    int number;


    public:

    Test1() {
        number = 10;
    }

    friend int Sum(Test1 obj);
};

int Sum(Test1 obj) {
    return obj.number + 10;
}


int main() {

    Test1 test1;
    
    cout << Sum(test1) << endl;

    return 0;
}
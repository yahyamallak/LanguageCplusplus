#include <iostream>

using namespace std;

namespace Global {
    namespace Entier {
    int Addition(int x, int y){
        return x + y;
    }

    int Soustraction(int x, int y){
        return x - y;
    }

    int Multiplication(int x, int y){
        return x * y;
    }

    float Division(int x, int y){
        if(y!=0)
        return (float) x / y;
        else
        return false;
    }
}


namespace Reel {
    float Addition(float x, float y){
        return x + y;
    }

    float Soustraction(float x, float y){
        return x - y;
    }

    float Multiplication(float x, float y){
        return x * y;
    }

    float Division(float x, float y){
        if(y!=0)
        return x / y;
        else
        return false;
    }
}
}


int main(){

    int a, b;
    float x, y;

    cout << "Enter 2 integers : "
    cin >> a >> b;

    cout << "Enter 2 floats : "
    cin >> x >> y;

    cout << "A + B = " << Global::Entier::Addition(a,b);
    cout << "A - B = " << Global::Entier::Soustraction(a,b);
    cout << "A * B = " << Global::Entier::Multiplication(a,b);
    cout << "A / B = " << Global::Entier::Division(a,b);

    cout << endl;

    cout << "X + Y = " << Global::Reel::Addition(a,b);
    cout << "X - Y = " << Global::Reel::Soustraction(a,b);
    cout << "X * Y = " << Global::Reel::Multiplication(a,b);
    cout << "X / Y = " << Global::Reel::Division(a,b);

    return 0;
}
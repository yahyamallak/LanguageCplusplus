#include <iostream>

using namespace std;


void start();

void tableHeader();

void seperator();

void table();


int main() {

    start();
    tableHeader();
    seperator();
    table();

    return 0;
}

void start() {
    cout << "\t\t\t Multiplication table from 1 to 10" << endl;
}

void tableHeader() {
    cout << endl;
    for(int i=1; i<=10; i++) {
        cout << "\t" << i;
    }
    cout << endl;
}

void seperator() {
    cout << "-----------------------------------------------------------------------------------";
    cout << endl;
}

void table() {
    for(int i=1; i<=10; i++) {
        if(i == 10) {
            cout << i << "  | \t";
        } else {
            cout << i << "   | \t";
        }
        
        for(int j=1; j<=10; j++) {
            cout << i*j << "\t";
        }
        cout << endl;
    }
}
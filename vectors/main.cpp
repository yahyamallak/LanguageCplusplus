#include <iostream>
#include <vector>

using namespace std;

void readNumbers(vector <int> & vNumbers);

void PrintVectorNumbers(vector <int> vNumbers);


int main() {

    vector <int> vNumbers;
    readNumbers(vNumbers);
    PrintVectorNumbers(vNumbers);

    return 0;
}


void readNumbers(vector <int> & vNumbers) {
    
    int number;
    char choice = 'Y';

    do {

        cout << "Please Enter a number? ";
        cin >> number;

        vNumbers.push_back(number);

        cout << "Do you want to read more numbers? Y/N";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');
}


void PrintVectorNumbers(vector <int> vNumbers) {
    for(int & number : vNumbers) {
        cout << number << endl;
    }
}
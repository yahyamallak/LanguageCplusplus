#include <iostream>

using namespace std;

int main(){

    int grades[3], total=0;

    for(int i = 0; i < 3; i++){
        cout << "Enter the grade " << i+1 << " : ";
        cin >> grades[i];

        total += grades[i];
    }

    cout << "The average of grades : " << total / 3;

    return 0;
}
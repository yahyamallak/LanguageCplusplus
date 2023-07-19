#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;



int RandomNumber(int from, int to) {

    int number = rand() % (to - from + 1) + from;

    return number;
}

void FillMatrix(int matrix[3][3]) {
    
    for(int i = 0 ; i < 3; i++) {
        for(int j = 0 ; j < 3; j++) {
            matrix[i][j] = RandomNumber(1, 100);
        }
    }
}


void PrintMatrix(int matrix[3][3]) {
    
    for(int i = 0 ; i < 3; i++) {
        for(int j = 0 ; j < 3; j++) {
            if(matrix[i][j] < 10) {
                cout << "0";
            }
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
}



bool isNumInMatrix(int matrix[3][3], int num) {
    for(int i = 0 ; i < 3; i++) {
        for(int j = 0 ; j < 3; j++) {
            if(matrix[i][j] == num) {
                return true;
            }
        }
    }

    return false;
}

void PrintResult(bool found) {
    if(found) {
        cout << "Yep, it is." << endl;
    } else {
        cout << "No, it is not." << endl;
    }
}


int main() {

    srand((unsigned)time(NULL));

    int matrix[3][3], num;

    FillMatrix(matrix);

    cout << "Matrix : " << endl;

    PrintMatrix(matrix);

    cout << "Enter num : ";
    cin >> num;

    PrintResult(isNumInMatrix(matrix, num));

    return 0;
}
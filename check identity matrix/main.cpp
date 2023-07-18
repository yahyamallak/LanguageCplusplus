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
            matrix[i][j] = RandomNumber(1, 10);
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


bool CheckIdentityMatrix(int matrix[3][3]) {

    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            if(i == j) {
                if(matrix[i][j] != 1) {
                    return false;
                }
            } else {
                if(matrix[i][j] != 0) {
                    return false;
                }
            }
        }
    }

    return true;

}

void PrintResult(bool identity) {
    if(identity) {
        cout << "Yep, Matrix is identity." << endl;
    } else {
        cout << "No, Matrix is not identity." << endl;
    }
}


int main() {

    srand((unsigned)time(NULL));

    int matrix[3][3];

    FillMatrix(matrix);

    cout << "Matrix : " << endl;

    PrintMatrix(matrix);

    PrintResult(CheckIdentityMatrix(matrix));

    return 0;
}
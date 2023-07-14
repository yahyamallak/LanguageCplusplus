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

void MultiplyMatrix(int matrix1[3][3], int matrix2[3][3], int matrix[3][3]) {
    
    for(int i = 0 ; i < 3; i++) {
        for(int j = 0 ; j < 3; j++) {
            matrix[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }
}


int main() {

    srand((unsigned)time(NULL));

    int matrix1[3][3], matrix2[3][3], matrix[3][3];

    FillMatrix(matrix1);
    FillMatrix(matrix2);

    cout << "The matrix 1: " << endl;

    PrintMatrix(matrix1);

    cout << "The matrix 2: " << endl;

    PrintMatrix(matrix2);

    cout << "Multiply the 2 matrices: " << endl;

    MultiplyMatrix(matrix1, matrix2, matrix);

    PrintMatrix(matrix);

    return 0;
}
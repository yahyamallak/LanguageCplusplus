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

int SumMatrix(int matrix[3][3]) {

    int sum = 0;

    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            sum += matrix[i][j];
        }
    }

    return sum;

}

bool CheckMatricesEquality(int matrix1[3][3], int matrix2[3][3]) {
    return (SumMatrix(matrix1) == SumMatrix(matrix2));
}

void PrintResult(bool equality) {
    if(equality) {
        cout << "Yep, Matrices are equal." << endl;
    } else {
        cout << "No, Matrices are not equal." << endl;
    }
}


int main() {

    srand((unsigned)time(NULL));

    int matrix1[3][3], matrix2[3][3];

    FillMatrix(matrix1);
    FillMatrix(matrix2);

    cout << "Matrix 1 : " << endl;

    PrintMatrix(matrix1);

    cout << "Matrix 2 : " << endl;

    PrintMatrix(matrix2);


    PrintResult(CheckMatricesEquality(matrix1, matrix2));

    return 0;
}
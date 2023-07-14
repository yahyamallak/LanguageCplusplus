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

void PrintMiddleRowMatrix(int matrix[3][3]) {

        for(int j = 0 ; j < 3; j++) {
            if(matrix[1][j] < 10) {
                cout << "0";
            }
            cout << matrix[1][j] << "\t";
        }

        cout << endl;
}


void PrintMiddleColMatrix(int matrix[3][3]) {

        for(int i = 0 ; i < 3; i++) {
            if(matrix[i][1] < 10) {
                cout << "0";
            }
            cout << matrix[i][1] << "\t";
        }

        cout << endl;
}


int main() {

    srand((unsigned)time(NULL));

    int matrix[3][3];

    FillMatrix(matrix);

    cout << "The matrix: " << endl;

    PrintMatrix(matrix);

    cout << "The middle row of the matrix: " << endl;

    PrintMiddleRowMatrix(matrix);

    cout << "The middle col of the matrix: " << endl;

    PrintMiddleColMatrix(matrix);


    return 0;
}
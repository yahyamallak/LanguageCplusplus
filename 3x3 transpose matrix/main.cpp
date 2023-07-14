#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;



void FillMatrix(int matrix[3][3]) {

    int num = 1;
    
    for(int i = 0 ; i < 3; i++) {
        for(int j = 0 ; j < 3; j++) {
            matrix[i][j] = num++;
        }
    }
}


void PrintMatrix(int matrix[3][3]) {
    
    for(int i = 0 ; i < 3; i++) {
        for(int j = 0 ; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
}


void PrintTransposedMatrix(int matrix[3][3]) {
    
    for(int i = 0 ; i < 3; i++) {
        for(int j = 0 ; j < 3; j++) {
            cout << matrix[j][i] << "\t";
        }
        cout << "\n";
    }
}



int main() {

    srand((unsigned)time(NULL));

    int matrix[3][3];

    FillMatrix(matrix);

    cout << "The following is a 3x3 asc matrix: " << endl;

    PrintMatrix(matrix);


    cout << "The following is a 3x3 transposed asc matrix: " << endl;

    PrintTransposedMatrix(matrix);

    return 0;
}
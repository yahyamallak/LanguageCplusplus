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
            matrix[i][j] = RandomNumber(0, 100);
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

int SumColsMatrix(int matrix[3][3], int col) {

    int sum = 0;

    for(int i = 0; i < 3; i++) {
        sum += matrix[i][col];
    }

    return sum;

}

void PrintSumColsMatrix(int matrix[3][3]) {

    int sums[3] = {0};
    
    for(int i = 0; i < 3; i++) {
        sums[i] = SumColsMatrix(matrix, i);
    }

    for(int i = 0; i < 3; i++) {
        cout << "Col " << i + 1 << " sum = " << sums[i] << "\n";
    }

}



int main() {

    srand((unsigned)time(NULL));

    int matrix[3][3];

    FillMatrix(matrix);

    cout << "The following is a 3x3 random matrix: " << endl;

    PrintMatrix(matrix);


    cout << "The following are the sums of each col in the random matrix: " << endl;

    PrintSumColsMatrix(matrix);

    return 0;
}
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

void PrintIntersectedNums(int nums[9], int size) {
    cout << "Intersected numbers : " << endl;
    for(int i = 0; i < size; i++) {
        cout << nums[i] << "\t";
    }
}

void GetMatricesIntersected(int matrix1[3][3], int matrix2[3][3]) {
    
    int intersectedNums[9], k = 0;
    
    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            if(isNumInMatrix(matrix2, matrix1[i][j])) {
                intersectedNums[k] = matrix1[i][j];
                k++;
            }
        }
    }

    PrintIntersectedNums(intersectedNums, k);
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


    GetMatricesIntersected(matrix1, matrix2);

    return 0;
}
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


bool CheckMatrixPalindrome(int matrix[3][3], int rows, int cols) {

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols / 2; j++) {
            if(matrix[i][j] != matrix[i][cols - 1 - j]) {
                return false;
            }
        }
    }
    

    return true;

}

void PrintResult(bool palindrome) {
    if(palindrome) {
        cout << "It is a palindrome";
    } else {
        cout << "It is not a palindrome";
    }
}


int main() {

    srand((unsigned)time(NULL));

    int matrix[3][3];

    FillMatrix(matrix);

    cout << "Matrix : " << endl;

    PrintMatrix(matrix);

    PrintResult(CheckMatrixPalindrome(matrix, 3, 3));

    return 0;
}
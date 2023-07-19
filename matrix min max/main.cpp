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


void GetMaxMinMatrix(int matrix[3][3]) {

    int max = matrix[0][0], min = matrix[0][0];

    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            } else if(matrix[i][j] < min){
                min = matrix[i][j];
            }
        }
    }

    cout << "Max : " << max << endl;
    cout << "Min : " << min << endl;

}


int main() {

    srand((unsigned)time(NULL));

    int matrix[3][3];

    FillMatrix(matrix);

    cout << "Matrix : " << endl;

    PrintMatrix(matrix);

    GetMaxMinMatrix(matrix);

    return 0;
}
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


int CheckCountNumMatrix(int matrix[3][3]) {

    int times = 0, num;

    cout << "Enter a num : ";
    cin >> num;

    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            if(matrix[i][j] == num) {
                times++;
            }
        }
    }

    return times;

}

void PrintResult(int times) {
    
    cout << "the number appeared in matrix : " << times << " times." << endl;
    
}


int main() {

    srand((unsigned)time(NULL));

    int matrix[3][3];

    FillMatrix(matrix);

    cout << "Matrix : " << endl;

    PrintMatrix(matrix);

    PrintResult(CheckCountNumMatrix(matrix));

    return 0;
}
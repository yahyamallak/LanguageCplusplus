#include <iostream>
#include <string>
#include <ctime>
#include <array>


using namespace std;


int ReadPositiveNumber(string Message) {
    int Number;

    do {

        cout << Message << endl;
        cin >> Number;

    } while(Number < 0);

    return Number;
}


int RandomNumber(int from, int to) {

    int number = rand() % (to - from + 1) + from;

    return number;
}

void Swap(int &x, int &y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
}

void FillArray(int arr[100], int & arrLength) {

    for(int i = 0; i < arrLength; i++) {
        arr[i] = i + 1;
    }
}


void ShuffleArray(int arr[100], int & arrLength) {

    for(int i = 0; i < arrLength; i++){
        Swap(arr[RandomNumber(0, arrLength - 1)], arr[RandomNumber(0, arrLength - 1)]);
    }
    
}



void PrintArray(int arr[100], int arrLength) {
    for(int i = 0; i < arrLength; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}



int main() {

    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    do {

        arrLength = ReadPositiveNumber("Enter a positive number : ");

    } while(arrLength < 0 || arrLength > 100);

    FillArray(arr, arrLength);

    cout << "Array elements : ";
    PrintArray(arr, arrLength);


    ShuffleArray(arr, arrLength);

    cout << "Array elements shuffled : ";
    PrintArray(arr, arrLength);

    return 0;
}
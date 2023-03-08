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


void FillArray(int arr[100], int & arrLength) {

    for(int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}


void CopyReversedArray(int arr2[100], int arr[100], int & arrLength) {
    
    for(int i = 0; i < arrLength; i++){
        arr2[i] = arr[arrLength - 1 - i];
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

    cout << "Array 1 elements : ";
    PrintArray(arr, arrLength);

    int arr2[100];

    CopyReversedArray(arr2, arr, arrLength);

    cout << "Reversed Array 1 elements : ";
    PrintArray(arr2, arrLength);

    return 0;
}
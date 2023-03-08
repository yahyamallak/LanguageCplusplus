#include <iostream>
#include <string>
#include <ctime>
#include <array>


using namespace std;


enum enNumberType { Odd = 1, Even = 2};


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

enNumberType CheckNumberType(int Num) {
    if(Num % 2 == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}


void AddArrayElement(int arr[100], int element, int & arrLength) {
    arr[arrLength] = element;
    arrLength++;
}


void FillArray(int arr[100], int & arrLength) {

    for(int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}


void CopyArray(int arr2[100], int arr[100], int & arrLength, int & length) {
    for(int i = 0; i < arrLength; i++) {
        if(CheckNumberType(arr[i]) == enNumberType::Odd) {
            AddArrayElement(arr2, arr[i], length);
        }
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

    int arr2[100], length = 0;

    CopyArray(arr2, arr, arrLength, length);

    cout << "Array 2 odd elements : ";
    PrintArray(arr2, length);

    return 0;
}
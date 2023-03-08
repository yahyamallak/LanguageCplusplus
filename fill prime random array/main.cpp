#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <array>


using namespace std;


enum enPrimeNotPrime { Prime = 1, NotPrime = 2};


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

enPrimeNotPrime CheckPrime(int Number) {

    int HalfNumber = round(Number / 2);

    for(int i = 2; i <= HalfNumber; i++) {
        if((Number % i) == 0) {
            return enPrimeNotPrime::NotPrime;
        }
    }

    return enPrimeNotPrime::Prime;
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
        if(CheckPrime(arr[i]) == enPrimeNotPrime::Prime) {
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

    cout << "Array 2 prime elements : ";
    PrintArray(arr2, length);

    return 0;
}
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>


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


enPrimeNotPrime CheckPrime(int Number) {

    int HalfNumber = round(Number / 2);

    for(int i = 2; i <= HalfNumber; i++) {
        if((Number % i) == 0) {
            return enPrimeNotPrime::NotPrime;
        }
    }

    return enPrimeNotPrime::Prime;
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


int CopyPrimeArray(int arr2[100], int arr[100], int & arrLength) {
    
    int length = 0;
    
    for(int i = 0; i < arrLength; i++){
        if(CheckPrime(arr[i]) == enPrimeNotPrime::Prime) {
            arr2[length] = arr[i];
            length++;
        }
    }

    return length;
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

    int arrLength2 = CopyPrimeArray(arr2, arr, arrLength);

    cout << "Array 2 elements : ";
    PrintArray(arr2, arrLength2);

    return 0;
}
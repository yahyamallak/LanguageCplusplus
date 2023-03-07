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

int SumArray(int arr[100], int arrLength) {
    
    int sum = 0;
    
    for(int i = 0; i < arrLength; i++){
        sum += arr[i];
    }

    return sum;
}

float AverageNumsArray(int arr[100], int arrLength) {
    return (float)SumArray(arr, arrLength) / arrLength;
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

    PrintArray(arr, arrLength);

    cout << "Average of Array is : ";
    cout << AverageNumsArray(arr, arrLength);

    return 0;
}
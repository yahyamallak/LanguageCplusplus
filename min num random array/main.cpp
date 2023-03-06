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

int MinNumberInArray(int arr[100], int arrLength) {
    
    int minNumber = arr[0];
    
    for(int i = 0; i < arrLength; i++){

        if(arr[i] < minNumber) {
            minNumber = arr[i];
        }
    }

    return minNumber;
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

    cout << "Max number is : ";
    cout << MinNumberInArray(arr, arrLength);

    return 0;
}
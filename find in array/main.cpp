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

void PrintArray(int arr[100], int arrLength) {
    for(int i = 0; i < arrLength; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}


short FindNumberPosition(int numberToFind, int arr[100], int arrLength) {
    for(int i = 0; i < arrLength; i++){
        if(arr[i] == numberToFind) {
            return i;
        }
    }

    return -1;
}



int main() {

    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    do {

        arrLength = ReadPositiveNumber("Enter a positive number : ");

    } while(arrLength < 0 || arrLength > 100);

    FillArray(arr, arrLength);

    cout << "Array 1 elements : " << endl;
    PrintArray(arr, arrLength);


    int numberToFind = ReadPositiveNumber("Enter a number to find : ");

    cout << endl;

    cout << "Number you are looking for is : " << numberToFind << endl;

    short position = FindNumberPosition(numberToFind, arr, arrLength);

    if(position != -1) {
        cout << "The number found at position : " << position << endl;
        cout << "The number found its order : " << position + 1 << endl;
    } else {
        cout << "The number is not found." << endl;
    }
     
     

    return 0;
}
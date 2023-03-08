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

short FindNumberPosition(int numberToFind, int arr[100], int arrLength) {
    for(int i = 0; i < arrLength; i++){
        if(arr[i] == numberToFind) {
            return i;
        }
    }

    return -1;
}


bool FindNumber(int numberToFind, int arr[100], int arrLength) {
    return FindNumberPosition(numberToFind, arr, arrLength) != -1;
}


void AddArrayElement(int arr[100], int element, int & arrLength) {
    arr[arrLength] = element;
    arrLength++;
}


void CopyArray(int arr2[100], int arr[100], int & arrLength, int & length) {
    for(int i = 0; i < arrLength; i++) {
        if(!FindNumber(arr[i], arr2, length)) {
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

    int arr[100], element, arrLength = 0;
    int choice = 0;

    do {

        element = ReadPositiveNumber("Enter a positive number : ");

        AddArrayElement(arr, element, arrLength);

        choice = ReadPositiveNumber("Do you want to add more numbers? [0]:NO [1]:YES ");

    } while(choice != 0);

    cout << "Array 1 elements : " << endl;
    PrintArray(arr, arrLength);

    int arr2[100], length = 0;

    CopyArray(arr2, arr, arrLength, length);

    cout << "Array 2 distinct elements : " << endl;
    PrintArray(arr2, length);

    return 0;
}
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


void FillArray(int arr[100], int element, int & arrLength) {
    arr[arrLength] = element;
    arrLength++;
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

        FillArray(arr, element, arrLength);

        choice = ReadPositiveNumber("Do you want to add more numbers? [0]:NO [1]:YES ");

    } while(choice != 0);

    cout << "Array Length : " << arrLength << endl;
    PrintArray(arr, arrLength);

    return 0;
}
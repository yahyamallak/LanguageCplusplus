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


void ReadArray(int arr[100], int & arrLength) {

    cout << "\nEnter number of elements : \n";
    cin >> arrLength;

    cout << "\nEnter array elements : \n";
    for(int i = 0; i < arrLength; i++){
        cout << "Element["<< i+1 << "] : ";
        cin >> arr[i];
    }

    cout << endl;
}

void PrintArray(int arr[100], int arrLength) {
    for(int i = 0; i < arrLength; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}


int TimesRepeated(int number, int arr[100], int arrLength) {
    
    int counter = 0;

    for(int i = 0; i < arrLength; i++){
        if(arr[i] == number)
            counter++;
    }

    return counter;
}


int main() {

    int arr[100], arrLength, numberToCheck;

    ReadArray(arr, arrLength);


    numberToCheck = ReadPositiveNumber("Enter the number you wanna check : ");

    cout << "\nOriginal array : ";
    PrintArray(arr, arrLength);

    cout << "Number " << numberToCheck;
    cout << " i repeated " ;
    cout << TimesRepeated(numberToCheck, arr, arrLength) << " time(s)";

    return 0;
}
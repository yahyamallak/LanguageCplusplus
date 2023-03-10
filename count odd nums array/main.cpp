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

int CountOddNumsArray(int arr[100], int arrLength) {
    
    int counter = 0;
    
    for(int i = 0; i < arrLength; i++){
        if(CheckNumberType(arr[i]) == enNumberType::Odd) {
            counter++;
        }
    }

    return counter;
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



int main() {

    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    do {

        arrLength = ReadPositiveNumber("Enter a positive number : ");

    } while(arrLength < 0 || arrLength > 100);

    FillArray(arr, arrLength);

    PrintArray(arr, arrLength);


    cout << "Odd Numbers count is : " << CountOddNumsArray(arr, arrLength);


    return 0;
}
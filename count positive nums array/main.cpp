#include <iostream>
#include <string>
#include <ctime>
#include <array>


using namespace std;


enum enNumberSign { Positive = 1, Negative = 2};


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

enNumberSign CheckNumberSign(int Num) {
    if(Num >= 0)
        return enNumberSign::Positive;
    else
        return enNumberSign::Negative;
}

int CountPositiveNumsArray(int arr[100], int arrLength) {
    
    int counter = 0;
    
    for(int i = 0; i < arrLength; i++){
        if(CheckNumberSign(arr[i]) == enNumberSign::Positive) {
            counter++;
        }
    }

    return counter;
}


void FillArray(int arr[100], int & arrLength) {

    for(int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(-100, 100);
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


    cout << "Positive Numbers count is : " << CountPositiveNumsArray(arr, arrLength);


    return 0;
}
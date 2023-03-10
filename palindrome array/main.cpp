#include <iostream>
#include <string>
#include <ctime>
#include <array>


using namespace std;


enum enPalindromeNotPalindrome { Palindrome = 1, NotPalindrome = 2};


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

enPalindromeNotPalindrome isArrayPalindrome(int arr[100], int arrLength) {
    for(int i = 0; i < arrLength / 2; i++) {
        if(arr[i] != arr[arrLength - 1 - i])
            return enPalindromeNotPalindrome::NotPalindrome;
    }

    return enPalindromeNotPalindrome::Palindrome;
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

    cout << "Array elements : " << endl;
    PrintArray(arr, arrLength);

    if(isArrayPalindrome(arr, arrLength) == enPalindromeNotPalindrome::Palindrome) {
        cout << "Yes, Array is Palindrome.";
    } else {
        cout << "No, Array is not Palindrome.";
    }

    return 0;
}
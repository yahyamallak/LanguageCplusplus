#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPalindromeNotPalindrome { Palindrome = 1, NotPalindrome = 2};

int ReadPositiveNumber(string Message) {
    int Number;

    do {

        cout << Message;
        cin >> Number;

    } while(Number < 0);

    return Number;
}

int ReveseNumber(int Number) {
    
    int newNumber = 0;

    while(Number) {
        newNumber = ( Number % 10 ) + newNumber * 10;
        Number = Number / 10;
    }
    
    return newNumber;
}

enPalindromeNotPalindrome CheckPalindrome(int Number) {

    if(Number == ReveseNumber(Number)) {
        return enPalindromeNotPalindrome::Palindrome;
    } else {
        return enPalindromeNotPalindrome::NotPalindrome;
    }
}


void PrintResults(int Number) {
    if(CheckPalindrome(Number) == enPalindromeNotPalindrome::Palindrome) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
}



int main() {

    PrintResults(ReadPositiveNumber("Please enter a positive number ? "));

    return 0;
}
#include <iostream>
#include <string>
#include <ctime>


using namespace std;


enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int from, int to) {

    int number = rand() % (to - from + 1) + from;

    return number;
}


char GetRandomCharacter(enCharType charType) {

    if(charType == enCharType::SmallLetter) {
        return char(RandomNumber(97, 122));
    } else if(charType == enCharType::CapitalLetter) {
        return char(RandomNumber(65, 90));
    } else if(charType == enCharType::SpecialCharacter) {
        return char(RandomNumber(33, 47));
    } else if(charType == enCharType::Digit) {
        return char(RandomNumber(48, 57));
    }

}


int ReadPositiveNumber(string Message) {
    int Number;

    do {

        cout << Message << endl;
        cin >> Number;

    } while(Number < 0);

    return Number;
}


string GenerateWord(enCharType charType, short length) {

    string word;

    for(int i= 0; i < length; i++) {
        word += GetRandomCharacter(charType);
    }

    return word;
}


string GenerateKey() {

    string key;

    for(int i= 0; i < 4; i++) {
        if(i != 3) {
             key += GenerateWord(enCharType::CapitalLetter, 4) + '-';
        } else {
             key += GenerateWord(enCharType::CapitalLetter, 4);
        }
       
    }

    return key;

}

void GenerateKeys(short numberOfKeys) {
    for(int i= 0; i < numberOfKeys; i++) {
        cout << GenerateKey() << endl;
    }
}





int main() {

    srand((unsigned)time(NULL));

    GenerateKeys(ReadPositiveNumber("Enter a positive number : "));

    return 0;
}
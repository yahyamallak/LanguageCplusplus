#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int RandomNumber(int from, int to) {

    int number = rand() % (to - from + 1) + from;

    return number;
}

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };


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


int main() {

    srand((unsigned)time(NULL));

   cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
   cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
   cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
   cout << GetRandomCharacter(enCharType::Digit) << endl;

    return 0;
}
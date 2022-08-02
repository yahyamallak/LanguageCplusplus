#include <iostream>

using namespace std;

enum codeStatus { Correct = 1, Incorrect = 2 };


int getCode() {

    int code;

    cout << "Enter the code, You have 3 attempts : ";
    cin >> code;

    return code;
}

codeStatus isCodeCorrect(int code) {
    int pin = 1234;

    if(code == pin)
        return codeStatus::Correct;
    else
        return codeStatus::Incorrect;
}


void printResult() {

    int code, attempt = 3;

    do {

        code = getCode();

        if(isCodeCorrect(code) == codeStatus::Correct){  
            cout << "Correct code" << endl;
            return;
        } else {
            attempt--;
            cout << "Incorrect code, " << attempt << " attempt" << (attempt < 2 ? "":"s") << " left, try again!" << endl;
        }
            
        if(attempt == 0) {
            cout << "Card has been blocked!";
            return;
        }

    } while (isCodeCorrect(code) == codeStatus::Incorrect);

}

int main() {

    printResult();

    return 0;
}
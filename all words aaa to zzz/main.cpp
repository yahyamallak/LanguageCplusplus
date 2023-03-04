#include <iostream>
#include <string>

using namespace std;


void PrintLetterPattern() {



        for(int i = 1; i <= 26 ; i++) {
            for(int j = 1; j <= 26; j++) {
                for(int k = 1; k <= 26; k++) {
                    cout << char(i + 64) << char(j + 64) << char(k + 64);
                    cout << endl;
                }
            }
        }
        

        

}



int main() {

    PrintLetterPattern();

    return 0;
}
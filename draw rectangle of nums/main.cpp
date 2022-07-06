/*

    3456
    4  7
    5  8
    6789

*/

#include <iostream>

using namespace std;

int main(){

    int num = 3;

    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4 ; j++){
            if((i==2 || i==3) && (j == 2 || j == 3)){
                cout << " ";
            } else {
                cout << num;
            }
            
            num++;
        }

        cout << endl;
        num = num - 3;
    }

    return 0;
}
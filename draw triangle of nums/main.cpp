/*
        6
       67
      678
     6789
*/

#include <iostream>

using namespace std;

int main(){

   int num = 6;

   for(int i=1; i <= 4; i++){
        for(int j=4; j >= i; j--){
            cout << " ";
        }

        for(int k=1; k<=i; k++){
            cout << num;
            num++;
        }

        cout << endl;
        num = 6;
   }


   return 0;
}
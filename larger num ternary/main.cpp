/* 500:1
   100:0
   50:1
   20:1
   10:0
   5:1
   1:0
   = 575
  */

#include <iostream>

using namespace std;


int main(){

   int number, fiveHundred, hundred, fifty, twenty, ten, five, one, result;

   cout << "Enter a number : ";
   cin >> number;

   fiveHundred = number / 500;
   result = number % 500;

   hundred = result / 100;
   result = result % 100;

   fifty = result / 50;
   result = result % 50;

   twenty = result / 20;
   result = result % 20;

   ten = result / 10;
   result = result % 10;

   five = result / 5;
   result = result % 5;

   one = result / 1;

   cout << "500 : " << fiveHundred << endl;
   cout << "100 : " << hundred << endl;
   cout << "50 : " << fifty << endl;
   cout << "20 : " << twenty << endl;
   cout << "10 : " << ten << endl;
   cout << "5 : " << five << endl;
   cout << "1 : " << one << endl;


   return 0;
}
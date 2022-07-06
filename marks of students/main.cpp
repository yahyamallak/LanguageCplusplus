/*
  math : 18/20
  physics: 17/20
  french : 12/20
  english: 15/20
  arabic: 14/20
  sports: 16/20
  philosophy: 12/20

  mark : 17,56

*/

#include <iostream>

using namespace std;

int main(){

  float math, physics, french, english, arabic, sports, philosophy;

  float mark;

  cout << "Enter your math mark : ";
  cin >> math;

  cout << "Enter your physics mark : ";
  cin >> physics;

  cout << "Enter your french mark : ";
  cin >> french;

  cout << "Enter your english mark : ";
  cin >> english;

  cout << "Enter your arabic mark : ";
  cin >> arabic;

  cout << "Enter your sports mark : ";
  cin >> sports;

  cout << "Enter your philosophy mark : ";
  cin >> philosophy;


  mark = math + physics + french + english + arabic + sports + philosophy;

  mark = mark / 7;

  cout << "The mark : " << mark;

  return 0;
}
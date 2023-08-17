#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;

    do
    {

        cout << Message << endl;
        cin >> Number;

    } while (Number < 0);

    return Number;
}


string numberToText(int number)
{
    if(number == 0) {
        return "";
    } else if(number >= 1 && number <= 19) {

        string arr[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        return arr[number] + " ";

    } else if(number >= 20 && number <= 99) {

        string arr[] = {"", "", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninty"};
        return arr[number / 10] + " " + numberToText(number % 10);

    } else if(number >= 100 && number <= 999) {

        return numberToText(number / 100) + "hundred " + numberToText(number % 100);

    } else if(number >= 1000 && number <= 9999) {

        return numberToText(number / 1000) + "thousand " + numberToText(number % 1000);

    } else if(number >= 10000 && number <= 99999) {
        return numberToText(number / 1000) + "thousand " + numberToText(number % 1000);
    } else if(number >= 100000 && number <= 999999) {
        return numberToText(number / 1000) + "thousand " + numberToText(number % 1000);
    }

}

int main()
{

    cout << numberToText(ReadPositiveNumber("Enter a positive number ? "));

    return 0;
}
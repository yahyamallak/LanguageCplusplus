#include <iostream>

using namespace std;

int main(){

    char letter;

    cout << "Enter a letter : ";
    cin >> letter;

    switch(letter){
        case 'a':
            cout << "It's a vowel";
            break;
        
        case 'A':
            cout << "It's a vowel";
            break;
        
        case 'e':
            cout << "It's a vowel";
            break;
        
        case 'E':
            cout << "It's a vowel";
            break;

        case 'i':
            cout << "It's a vowel";
            break;
        
        case 'I':
            cout << "It's a vowel";
            break;
        
        case 'o':
            cout << "It's a vowel";
            break;
        
        case 'O':
            cout << "It's a vowel";
            break;

        case 'u':
            cout << "It's a vowel";
            break;
        
        case 'U':
            cout << "It's a vowel";
            break;
        
        case 'y':
            cout << "It's a vowel";
            break;
        
        case 'Y':
            cout << "It's a vowel";
            break;
        
        default :
            cout << "It's a consonant";
            break;
    }

    return 0;
}
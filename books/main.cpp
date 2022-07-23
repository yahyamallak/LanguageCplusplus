/*
 struct
 array

*/

#include <iostream>

using namespace std;

struct Books {
    string title;
    string author;
    int pages;
    int sales;
};

void getNum(int &n) {
    cout << "Enter a number : ";
    cin >> n;
}

void setBooks(Books books[], int n) {

    int num = 1;

    for(int i = 0; i < n; i++) {

        cout << "-------------------------------"<< endl;
        cout << "Book num " << num << " : " << endl;
        cout << "-------------------------------"<< endl;


        cout << "Enter book title : ";
        cin >> books[i].title;

        cout << "Enter book author : ";
        cin >> books[i].author;

        cout << "Enter book pages : ";
        cin >> books[i].pages;

        cout << "Enter book sales : ";
        cin >> books[i].sales;

        num++;
    }

}

void showBooks(Books books[], int n) {

    int num = 1;

    for(int i = 0; i < n; i++) {

        cout << "-------------------------------"<< endl;
        cout << "Book num " << num << " : " << endl;
        cout << "-------------------------------"<< endl;


        cout << "The book title : ";
        cout << books[i].title << endl;

        cout << "The book author : ";
        cout << books[i].author << endl;

        cout << "The book pages : ";
        cout << books[i].pages << endl;

        cout << "The book sales : ";
        cout << books[i].sales << endl;

        num++;
    }
}

int main() {

    int n;

    getNum(n);

    Books books[n];

    setBooks(books, n);

    showBooks(books, n);

    return 0;
}
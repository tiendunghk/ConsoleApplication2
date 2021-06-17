#include "TextBook.h"
using namespace std;
#include<string>
#include <iostream>
#include "Book.h"
//TextBook definition
//Constructor and Destructor
TextBook::TextBook() {
    Grade = 0;
}
TextBook::TextBook(int grade) {
    Grade = grade;
}
TextBook::~TextBook() {
}
//Setter
void TextBook::SetGrade(int grade) {
    Grade = grade;
}
void TextBook::Set() {
    cout << "Grade: ";
    int grade;
    cin >> grade;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    SetGrade(grade);
    Book::Set();
}
//other method
void TextBook::Print() {
    cout << GetGrade() << " grade Text Book:";
    Book::Print();
}

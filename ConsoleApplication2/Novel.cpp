#include "Novel.h"
using namespace std;
#include<string>
#include <iostream>
#include "Book.h"
//Novel definition
//Constructor and Destructor
Novel::Novel() {
    SetKind("");
}
Novel::Novel(const string kind) {
    SetKind(kind);
}
Novel::~Novel() {
}
//Setter
void Novel::SetKind(string kind) {
    Kind = kind;
}
void Novel::Set() {
    cout << "Kind: ";
    string kind;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, kind);
    SetKind(kind);
    Book::Set();
}
//other method
void Novel::Print() {
    cout << GetKind() << " Novel: ";
    Book::Print();
}

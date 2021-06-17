#include<iostream>
#include<limits>
#include"Book.h"
using namespace std;
//Book definitio
//Constructor and Destructor
Book::Book() {
    SetBookName("");
    SetProducer("");
    SetIssueYear(0);
    SetNumPages(0);
    SetCost(0);
}
Book::Book(const string bookname, const string producer, int issueyear, int numpage, double cost) {
    SetBookName(bookname);
    SetProducer(producer);
    SetIssueYear(issueyear);
    SetNumPages(numpage);
    SetCost(cost);
}
Book::~Book() {
}

//Setter
void Book::SetBookName(string bookname) {
    BookName = bookname;
}
void Book::SetProducer(string producer) {
    Producer = producer;
}
void Book::SetIssueYear(int issueyear) {
    IssueYear = issueyear;
}
void Book::SetNumPages(int numpages) {
    NumPages = numpages;
}
void Book::SetCost(double cost) {
    Cost = cost;
}
void Book::Set() {
    cout << "Book name: ";
    string bookname;
    getline(cin, bookname);
    SetBookName(bookname);
    cout << "Producer: ";
    string producer;
    getline(cin, producer);
    SetProducer(producer);
    cout << "Issue year: ";
    int issueyear;
    cin >> issueyear;
    SetIssueYear(issueyear);
    cout << "Numbers of pages: ";
    int numpages;
    cin >> numpages;
    SetNumPages(numpages);
    cout << "Cost: ";
    double cost;
    cin >> cost;
    SetCost(cost);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
//other method
void Book::Print() {
    cout << GetBookName() << " produce by " << GetProducer() << ",Issue in " << GetIssueYear() << ", " << GetNumPages() << " pages, " << GetCost() << " VN dong.";
}


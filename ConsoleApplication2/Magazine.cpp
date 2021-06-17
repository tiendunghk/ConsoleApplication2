#include "Magazine.h"
using namespace std;
#include<string>
#include <iostream>
//Magazine definition
//Constructor and Destructor
Magazine::Magazine() {
    SetPeriod("");
}
Magazine::Magazine(string period) {
    SetPeriod(period);
}
Magazine::~Magazine() {
}
//Setter
void Magazine::SetPeriod(string period) {
    Period = period;
}
void Magazine::Set() {
    cout << "Period: ";
    string period;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, period);
    SetPeriod(period);
    Book::Set();
}
//other method
void Magazine::Print() {
    cout << GetPeriod() << " magazine: ";
    Book::Print();
}
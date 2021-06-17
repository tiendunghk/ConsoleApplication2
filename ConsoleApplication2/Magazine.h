#pragma once
#include "Book.h"
class Magazine final :public Book
{
private:
    string Period;
public:
    //Constructor and Destructor
    Magazine();
    Magazine(string period);
    ~Magazine();
    //Getter
    string GetPeriod() { return Period; }
    //Setter
    void SetPeriod(string period);
    void Set();
    //other method
    void Print();
};


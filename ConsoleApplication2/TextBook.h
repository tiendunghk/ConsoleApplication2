#pragma once
#include "Book.h"
class TextBook final :public Book
{
private:
    int Grade;
public:
    //Constructor and Destructor
    TextBook();
    TextBook(int grade);
    ~TextBook();
    //Getter
    int GetGrade() { return Grade; }
    //Setter
    void SetGrade(int grade);
    void Set();
    //other method
    void Print();
};



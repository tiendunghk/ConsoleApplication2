#pragma once
#include "Book.h"
class Novel final :public Book
{
private:
    string Kind;
public:
    //Constructor and Destructor
    Novel();
    Novel(const string kind);
    ~Novel();
    //Getter
    string GetKind() { return Kind; }
    //Setter
    void SetKind(string kind);
    void Set();
    //other method
    void Print();
};



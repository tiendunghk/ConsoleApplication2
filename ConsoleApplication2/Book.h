#pragma once
#pragma once
#include<string>
using namespace std;

class Book
{
private:
    string BookName;
    string Producer;
    int IssueYear;
    int NumPages;
    double Cost;
public:
    //Constructor and Destructor
    Book();
    Book(const string bookname, const string producer, int issueyear, int numpage, double cost);
    virtual ~Book();
    //Getter
    string GetBookName() { return BookName; }
    string GetProducer() { return Producer; }
    int GetIssueYear() { return IssueYear; }
    int GetNumPages() { return NumPages; }
    double GetCost() { return Cost; }
    //Setter
    void SetBookName(string bookname);
    void SetProducer(string producer);
    void SetIssueYear(int issueyear);
    void SetNumPages(int numpages);
    void SetCost(double cost);
    virtual void Set();
    //other method
    virtual void Print();
};

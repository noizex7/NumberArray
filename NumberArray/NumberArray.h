#pragma once
#include <iostream> 
#include <cstdlib> 
using namespace std;
class NumberArray
{
private:
    double* list;                
    int numElements;          
    bool isValid(int) const;      
public:
    NumberArray(int);          
    ~NumberArray();
    void setElement(int, int); 
    double getElement(int) const; 
    int getNNumElements() const;
    double getLowest(int)const;
    double getHighest(int) const;
    double getAverage(int) const;
    void displayData(int)const;

};


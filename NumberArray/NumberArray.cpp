#include "NumberArray.h"
#include <iostream> 
#include <cstdlib> 
using namespace std;


NumberArray::NumberArray(int size)
{
    list = new double[size];
    numElements = size;
    for (int ndx = 0; ndx < size; ndx++)
        list[ndx] = 0.0;
}


NumberArray::~NumberArray()
{
    delete[] list;
}

bool NumberArray::isValid(int element) const
{
    bool status;

    if (element < 0 || element >= numElements)
        status = false;
    else
        status = true;
    return status;
}


void NumberArray::setElement(int element, int value)
{
    if (isValid(element))
        list[element] = value;
    else
    {
        cout << "Error: Invalid subscript\n";
        exit(EXIT_FAILURE);
    }
}


double NumberArray::getElement(int element) const
{
    if (isValid(element))
        return list[element];
    else
    {
        cout << "Error: Invalid subscript\n";
        exit(EXIT_FAILURE);
    }
}

int NumberArray::getNNumElements() const
{
    return numElements;
}

double NumberArray::getLowest(int size) const
{
    int count, lowest;
    lowest = list[0];
    for (count = 1; count < size; count++)
    {
        if (list[count] < lowest)
            lowest = list[count];
    }
    return lowest;
}
double NumberArray::getHighest(int size) const
{
    int count, highest;
    highest = list[0];
    for (count = 1; count < size; count++)
    {
        if (list[count] > highest)
            highest = list[count];
    }
    return highest;
}

double NumberArray::getAverage(int size) const
{
    double sum = 0;
    for (int count = 0; count < size; count++)
    {
        sum += list[count];
    }
    return sum / size;
}

void NumberArray::displayData(int size) const
{
    cout << "The highest number on the list is: " << getHighest(size) << endl;
    cout << "The lowest number on the list is: " << getLowest(size) << endl;
    cout << "The average of the number list is: " << getAverage(size) << endl;
}
//DoubleSubscriptedArray.h

#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H

#include<iostream>
using namespace std;

class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &,DoubleSubscriptedArray &);

public:
    explicit DoubleSubscriptedArray(int = 2,int = 2); //default constructor
    DoubleSubscriptedArray(const DoubleSubscriptedArray &); //copy constructor
    ~DoubleSubscriptedArray();  //destructor
    int getSize() const; //return size

    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);    //assignment operator
    bool operator==(const DoubleSubscriptedArray &) const;  //equality operator

    //inequality operator;  returns opposite of operator , inline function
    bool operator!=(const DoubleSubscriptedArray &right) const
    {
        return !(*this == right);   //invokes DoubleSubscriptedArray::operator==
    }   //end function operator!=

    //subscript operator for non-const objects returns modifiable lvalue
    int &operator()(int row,int column);

    //subscript operator for const objects returns rvalue
    int operator()(int row,int column) const;
private:
    int rows;   //pointer-based DoubleSubscriptedArray's row
    int columns;    //pointer-based DoubleSubscriptedArray's column
    int size;   //pointer-based DoubleSubscriptedArray size
    int *ptr;   //pointer to first element of pointer-based array
};  //end class DoubleSubscriptedArray
#endif // DOUBLESUBSCRIPTEDARRAY_H

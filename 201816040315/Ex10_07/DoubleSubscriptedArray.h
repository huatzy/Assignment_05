//header file for class DoubleSubscriptedArray
#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H
#include <iostream>
using namespace std;

//class definition
class DoubleSubscriptedArray
{
    friend ostream &operator<<( ostream &, const DoubleSubscriptedArray & );//overloaded <<
    friend istream &operator>>( istream &, DoubleSubscriptedArray & );//overloaded >>

public:
    DoubleSubscriptedArray(int , int);//data
    int& operator()(int , int);//overloaded operator bracket
    //int operator()(int,int);
    bool operator== (const DoubleSubscriptedArray &right) const;//equality operator
    bool operator!= (const DoubleSubscriptedArray &right) const//inequality operator
    {
        return ! ( *this ==right );//invokes DoubleSubscriptedArray::operator==
    }//end function operator !=
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//overloaded assigning operator
    size_t getSize()const;
private:
    int a,b;//line and row for DoubleSubscriptedArray
    int *doublee;
    size_t size;//pointer-based array size
};
#endif // DOUBLESUBSCRIPTEDARRAY_H

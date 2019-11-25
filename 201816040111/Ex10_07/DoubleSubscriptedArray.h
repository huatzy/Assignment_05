#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include <iostream>

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<( std::ostream &, const DoubleSubscriptedArray & );
    friend std::istream &operator>>( std::istream &, DoubleSubscriptedArray & );
public:
    DoubleSubscriptedArray ( int = 0 , int = 0 );
    ~DoubleSubscriptedArray() ;
    size_t getSize() const ;
    int & operator()( int , int ) ;//Set the return value to the lvalue of the data that can be changed
    int & operator()( int , int ) const;//Set the return value to the rvalue of the unchangeable data
    DoubleSubscriptedArray operator=( DoubleSubscriptedArray & );//Update the values of the two-dimensional array to each other
    /*Determine if two numbers in the array are equal*/
    bool operator==( int );
    bool operator!=( int );
private:
    int rRow;
    int cColumn;
    int subscript;
    size_t size;
    int *ptr;
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

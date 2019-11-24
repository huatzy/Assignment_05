#ifndef DOUBLEARRAY_H
#define DOUBLEARRAY_H

#include <iostream>

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<( std::ostream &, const DoubleSubscriptedArray & );
    friend std::istream &operator>>( std::istream &, DoubleSubscriptedArray & );

public:
    explicit DoubleSubscriptedArray( int = 5, int = 2);//The constructor
    ~DoubleSubscriptedArray();//The destructor
    size_t getSize() const;

    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray & );//Overloads the = operator
    bool operator==( const DoubleSubscriptedArray & ) const;//Overloads the == operator
    bool operator !=( const DoubleSubscriptedArray &right ) const//Overloads the ！= operator
    {
        return !( *this == right );
    }
    int &operator()( int, int );//Overloads the function call operator

    int operator()( int, int ) const;//Overloads the function call operator

private:
    size_t crosswise;
    size_t vertical;
    int *ptr;
};//end class Array
#endif


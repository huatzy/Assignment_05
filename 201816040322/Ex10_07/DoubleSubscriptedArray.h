// Assignment_05: DoubleSubscriptedArray.h
// DoubleSubscriptedArray class definition with overload operators.
#ifndef DOUBLEARRAY_H
#define DOUBLEARRAY_H

#include <iostream>

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<( std::ostream &, const DoubleSubscriptedArray & );
    friend std::istream &operator>>( std::istream &, DoubleSubscriptedArray & );

public:
    explicit DoubleSubscriptedArray( int = 5, int = 2 ); // default constructor
    DoubleSubscriptedArray( const DoubleSubscriptedArray & ); // copy constructor
    ~DoubleSubscriptedArray(); // destructor
    size_t getSize() const; // return size

    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray & ); // assignment operator
    bool operator==( const DoubleSubscriptedArray & ) const; // equality operator

    // inequality operator; returns opposite of == operator
    bool operator !=( const DoubleSubscriptedArray &right ) const
    {
        return !( *this == right ); // invokes DoubleSubscriptedArray::operator==
    } // end function operator !=

    //bracket operator for non-const objects
    int &operator()( int, int );

    //bracket operator for const objects
    int operator()( int, int ) const;

private:
    size_t row;
    size_t column;
    int *ptr;
};
#endif // DOUBLEARRAY_H

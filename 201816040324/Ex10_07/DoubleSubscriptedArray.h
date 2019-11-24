#ifndef DOUBLEARRAY_H
#define DOUBLEARRAY_H

#include <iostream>

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<( std::ostream &, const DoubleSubscriptedArray & );
    friend std::istream &operator>>( std::istream &, DoubleSubscriptedArray & );

public:
    explicit DoubleSubscriptedArray( int = 2, int = 2 );
    DoubleSubscriptedArray( const DoubleSubscriptedArray & ) ;
    ~DoubleSubscriptedArray();
    size_t getSize() const;
    size_t getrow () ;
    size_t getcolumn () ;
    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray & );
    bool operator==( const DoubleSubscriptedArray & ) const;
    bool operator !=( const DoubleSubscriptedArray &right ) const
    {
        return !( *this == right );
    }
    int &operator()( int, int );
    int operator()( int, int ) const;

private:
    size_t row;
    size_t column;
    int *ptr;
};
#endif

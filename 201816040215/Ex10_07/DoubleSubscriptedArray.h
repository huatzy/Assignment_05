#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

#include <iostream>
class DoubleSubscriptedArray
{
    friend std::ostream &operator<<( std::ostream &,const DoubleSubscriptedArray & );
    friend std::istream &operator>>( std::istream &,DoubleSubscriptedArray & );
public:
    explicit DoubleSubscriptedArray( int row, int column );
    DoubleSubscriptedArray( const DoubleSubscriptedArray & );
    ~DoubleSubscriptedArray();

    size_t getRows() const;
    size_t getColumns() const;

    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray &);
    bool operator==( const DoubleSubscriptedArray &right ) const;
    bool operator!=( const DoubleSubscriptedArray &right );
    {
        return !(*this == right );
    }
    bool operator=( const DoubleSubscriptedArray &right );
    int &operator()( int , int );
    int operator()( int , int ) const;

private:
    size_t rows;
    size_t columns;
    int *ptr;
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

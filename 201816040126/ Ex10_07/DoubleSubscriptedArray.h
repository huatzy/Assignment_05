#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED



#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include <iostream>
using namespace std;

class DoubleSubscriptedArray
{
    friend istream &operator>>( istream & , DoubleSubscriptedArray & );
    friend ostream &operator<<( ostream & , const DoubleSubscriptedArray & );

public:
    explicit DoubleSubscriptedArray( int = 2, int = 2 );//the default is 2 rows and 2 columns
    DoubleSubscriptedArray( const DoubleSubscriptedArray & );//function to copy
    ~DoubleSubscriptedArray();

    size_t getColumnSize() const;//function to get column size
    size_t getRowSize() const;//function to get row size
    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray & );//function operator=
    bool operator==( const DoubleSubscriptedArray & ) const;//function operator==
    bool operator!=( const DoubleSubscriptedArray &right ) const//function operator!=
   {
       return !(*this == right);
   }

    int &operator()( int , int  );
    int &operator()( int , int  ) const;

private:
    size_t rowS;
    size_t columnS;
    int **ptr;
};

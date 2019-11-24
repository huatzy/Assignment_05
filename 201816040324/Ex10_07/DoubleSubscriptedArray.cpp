#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray( int arrayRow, int arrayColumn )
    : row( arrayRow > 0 ? arrayRow : throw invalid_argument( "Array row size must be greater than 0" ) ),
      column( arrayColumn > 0 ? arrayColumn : throw invalid_argument( "Array column size must be greater than 0" ) ),
      ptr ( new int [ row * column ] )
{
    for ( size_t i = 0; i < getSize(); ++i )
        ptr[i] = 0;
}


DoubleSubscriptedArray::DoubleSubscriptedArray( const DoubleSubscriptedArray &arrayToCopy)
    : row( arrayToCopy.row ), column( arrayToCopy.column ),
      ptr( new int [ row * column ] )
{
    for ( size_t i = 0; i < getSize(); ++i )
        ptr[i] = arrayToCopy.ptr[i];
}

DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}
size_t DoubleSubscriptedArray::getSize() const
{
    return row * column;
}
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray &rignt )
{
    if ( &rignt != this )
    {

        if ( getSize() != rignt.getSize() )
        {
            delete [] ptr;
            row = rignt.row;
            column = rignt.column;
            ptr = new int [ getSize() ];
        }

        for ( size_t i = 0; i < getSize(); ++i )
        {
            ptr[i] = rignt.ptr[i];
        }
    }

    return *this;
}
size_t DoubleSubscriptedArray::getrow()
{
    return row ;
}
size_t DoubleSubscriptedArray::getcolumn()
{
    return column ;
}

bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right) const
{
    if ( getSize() != right.getSize() )
        return false;

    for ( size_t i = 0; i < getSize(); ++i )
        if ( ptr[i] != right.ptr[i] )
            return false;

    return true;
}


int &DoubleSubscriptedArray::operator()( int arrayRow, int arrayColumn )
{

    int a =((arrayRow-1) * column)+arrayColumn-1 ;
    return ptr[a];
}



int DoubleSubscriptedArray::operator()( int arrayRow, int arrayColumn ) const
{
        int a =((arrayRow-1) * column)+arrayColumn-1 ;
    return ptr[a];
}


ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a )
{

    for ( size_t i = 0; i < a.getSize(); ++i )
    {
        output << setw(12) << a.ptr[i];

        if ( ( i + 1) % a.column == 0 )
            output << endl;
    }

    return output;
}
istream &operator>>( istream &input, DoubleSubscriptedArray &a )
{
    for ( size_t i = 0; i < a.getSize(); ++i )
    {
        input >> a.ptr[i];
    }

    return input;
}

#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray( int cross, int ver )
    : crosswise( cross > 0 ? cross : throw invalid_argument( "Array crosswise size must be greater than 0" ) ),
      vertical( ver > 0 ? ver : throw invalid_argument( "Array vertical size must be greater than 0" ) ),
      ptr ( new int [ crosswise * vertical ] )
{
    for ( size_t i = 0; i < getSize(); ++i )
        ptr[i] = 0;
}

DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}

size_t DoubleSubscriptedArray::getSize() const
{
    return crosswise * vertical;
}//Gets the number of array elements

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray &rignt )
{
    if ( &rignt != this )
    {
        if ( getSize() != rignt.getSize() )
        {
            delete [] ptr;
            crosswise = rignt.crosswise;
            vertical = rignt.vertical;
            ptr = new int [ getSize() ];
        }//end inner if

        for ( size_t i = 0; i < getSize(); ++i )
        {
            ptr[i] = rignt.ptr[i];
        }
    }//end outer if

    return *this;
}////Overloads the = operator

bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right) const
{
    if ( getSize() != right.getSize() )
        return false;

    for ( size_t i = 0; i < getSize(); ++i )
        if ( ptr[i] != right.ptr[i] )
            return false;

    return true;
}//Overloads the == operator
int &DoubleSubscriptedArray::operator()( int cross, int ver )
{
    if ( cross <= 0 || cross > crosswise )
        throw out_of_range( "Crosswise out of range" );
    if ( ver <= 0 || ver > vertical )
        throw out_of_range( "Vertical out of range" );

    return ptr[ (cross-1)*vertical+ver-1 ];
}//end function operator()

int DoubleSubscriptedArray::operator()( int cross, int ver ) const
{
    if ( cross <= 0 || cross > crosswise )
        throw out_of_range( "Crosswise out of range" );
    if ( ver <= 0 || ver > vertical )
        throw out_of_range( "Vertical out of range" );

    return ptr[ (cross-1)*vertical+ver-1 ];
}//end function operator()

ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a )
{
    for ( size_t i = 0; i < a.getSize(); ++i )
    {
        output << setw(12) << a.ptr[i];

        if ( ( i + 1) % a.vertical == 0 )
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

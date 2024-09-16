//整体差不多都是模仿10.10，10.11和10.9的书上的array实例，仅改动了数据成员和个别的地方

#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h"

using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int row,int column)
    :row(row>0?row:throw invalid_argument("Row must be grater than 0")),
     column(column>0?column:throw invalid_argument("column must be grater than 0")),
   ptr(new int[column*row])
{
    for (size_t i=0;i<column*row;++i)
        ptr[i]=0;//set pointer_based DoubleSubscriptedArray element
}//end DoubleSubscriptedArray default constructor


DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &DoubleSubscriptedArrayToCopy)
:row(DoubleSubscriptedArrayToCopy.row),
column(DoubleSubscriptedArrayToCopy.column),
ptr(new int[row*column])
{
    for (size_t i=0;i<row*column;++i)
        ptr[i]=DoubleSubscriptedArrayToCopy.ptr[i];//copy into object
}//end DoubleSubscripted copy constructor


size_t DoubleSubscriptedArray::getSize()const
{
    return row*column;//number of elements in DoubleSubscriptedArray
}//end function getSize


const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if (&right!=this)
    {
        if(column*row!=right.column*row)
        {
            delete[]ptr;//release space
            row=right.row;

            column=right.column;//resize this object
            ptr=new int[column*row];//create space for DoubleSubscriptedArray copy
        }//end inner if

        for (size_t i=0;i<column*row;++i)
            ptr[i]=right.ptr[i];
    }//end outer if
    return *this;
}//end function operator=

bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right) const
{
    if ( getSize() != right.getSize() )
        return false; // arrays of different number of elements

    for ( size_t i = 0; i < getSize(); ++i )
        if ( ptr[i] != right.ptr[i] )
            return false; // DoubleSubscriptedArray content are not equal

    return true; // DoubleSubscriptedArrays are equal
} // end function operator==


bool DoubleSubscriptedArray::operator!=( const DoubleSubscriptedArray &right) const
{
    if ( getSize() == right.getSize() )
        return false; // arrays of different number of elements

    for ( size_t i = 0; i < getSize(); ++i )
        if ( ptr[i] == right.ptr[i] )
            return false; // DoubleSubscriptedArray content are not equal

    return true; // DoubleSubscriptedArrays are equal
} // end function operator==


int &DoubleSubscriptedArray::operator()( int row, int column )
{
    // check for subscript out-of-range error
    if ( row < 0 || row > row )
        throw out_of_range( "Row out of range" );
    if ( column < 0 || column > column )
        throw out_of_range( "Column out of range" );

    return ptr[ row * column - 1 ]; // reference return
} // end function operator()


int DoubleSubscriptedArray::operator()( int row, int column ) const
{

    if ( row < 0 || row > row )
        throw out_of_range( "Row out of range" );
    if ( column < 0 || column > column )
        throw out_of_range( "Column out of range" );

    return ptr[ row * column - 1 ]; // reference return
} // end function operator()


ostream &operator<<( ostream &output, const DoubleSubscriptedArray &array1 )
{

    for ( size_t i = 0; i < array1.getSize(); ++i )
    {
        output << setw(12) << array1.ptr[i];

        if ( ( i + 1) % array1.column == 0 )
            output << endl;
    }

    return output;
} // end function operator<<

//整体差不多都是模仿10.10，10.11和10.9的书上的array实例，仅改动了数据成员和个别的地方



istream &operator>>( istream &input, DoubleSubscriptedArray &array1 )
{
    for ( size_t i = 0; i < array1.getSize(); ++i )
    {
        input >> array1.ptr[i];
    }

    return input;
} // end function


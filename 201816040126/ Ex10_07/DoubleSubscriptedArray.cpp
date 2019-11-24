#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray( int row, int column )
     :rowS( row > 0 ? row:
        throw invalid_argument("The row size should be greater than 0")),
     columnS( column > 0 ? column:
        throw invalid_argument("The column size should be greater than 0")),//judge the row and column size
        ptr ( new int*[ rowS ])
        {
            for ( size_t i=1; i <= rowS; i++ )
            {
                ptr[i] = new int[ columnS ];
                for( size_t j= 1; j <= columnS ; j++ )
                {
                    ptr[i][j] = 0;
                }
            }//make i and j 1,make sure the subscript corresponds to the number
        }

DoubleSubscriptedArray::DoubleSubscriptedArray( const DoubleSubscriptedArray &arrayToCopy )
     :rowS( arrayToCopy.rowS ),
     columnS( arrayToCopy.columnS ),
     ptr( new int*[ rowS ] )
{
    for( size_t i=1; i <= rowS; i++ )
         {
             ptr[i] = new int[ columnS ];
             for( size_t j=1; j <= columnS ; j++ )
             {
                 ptr[i][j] = arrayToCopy.ptr[i][j];
             }
         }//make i and j 1,make sure the subscript corresponds to the number
}
//function to copy

DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}//destructor

size_t DoubleSubscriptedArray::getRowSize() const
{
    return rowS;
}//function to get row size

size_t DoubleSubscriptedArray::getColumnSize() const
{
    return columnS;
}//function to get column size

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray &right )
{
    if( &right != this )
    {
        if( rowS != right.rowS || columnS != right.columnS )
        {
            delete [] ptr;
            rowS = right.rowS;
            columnS = right.columnS;
            ptr = new int*[ rowS ];
            for( size_t i = 1; i <= rowS; i++ )
                ptr[i] = new int [ columnS ];
        }

         for(size_t i=1; i <= right.rowS; i++)
         {
             for(size_t j=1; j <= right.columnS ; j++ )
                {
                    ptr[i][j] = right.ptr[i][j];
             }
        }
    }
    return *this;
}
//function operator=

bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right ) const
{
    if( rowS != right.rowS  || columnS != right.columnS )
        return false;

     for( size_t i = 1; i <= right.rowS ; i++ )
    {
        for( size_t j=1; j <= right.columnS ; j++ )
        {
            if( ptr[i][j] != right.ptr[i][j] )
                return false;
        }
    }
    return true;
}
//function operator==

int &DoubleSubscriptedArray::operator()( int rowSubscript , int columnSubcript )
{
    if( rowSubscript < 0 || rowSubscript > rowS )
        throw out_of_range("The row subscript is out of range.");
    if( columnSubcript < 0 || columnSubcript > columnS )
        throw out_of_range("The column subscript is out of range.");

    return ptr[rowSubscript][columnSubcript];
}//function to overload left number

int &DoubleSubscriptedArray::operator()( int rowSubscript, int columnSubcript ) const
{
    if( rowSubscript < 0 || rowSubscript > rowS )
        throw out_of_range("The row subscript is out of range.");
    if( columnSubcript < 0 || columnSubcript > columnS )
        throw out_of_range("The column subscript is out of range.");

    return ptr[rowSubscript][columnSubcript];
}//function to overload right number

istream &operator>>( istream &input, DoubleSubscriptedArray &da )
{
    for( size_t i=1; i <= da.rowS; ++i )
    {
        for( size_t j=1; j <= da.columnS; ++j )
        {
            input >> da.ptr[i][j];
        }
    }

    return input;
}//function operator>>

ostream &operator<<( ostream &output , const DoubleSubscriptedArray &da )
{
     for( size_t i=1 ; i <= da.rowS ; ++i )
    {
        for( size_t j=1; j <= da.columnS ; ++j )
        {
            output << setw(10) << da.ptr[i][j];
        }
        output << endl;
    }
    return output;
}//function operator<<

//All the functions come from book,and I rewrite them.

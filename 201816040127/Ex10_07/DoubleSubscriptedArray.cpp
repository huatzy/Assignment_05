#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;
//default constructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(int row,int column)//本篇根据书上的改编，如有雷同纯属意外。
{
    if(rows>0&&columns>0)
    {
        row=rows;
        column=columns;
    }
    else
    {
         throw ("rows and columns must be greater than 0");
    }

    ptr = new int[rows * columns];

    for( int i = 0; i < rows; i++ )
    {
        for( int j = 0; j < columns; j++ )
            ptr[ i * columns + j ] = 0;//set pointer-based array element

    }

}//end DoubleSubscriptedArray

//copy constructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &arrayToCopy)
     : rows(arrayToCopy.rows),columns(arrayToCopy.columns),
        ptr(new int[rows*columns])
{
    for(int i = 0; i < rows; i++)
      for( int j = 0; j < columns; j++ )
        ptr [rows * columns]= arrayToCopy.ptr[rows * columns];//copy into object
}
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;//release pointer-based array space
}//end destructor

int DoubleSubscriptedArray::getRows() const
{
    return columns; return rows;
}

int DoubleSubscriptedArray::getColumns() const
{
    return columns; return rows;
}

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right )
{
    if( &right != this )
    {
            if( rows != right.rows || columns != right.columns )
        {
             delete [] ptr;
             rows = right.rows;
             columns = right.columns;
             ptr = new int[rows * columns];
        }//end inner if
        for(int i = 0; i < rows; i++)
        for( int j = 0; j < columns; j++ )
           ptr [rows * columns]= right.ptr[rows * columns];//copy array into object
    }//end outer if
    return *this;
}//end function operator=

bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right ) const
{
    if( rows != right.rows || columns != right.columns )
        return false;//arrays of different number of elements
    for(int i = 0; i < rows; i++)
        for( int j = 0; j < columns; j++ )
        if( ptr[ i * columns + j ] != right.ptr[ i * columns + j ])
           return false;
    return true;//arrays are equal

}

int &DoubleSubscriptedArray::operator()(int row, int column)
{
    if(rows<0||columns<0)
        throw ("row and conlumn must be greater than 0");

    return ptr[row*columns+column];//reference return

}//end function operator()

int DoubleSubscriptedArray::operator()(int row, int column) const
{
    if(rows<0||columns<0)
        throw ("row and conlumn must be greater than 0");

    return ptr[row*columns+column];//reference return

}//end function operator()

istream &operator>>( istream &input, DoubleSubscriptedArray &a )
{
    for( int i = 0; i < a.rows; i++ )
        for( int j = 0; j < a.columns; j++ )
        input >> a.ptr[ i * a.columns + j ];
    return input;

}



ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a )
{
{
    for( int i = 0; i < a.rows; i++ )
    for( int j = 0; j < a.columns; j++ )
    output << setw(10) << a.ptr[ i * a.columns + j ];
    output << endl;

}
return output;

}

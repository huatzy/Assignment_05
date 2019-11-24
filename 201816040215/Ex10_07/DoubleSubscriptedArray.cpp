#include <iostream>
#include <iomanip>
#include <stdexcept>


#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray( int row,int column )
{
    if(row>0&&column>0)
    {
        rows = row;
        columns = column;
        ptr = new int[rows * columns];
    }
    else
        throw invalid_argument( "DoubleSubscriptedArray rows and columns must begreater than 0");
    for( size_t i=0;i < rows;++i)
    for( size_t j=0;j < columns;++j)
    ptr[i * column + j ] = 0;
}//end DoubleSubscriptedarray default constructor

DoubleSubscriptedArray::DoubleSubscriptedArray( const DoubleSubscriptedArray &DoubleSubscriptedarrayToCopy )
{
    rows = DoubleSubscriptedarrayToCopy.rows;
    columns = DoubleSubscriptedarrayToCopy.columns;
    ptr = new int[rows * columns];
     for( size_t i=0;i < rows;++i)
    for( size_t j=0;j < columns;++j)
    ptr[i * columns + j ] = DoubleSubscriptedarrayToCopy.ptr[i * columns + j ];
}//end DoubleSubscriptedArray copy constructor

DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}
size_t getRows() cosnt
{
    return rows;
}

size_t getColumns() const
{
    return columns;
}

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray &right )
{
    if( &right != this )
    {
        if( rows != right.rows || columns != right.columns )
        {
            delete [] ptr;
            rows = right.rows;
            columns = right.columns;
            ptr = new int [rows * columns ];
        }
        for(int i = 0;i < rows;++i)
            for( int j=0;j < columns;++j)
            ptr[ i * columns + j ] = right.ptr[ i * columns + j ];
    }
    return *this;
}

/*bool DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray &right )
{
   rows = right.rows;
   columns = right.columns;
   for( int i = 0;i < rows; ++i )
        for( int j = 0;j < columns; ++j )
        ptr[ i * columns +j ] = right.ptr[ i * column + j ];
   return *this;
}*/

bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right ) const
{
   if( rows != right.rows || columns != right.columns )
   return 0;
   for(int i = 0;i < rows;i++)
   for(int j = 0;j < columns;j++)
   {
   if( ptr[ i * columns + j] != right.ptr[ i * columns + j ])
   return false;
   }
   return 1;
}


int &DoubleSubscriptedArray::operator()(int row,int column )
{
    if( rows < 0 || rows <= row || columns < 0 || columns <= column )
       throw out_of_range( "scbscript out of range");

    return ptr[ row * columns + columns ];
}
int DoubleSubscriptedArray::operator()( int row, int column )const
{
    if( rows < 0 || rows < row || columns < 0 || columns < column )
       throw out_of_range( "scbscript out of range");

    return ptr[ row * columns + columns ];
}

istream &operator>>( istream &input,DoubleSubscriptedArray &a)
{
    for( int i = 0;i < a.rows;++i)
        for( int j = 0;j < a.columns;++j)
        input >> a.ptr[ i * a.columns + j ];
    return input;
}

ostream &operator<<( ostream &output,const DoubleSubscriptedArray &a)
{
    for( int i = 0;i < a.rows;++i )
    {
        for( int j = 0;j < a.columns;++j )
          output << setw(10) << a.ptr[ i * a.columns + j ];
        output << endl;
    }
    return output;
}


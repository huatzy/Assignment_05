#include "DoubleSubscriptedArray.h"
#include <iostream>
#include <iomanip>

using namespace std;
/*Initialize two values in parentheses to private data members*/
DoubleSubscriptedArray::DoubleSubscriptedArray(int row,int column)
:rRow(row),cColumn(column),size(rRow*cColumn),ptr(new int[size])//Initialize the size of the row, column, array, subscript representation of the array
{
    /*First initialize all elements of the array to zero*/
    for ( size_t i = 0 ; i < size ; ++i)
        ptr[i] = 0;
}
/*Call the delete function in the destructor to delete the dynamic array to prevent the generation of garbage values.*/
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}
/*Get the size of the array*/
size_t DoubleSubscriptedArray::getSize() const
{
    return size;
}
/*Converting a two-dimensional array into a one-dimensional array by converting the i and j into subscripts of the array*/
int& DoubleSubscriptedArray::operator()( int i , int j)
{

    subscript = ( i - 1 ) * cColumn + j - 1 ;
    return ptr[subscript] ;
}

int& DoubleSubscriptedArray::operator()( int i , int j ) const
{
    return ptr[subscript] ;
}
/*Since the right value cannot be changed, the type of the function does not take &*/
DoubleSubscriptedArray DoubleSubscriptedArray::operator=( DoubleSubscriptedArray &a )
{
    DoubleSubscriptedArray temp;//Create a temporary object
    temp.ptr[subscript] = a.ptr[subscript];
    return temp;
}

bool DoubleSubscriptedArray::operator==(int i)
{
    if (  ptr[subscript] == i )
        return true;
    else
        return false;
}

bool DoubleSubscriptedArray::operator!=( int i )
{
    if( ptr[subscript] != i )
        return true;
    else
        return false;
}

istream &operator>>( istream &input , DoubleSubscriptedArray &a)
{
    for (size_t i = 0 ; i < a.size ; ++i )
            input >> a.ptr[i] ;
        return  input;
}

ostream &operator<<( ostream &output , const DoubleSubscriptedArray &a )
{
    for ( size_t i = 0 ; i < a.size ; ++i )
    {
        output << setw(12) << a.ptr[i] ;

        if ( ( (i + 1) % a.cColumn ) == 0 )
            output << endl;
    }
    return output;
}

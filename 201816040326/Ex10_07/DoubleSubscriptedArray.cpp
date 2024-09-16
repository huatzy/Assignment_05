#include <iostream>
#include<iomanip>
#include<stdexcept>
#include"DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray( int r , int c )
{
    if(r ==0|| c == 0)
    {
        throw invalid_argument("Array size must greater than 0");
    }
    else
    {
        ptr = new int[ r*c ];
        row = r;
        column = c;
        for(int i = 0;i < r*c ; ++i)
        {
            ptr[i] = 0;
        }
    }
}

DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete []ptr;
}

int DoubleSubscriptedArray::getRow()
{
    return row;
}

int DoubleSubscriptedArray::getColumn()
{
    return column;
}

int &DoubleSubscriptedArray::operator()( int r , int c )
{
    if((r*column+c >= 0) && (r*column+c >= row*column))
        return ptr[r*column + c];
    else
        throw invalid_argument("Out of range!");
}

int DoubleSubscriptedArray::operator()( int r , int c )const
{
    if((r*column+c >= 0) && (r*column+c >= row*column))
        return ptr[r*column + c];
    else
        throw invalid_argument("Out of range!");
}

bool DoubleSubscriptedArray::operator==(DoubleSubscriptedArray &a)const
{
    for(int i = 0 ; i < row*column ; ++i)
    {
        if(a.ptr[i] != ptr[i])
            return false;
    }
    return true;
}

bool DoubleSubscriptedArray::operator!=(DoubleSubscriptedArray &a)const
{
    for(int i = 0 ; i < row*column ; ++i)
    {
        if(a.ptr[i] == ptr[i])
            return false;
    }
    return true;
}

DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(DoubleSubscriptedArray &a)
{
    if( &a != this)
    {
        if( row*column != a.row*a.column)
        {
            delete [] ptr;
            row=a.row;
            column=a.column;
            ptr = new int[ row*column ];
        }
        for(int i=0 ; i < row*column ; ++i)
        {
            ptr[i]=a.ptr[i];
        }
    }
    return *this;
}

ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)
{
    for(int i=0 ; i < a.row*a.column ; ++i)
    {
        output << setw(12) << a.ptr[i];
        if ((i + 1) % a.column == 0 )
            output << endl;
    }
    return output;
}
istream &operator>>(istream &input,DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.row*a.column;i++)
        input>>a.ptr[i];
    return input;
}


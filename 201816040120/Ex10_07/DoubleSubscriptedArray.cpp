#include<iostream>
#include <iomanip>
#include<stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int m, int n)
:row(m>0? m:throw invalid_argument("Row must be greater than 0")),
	column(n>0?n:throw invalid_argument("Column must be greater than 0")),
	ptr(new int[row*column])
{
    row = m;
    column = n;
    for(int i = 0; i<m*n;i++)
    {
        ptr[i] =0;
    }
}
int DoubleSubscriptedArray::operator()(int m , int n)
{
    if( ) m<0|| n<0||row*column||n>row*column)
        throw out_of_range ("row or column out of range");

    return ptr[m*n];
}
int DoubleSubscriptedArray::operator()(int m , int n) const
{
    if( m<0|| n<0||m>row*column||n>row*column)
        throw out_of_range ("m or n out of range");

    return ptr[m*n];
}
const DoubleSubscriptedArray &DoubleSubscriptedArray:: operator= (const DoubleSubscriptedArray&right)
{
    if(&right!=this)
    {
        if(row*column!=(right.row*right.column))
        {
            delete [] ptr;
            row = right.row;
            column = right.column;
            ptr = new int [row*column];
            for(size_t i = 0; i<row*column;i++)
            {
                ptr[i] =right.ptr[i];
            }
        }
    }
    return *this;
}
bool DoubleSubscriptedArray::operator== (const DoubleSubscriptedArray &right)const
{
    if(row*column!=(right.row*right.column))
        return false;
    for(size_t i = 0; i<row*column;i++)
    {
        ptr[i] =right.ptr[i];
    }
        return true;
}
bool DoubleSubscriptedArray::operator!= (const DoubleSubscriptedArray &right)const
{
    return !(*this == right);
}
istream &operator >>(istream &input, DoubleSubscriptedArray &a)
{
    for(size_t i = 0; i<a.row*a.column;i++)
            {
                input>>a.ptr[i];
            }
        return input;
}
ostream &operator<<(ostream& output, const DoubleSubscriptedArray& a)
{
    for(size_t i = 0; i<a.row*a.column;i++)
            {
                output << setw(5) << a.ptr[i];
                if ((i + 1) % a.column == 0)
                    output << endl;
            }

            output << endl;

	return output;
}

#include <iostream>
#include "DoubleSubscriptedArray.h"
#include<iomanip>
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int r, int c)
    :row(r), column(c)
{
    int i;
    for(i = 0; i < row*column; ++i)
        v.push_back(0); //每次放入数组一个值
}

int &DoubleSubscriptedArray::operator()(int r, int c)
{
    return this->v[r*c+c+1];
}
int DoubleSubscriptedArray::operator()(int row, int column) const
{
	if (row < 0 || row >= rows)
		throw out_of_range("Row out of range");
	if (column < 0 || column >= columns)
		throw out_of_range("Column out of range");
	return ptr[(row - 1) * columns + column-1];
}
const DoubleSubscriptedArray& DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray& right)
{
	if (&right != this)
	{
		if (rows * columns != right.rows*right.columns)
		{
			delete[] ptr;
			rows = right.rows;
			columns = right.columns;
			ptr = new int[rows * columns];
		}
		for (size_t i = 0; i < rows * columns; ++i)
			ptr[i] = right.ptr[i];
	}
	return *this;
}
int &DoubleSubscriptedArray::operator()(int r,int c)
{
    if( r<0||r>rows||c<0||c>columns )
        throw invalid_argument("Subscript out of range");//judge range
    return ptr[(r-1)*rows+c-1];//return
}//end function
//overload operator() to get const appointed object
int DoubleSubscriptedArray::operator()( int r,int c )const
{
    if( r<0||r>rows||c<0||c>columns )
        throw invalid_argument("Subscript out of range");//judge range
    return ptr[(r-1)*rows+c-1];//return
}//end function
//overload input operator for class DoubleSubscriptedArray
istream &operator>>( istream &input, const DoubleSubscriptedArray &rarray )
{
    for( int i=0;i<rarray.size;++i)
        input >> rarray.ptr[i];
    return input;//enable cin>>x>>y;
}//end function
//overload output operator for class DoubleSubscriptedArray
ostream &operator<<( ostream &output, const DoubleSubscriptedArray &rarray )
{
    for(int i=0;i<rarray.size;++i )
    {
        output <<setw(6)<<rarray.ptr[i];
        if((i+1)%rarray.columns==0)//number of columns per row of output
            output<<endl;
    }
    return output;//enables cout<<x<<y;
}

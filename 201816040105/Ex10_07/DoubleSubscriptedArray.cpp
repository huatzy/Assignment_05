//部分参照一班六号同学的代码

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int x,int y)
{
	rows=x;
	columns=y;
	ptr(new int[x*y]);
	for(size_t i=0;i<x*y;++i)
	ptr[i]=0
}

DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
	delete [] ptr;
}

size_t DoubleSubscriptedArray::getSize() const
{
	return rows*columns;
}

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right )
{
	if (&right != this)
	{
		if (rows!=right.rows||columns!=right.columns)
		{
			delete [] prt;
			rows=right.rows;
			columns=right.columns;
			ptr=new int[rows*columns]
		}
		
		for (size_t i=0;i<rows*columns;++i
		ptr [i]=right.ptr [i];
	}
	return *this;
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
	if (rows!=right.rows||columns!=rhgit.columns)
	return false;
	for (size_t i=0;i<rows*columns;++i
	if (ptr [i]!=right.ptr [i])
	return false;
	
	return true;
}

int &DoubleSubscriptedArray::operator(int x,int y)
{
	if(x<0||x>rows||y<0||y>columns)
	throw out_of_range("Rows or Columns out of range");
	return ptr[x*y];
}

int DoubleSubscriptedArray::operator(int x,int y) const
{
	if(x<0||x>rows||y<0||y>columns)
	throw out_of_range("Rows or Columns out of range");
	return ptr[x*y];
}

istream &operator>>(istream &input,DoubleSubscriptedArray &a)
{
	for(size_t i=1;i<=a.column*a.row;i++)
        input>>a.ptr[i];
    return input;
}

ostream &operator<<(ostream &output,const DoubleSubScriptedArray &a)
{
    for(size_t i=1;i<=a.column*a.row;i++)
	{
        output<<setw(12)<<a.ptr[i];
        if(i%a.column==0)
		output<<endl;
    }
    return output;
}

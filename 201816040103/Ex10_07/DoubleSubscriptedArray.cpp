#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int rowsx,int columnsx)
	: rows(rowsx),columns(columnsx),
	  ptr(new int[rows*columns])
{
	size = rows*columns;
	for(size_t i=0;i<rows*columns;++i)
		ptr[i]=0;
}
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &DoubleSubscriptedArrayToCarry)
	: rows(DoubleSubscriptedArrayToCarry.rows),
	  columns(DoubleSubscriptedArrayToCarry.columns),
	  ptr(new int[rows*columns])
{
	size = rows*columns;
	for(size_t i=0;i<rows*columns;++i)
		ptr[i]=DoubleSubscriptedArrayToCarry.ptr[i];
}
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
	delete [] ptr;
}
size_t DoubleSubscriptedArray::getSize() const
{
	return rows*columns;
}
int &DoubleSubscriptedArray::operator()(int rowsx,int columnsx)
{
	if(rowsx<0||rowsx>rows||columnsx<0||columnsx>columns)
		throw out_of_range("row or column out of range");
	else
		return ptr[rowsx*columnsx];
	
}
int &DoubleSubscriptedArray::operator()(int rowsx,int columnsx) const
{
	if(rowsx<0||rowsx>rows||columnsx<0||columnsx>columns)
		throw out_of_range("row or column out of range");
	else
		return ptr[rowsx*columnsx];
	
}
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
	if(&right != this)
	{
		if(size!=right.size)
		{
			delete [] ptr;
			size = right.size;
			ptr = new int[size];
		}
		for(size_t i=0;i<size;++i)
			ptr[i]=right.ptr[i];
	}
	return *this;
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
	if(rows != right.rows && columns!=right.columns)
		return false;
	for(size_t i=0;i<rows*columns;++i)
		if(ptr[i] != right.ptr[i])
		return false;
	return true;
}
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &right) const
{
	return !(*this==right);
}
istream &operator>>(istream &input,DoubleSubscriptedArray &a)
{
	for(size_t i=0;i<a.size;++i)
		input>>a.ptr[i];
	return input;
}
ostream &operator<<(ostream &output,DoubleSubscriptedArray &a)
{
	for(size_t i=0;i<a.size;++i)
	{
		output<<setw(12)<<a.ptr[i];
		if( (i+1)%4 == 0 )
			output<<endl;
	}
	if(a.size % 4 != 0)
		output << endl;
	return output;
}

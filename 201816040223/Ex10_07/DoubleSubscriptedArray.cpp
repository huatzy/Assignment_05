#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"DoubleSubscriptedArray.h"
using namespace std;
//default constructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(int x1,int y1)
:x(x1), y(y1),
    ptr(new int [x1*y1])
{
    for(size_t i=0;i<x1*y1;++i)
    {
        ptr[i]=0;

    }
}

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(&right!=this)
    {
        if(x1*y1!=right.x1*right.y1)
            delete [] ptr;
        x1=right.x1;
        y1=right.y1;
        ptr=new int [x1*y1];
    }
    for(size_t i=0;i<x1*y1;i++)
    {
        ptr[i]=right.ptr[i];
    }
    return *this;
}
int DoubleSubscriptedArray::operator[](int x1,int y1)
{
    if (x1 < 0 || x1*y1 >= size)
		throw out_of_range("Row and Column out of range");
		return ptr[x1*y1];

}
int &DoubleSubscriptedArray::operator[](int x1,int y1)
{
    return ptr[x1*y1];
}
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &right)const
{
    if(x1*y1!=right.x1*right.y1)
        return true;
    else return false;
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)const
{
    if(x1*y1==right.x1*right.y1)
        return true;
    else return false;
}
ostream &operator<<(ostream &output ,const DoubleSubscriptedArray &a)
{
    for(size_t i=0;i<a.y1*a.x1;++i)
    {
        output<<a.ptr[i];
    }
    return output;
}
istream &operator>>(istream &input, DoubleSubscriptedArray& a)

{

	for (size_t i = 0; i < a.x1*a.y1; ++i)

		input >> a.ptr[i];

	return input;

}

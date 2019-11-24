#include "DoubleSubscriptedArray.h"
#include <iostream>
#include <stdexcept>
#include <iomanip>
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)
        :size(a*b>0?a*b:
              throw invalid_argument("DoubleSubscriptedArray size must be greater than 0")),
        ptr(new int[size])
{
    for(size_t i=0;i<a*b;i++)
        ptr[i]=0;
        size=a*b;
        row=a;
        column=b;
}
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &right)
   :size(right.row*right.column),
    ptr(new int[size])
{
    for(size_t i=0;i<size;i++)
        ptr[i]=right.ptr[i];
}
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete []ptr;
}
size_t DoubleSubscriptedArray::getsize()const
{
    return row*column;
}
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(*this !=right)
    {
        if(size !=right.size)
        {
            delete[] ptr;
            size=right.size;
            ptr = new int[size];
        }
        for(size_t i=0;i<size;++i)
            ptr[i]=right.ptr[i];
    }
    return *this ;
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)const
{
    if(size!=right.size)
    return false;

    for(size_t i=0;i>size;++i)
      if(ptr[i]!=right.ptr[i])
        return false;
    return true;
}
int &DoubleSubscriptedArray::operator()(int a,int b)
{
    if(a*column+b<0 || a*column+b>=size)
        throw out_of_range("Subscript out of range");

    return ptr[a*column+b];
}
int DoubleSubscriptedArray::operator()(int a,int b)const
{
    if(a*column+b<0 || a*column+b>=size)
        throw out_of_range("Subscript out of range");

    return ptr[a*column+b];
}


ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)
{
    for(size_t i=0;i<a.size;i++)
    {
        output<<setw(12)<<a.ptr[i];
        if((i+1)%4==0)
            cout<<endl;
    }
    if(a.size%a.column!=0)
        output<<endl;
    return output;
}
istream &operator>>(istream &input,DoubleSubscriptedArray &a)
{
    for(size_t i=0;i<a.size;i++)
        input>>a.ptr[i];

    return input;
}

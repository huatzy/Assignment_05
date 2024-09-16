#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "DoubleSubscriptedArray.h"
using namespace std;
DoubleSubscriptedArray::DoubleSubscriptedArray(int r,int c)
    :size(r*c>0?r*c:throw invalid_argument("size of row*colum must be greater than 0")),
     ptr(new int[size])
{
    row=r;
    column=c;
    for(size_t i=0; i<size; ++i)
    {
        ptr[i]=0;
    }
}
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &flag)
    :size(flag.size),
     ptr(new int[size])
{
    row=flag.row;
    column=flag.column;
    for(size_t i=0; i<size; ++i)
    {
        ptr[i]=flag.ptr[i];
    }
}
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}
size_t DoubleSubscriptedArray::getSize() const
{
    return size;
}
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(&right!=this)
    {
        if(size!=right.size)
        {
            delete [] ptr;
            size=right.size;
            row=right.row;
            column=right.column;
            ptr=new int[size];
        }
        for(size_t i=0; i<size; ++i)
        {
            ptr[i]=right.ptr[i];
        }
    }
    return *this;
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
    if(size!=right.size)
    {
        return false;
    }
    else
    {
        for(size_t i=0; i<size; ++i)
        {
            if(ptr[i]!=right.ptr[i])
            {
                return false;
            }
        }
        return true;
    }
}
int &DoubleSubscriptedArray::operator()(int r,int c)
{
    if(r<0||r>row)
    {
        throw out_of_range("row out of range");
    }
    if(c<0||c>column)
    {
        throw out_of_range("column out of range");
    }
    return ptr[r*column+c];
}
int DoubleSubscriptedArray::operator()(int r,int c) const
{
    if(r<0||r>row)
    {
        throw out_of_range("row out of range");
    }
    if(c<0||c>column)
    {
        throw out_of_range("column out of range");
    }
    return ptr[r*column+c];
}
istream &operator>>(istream &input,DoubleSubscriptedArray &flag)
{
    cout<<"ÇëÊäÈë"<<flag.size<<"¸öÊý:"<<endl;
    for(size_t i=0; i<flag.size; ++i)
    {
        input>>flag.ptr[i];
    }
    return input;
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &flag)
{
    for(size_t i=0; i<flag.size; ++i)
    {
        output<<setw(12)<<flag.ptr[i];
        if((i+1)%flag.column==0)
        {
            output<<endl;
        }
    }
    if(flag.size%flag.column!=0)
    {
        output<<endl;
    }
    output<<endl;
    return output;
}

#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "DoubleSubscriptedArray.h"
using namespace std;
DoubleSubscriptedArray::DoubleSubscriptedArray(int r,int c)
    :size(r*c),
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
    for(int i=0; i<size; ++i)
    {
        ptr[i]=flag.ptr[i];
    }
}
void DoubleSubscriptedArray::setSize(int a,int b)
{
    if(a>0&&b>0)
    {
    row=a;
    column=b;
    size=a*b;
    }
    else
        cout<<"行列数必须都大于0"<<endl;
}
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}
int DoubleSubscriptedArray::getSize() const
{
    return size;
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
//查找函数
void DoubleSubscriptedArray::seekDoubleSubscriptedArray(int a,int b)
{
    int c=a*b;
    cout<<"第"<<a<<"行"<<"第"<<b<<"列的数据是："<<endl;
    cout<<ptr[c-1]<<endl;
}
//重载运算符= ，== ,!= ,<< .>>.
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
            delete [] ptr;
            size=right.size;
            row=right.row;
            column=right.column;
            ptr=new int[size];
        for(int i=0; i<size; ++i)
        {
            ptr[i]=right.ptr[i];
        }

    return *this;
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
    int a=0;
    if(size!=right.size)
    {
        return false;
    }
    else if(size==right.size)
    {
        for(int i=0; i<size; ++i)
        {
            if(ptr[i]!=right.ptr[i])
            {
                a=1;
            }
        }
        if(a==1)
            return false;
    }
    else
        return true;
}
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &right) const
{
    int a=0;
    if(size!=right.size)
    {
        return true;
    }
    else if(size==right.size)
    {
        for(int i=0; i<size; ++i)
        {
            if(ptr[i]!=right.ptr[i])
            {
                a=1;
            }
        }
        if(a==1)
            return true;
    }
    else
        return false;
}
istream &operator>>(istream &input,DoubleSubscriptedArray &flag)
{
    for(int i=0; i<flag.size; ++i)
    {
        input>>flag.ptr[i];
    }
    return input;
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &flag)
{
    for(int i=0; i<flag.size; ++i)
    {
        output<<flag.ptr[i]<<"   ";
        if((i+1)%flag.column==0)
        {
            output<<endl;
        }
    }
    output<<endl;
    return output;
}

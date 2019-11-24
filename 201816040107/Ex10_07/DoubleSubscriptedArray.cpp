#include <iostream>
#include <iomanip>
#include<vector>
#include "DoubleSubscriptedArray.h"
using namespace std;
DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)
    :row(a),column(b)
    {
        for(int i=0;i<row*column;i++)
        {
            s.push_back(0);
        }
    }
bool DoubleSubscriptedArray::operator==(DoubleSubscriptedArray &n)
{
    if(this->row*this->column!=n.row*n.column)
    {
        return false;
    }
    for(int i=0;i<this->row*this->column;i++)
    {
        if(this->s[i]!=n.s[i])
            return false;
    }
    return true;
}
bool DoubleSubscriptedArray::operator!=(DoubleSubscriptedArray &n)
{
    return !(*this==n);
}
int &DoubleSubscriptedArray::operator()(int r,int c)
{
    if(r<0 ||r>row ||c<0 || c>column)
    throw out_of_range("row or column is out of range");
    return s[(r-1)*c+c-1];
}
const int &DoubleSubscriptedArray::operator()(int r,int c) const
{
    if(r<0 ||r>row ||c<0 || c>column)
        throw out_of_range("row or column is out of range");
    return s[(r-1)*c+c-1];
}
DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &n)
{
    int a=row*column;
    int b=n.row*n.column;
    if(a!=b)
    {
        a=b;
    }
    s.resize(a);
    row=n.row;
    column=n.column;
    for(int i=0;i<a;i++)
    {
        s[i]=n.s[i];
    }

    return *this;
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &n)
{
    for(int i=0;i<n.row*n.column;i++)
    {
        output<<setw(5)<<n.s[i];
        if((i+1)%5==0)
        {
            output<<endl;
        }
    }
    return output;
}
istream &operator>>(istream &input,DoubleSubscriptedArray &n)
{
    int a=n.row*n.column;
    for(int i=0;i<a;i++)
    {
        input>>n.s[i];
    }
    return input;
}

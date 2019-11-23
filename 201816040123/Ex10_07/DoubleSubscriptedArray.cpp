#include <iostream>
#include <iomanip>
#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray( int a, int b)
{
    setRow(a);
    setColumn(b);

    p=(int**)new int*[a];
    for(int i=0;i<a;++i)
        p[i]=new int[b]();
}
void DoubleSubscriptedArray::setRow(int a)
{
    if(a>=0)
        row=a;
    else
    {
        cerr<<"不存在该数组"<<endl;
        exit(0);
    }
}
void DoubleSubscriptedArray::setColumn(int b)
{
    if(b>=0)
        column=b;
    else
    {
        cerr<<"不存在该数组"<<endl;
        exit(0);
    }
}
int DoubleSubscriptedArray::getRow() const
{
    return row;
}
int DoubleSubscriptedArray::getColumn() const
{
    return column;
}


ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.row;++i)
    {
        for(int j=0;j<a.column;++j)
        {
            output<<setw(5)<<a.p[i][j];

        }
        cout<<endl;
    }
    return output;
}
istream &operator>>(istream &input, DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.row;++i)
        for(int j=0;j<a.column;++j)
        input>>a.p[i][j];
    return input;
}
int &DoubleSubscriptedArray::operator()(int a, int b)
{
    if(a>=0&&b>=0)
        return p[a][b];
    else
    {
        cerr<<"该数组不存在"<<endl;
        exit(0);
    }
}
int DoubleSubscriptedArray::operator()(int a, int b) const
{
    if(a>=0&&b>=0)
        return p[a][b];
    else
    {
        cerr<<"该数组不存在"<<endl;
        exit(0);
    }
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &r) const
{
    int flag=0;
    if(column!=r.column||row!=r.row)
        return false;
    else
    {
        for(int i=0;i<row;++i)
            for(int j=0;j<column;++j)
        {
            if(p[i][j]!=r.p[i][j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            return false;
        else
            return true;
    }

}
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &r) const
{
    return !(*this==r);
}
DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &r)
{
    if(*this==r);
    else
    {
        if(column==r.column&&row==r.row);
        else
        {
            for(int i=0;i<row;++i)
                delete [] p[i];
            delete []p;

            p=(int**)new int*[r.row];
            for(int i=0;i<r.row;++i)
                p[i]=new int[r.column]();
            row=r.row;
            column=r.column;
        }
        for(int i=0;i<r.row;++i)
            for(int j=0;j<r.column;++j)
                p[i][j]=r.p[i][j];
    }
    return *this;
}

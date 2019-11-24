#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std ;

DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)
{
    x =a;
    y =b;
    ptr = new int[a*b];
}
 const DoubleSubscriptedArray &DoubleSubscriptedArray:: operator=( const DoubleSubscriptedArray &q)
 {
    if(&q!=this)
    {
        delete [] ptr;
        if(x!=q.x||y!=q.y)
        {
            x = q.x;
            y = q.y;
            ptr = new int[x*y];
        }
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
            {
                ptr[i*y+j] = q.ptr[i*y+j];
            }
    }
    return *this;
 }
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &q) const
{
    if(x!=q.x||y!=q.y)
        return false;
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            if(ptr[i*y+j]!=q.ptr[i*y+j])
                return false;
    return true;
}
int DoubleSubscriptedArray::operator()(int a,int b)
{
    if(a>=x||a<0||b>=y||b<0)
    {
        throw("Out of range");
    }
    return ptr[a*y+b];
}
int &DoubleSubscriptedArray::operator()(int a,int b) const
{
    if(a>=x||a<0||b>=y||b<0)
    {
        throw("Out of range");
    }
    return ptr[a*y+b];
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.x;i++){
        for(int j=0;j<a.y;j++){
            output<<a.ptr[i*a.y+j]<<' ';
        }
        output<<endl;
    }
    return output; //enables cout << x << y
}
istream &operator>>(istream &input,DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.x;i++)
        for(int j=0;j<a.y;j++)
            input >> a.ptr[i*a.y+j];
    return input; //enable cin>>x>>y
}



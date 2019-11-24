#include <iostream>
using namespace std;

#include "DoubleSubscriptedArray.h"
//Constructors
DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)
{
    ptr = new int [a*b] ;
    x = a ;
    y = b ;
}
//Overload operator =
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(x!=right.x || y!=right.y)
    {
        delete ptr ;
        x = right.x ;
        y = right.y ;
        ptr = new int [x*y];
    }
    for(int i = 0 ; i < x*y ; i++)
    {
        ptr[i] = right.ptr[i] ;
    }
    return *this;
}
//Overload operator ==
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
    for(int i = 0 ; i < x*y ; i++)
    {
        if(ptr[i] != right.ptr[i])
            return false ;
    }
    return true;
}
//Overload operator ()
int &DoubleSubscriptedArray::operator()(int a, int b)
{
    return ptr[a*b];
}
//Overload operator <<
ostream &operator<<(std::ostream &output,const DoubleSubscriptedArray &a)
{
        for(int i=0 ; i<a.x*a.y; i++)
        {
            output<<a.ptr[i]<<' ';
        }
    return output;
}
//Overload operator >>
istream &operator>>(std::istream &input,DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.x;i++)
        for(int j=0;j<a.y;j++)
            input>>a.ptr[i*a.y+j];
    return input;
}

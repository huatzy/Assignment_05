#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscripetedArray.h"
using namespace std;

DoubleSubscripetedArray::DoubleSubscripetedArray(int a, int b)
    :x(a>0? a:
       throw invalid_argument("DoubleSubscripetedArray: x must be more than 0")),
     y(b>0? b:
       throw invalid_argument("DoubleSubscripetedArray: y must be more than 0")),
     p(new int[x*y+1])
     {
         for(int i=0; i<x*y+1; i++)
            p[i]=0;
     }
int &DoubleSubscripetedArray::operator()(int a, int b)
{
    if(a>0&&a<=x&&b>0&&b<=y)
        return p[(a-1)*y+b];
    else
        throw invalid_argument("out of range");
}
/*  const int &DoubleSubscripetedArray::operator()(int a, int b)
{
    this=p[a*b-1];
    return this;
}  */
bool DoubleSubscripetedArray::operator==(const DoubleSubscripetedArray &num) const
{
    if(x*y!=num.x*num.y)
        return false;
    for(int i=1; i<=x*y; i++)
    {
        if(p[i]!=num.p[i])
            return false;
    }
    return true;
}
bool DoubleSubscripetedArray::operator!=(const DoubleSubscripetedArray &num) const
{
    return !(*this==num);
}
 const DoubleSubscripetedArray &DoubleSubscripetedArray::operator=(const DoubleSubscripetedArray &n)
 {
    if(&n!=this)
    {
        if(x*y!=n.x*n.y)
        {
            delete [] p;
            x=n.x;
            y=n.y;
            p=new int[x*y+1];
        }
        for(int i=0; i<=x*y; i++)
        {
            p[i]=n.p[i];
        }
    }
    return *this;
}
istream &operator>>(istream &input, DoubleSubscripetedArray &n)
{
    for(int i=1; i<=n.x*n.y; i++)
    {
        input >> n.p[i];
    }
    return input;
}
ostream &operator<<(ostream &output, const DoubleSubscripetedArray &n)
{
    for(int i=1; i<=n.x*n.y; i++)
    {
        output << n.p[i] <<" ";
        if(i%n.x==0)
            output << "\n";
    }
    return output;
}

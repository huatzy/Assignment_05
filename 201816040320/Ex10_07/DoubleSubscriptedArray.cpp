#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)
:sizeL(a>0 ? a:throw invalid_argument("Array size must greater than 0")),
 sizeH(b>0 ? b:throw invalid_argument("Array size must greater than 0")),
 ptr(new int[sizeL*sizeH])
{
    for(size_t i=0;i<sizeL*sizeH;++i)
        ptr[i]=0;
}

DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}

size_t DoubleSubscriptedArray::getSize() const
{
    return sizeL*sizeH;
}

DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &right)
{
    if(&right != this )
    {
        if(sizeL!=right.sizeL&&sizeH!=right.sizeH)
        {
            delete [] ptr;
            sizeL=right.sizeL;
            sizeH=tight.sizeH;
            ptr=new int[sizeL*sizeH];
        }
        for(size_t i=0;i<sizeL*sizeH;++i)
            ptr[i]=right.ptr[i];
    }

    return *this;
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
    if(sizeL!=right.sizeL||sizeH!=right.sizeH)
        return false;

    for(size_t i=0;i<sizeH*sizeL;++i)
        if(ptr[i]!=right.ptr[i])
            return false;
    return true;
}

int &DoubleSubscriptedArray::operator()(int a,int b)
{
    if((a<0||a>sizeL)||(b<0||b>sizeH))
        throw out_of_range("Argument out of range");
    return ptr[a*sizeL+b-1]
}

int DoubleSubscriptedArray::operator()(int a,int b) const
{
    if((a<0||a>sizeL)||(b<0||b>sizeH))
        throw out_of_range("Argument out of range");
    return ptr[a*sizeL+b-1]
}

istream &operator<<(istream &input,DoubleSubscriptedArray &a)
{
    for(size_t i=0;i<a.sizeL*a.sizeH;++i)
        input>>a.ptr[i];
    return input;
}

ostream &operator>>(ostream &output,const DoubleSubscriptedArray &a)
{
    for(size_t i=0;i<a.sizeH*a.sizeL;++i)
    {
        output<<setw(12)<<a.ptr[i];
        if((i+1)%a.sizeL==0)
            output<<endl;
    }
    return output;
}

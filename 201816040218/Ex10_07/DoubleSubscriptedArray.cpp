#include "DoubleSubscriptedArray.h"
#include <iomanip>
DoubleSubscriptedArray::DoubleSubscriptedArray(int arraySize, int r, int c)
:size(arraySize >0?arraySize:throw invalid_argument("DoubleSubscriptedArray size must be greater than 0")),
ptr(new int[size])
{
    for(size_t i=0;i<size;++i)
        ptr[i]=0;
    rows= r;
    columns= c;
}

DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &DoubleSubscriptedArrayToCopy)
:size(DoubleSubscriptedArrayToCopy.size),
ptr(new int[size])
{
    for(size_t i=0;i<size;++i)
        ptr[i]=DoubleSubscriptedArrayToCopy.ptr[i];
    rows=DoubleSubscriptedArrayToCopy.rows;
    columns=DoubleSubscriptedArrayToCopy.columns;
}

DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}

size_t DoubleSubscriptedArray::getSize() const
{
    return size;
}

const DoubleSubscriptedArray& DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(&right != this )
    {
        if(size != right.size)
        {
            delete [] ptr;
            size = right.size;
            ptr =new int[size];
        }

        for(size_t i=0;i<size;++i)
            ptr[i]=right.ptr[i];
    }
    else
    {
        for(size_t i=0;i<size;++i)
            ptr[i]=right.ptr[i];
    }
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray& right) const
{
    if(size !=right.size)
        return false;
    for(size_t i=0;i< size;++i)
        if(ptr[i]!=right.ptr[i])
            return false;
    return true;
}

int& DoubleSubscriptedArray::operator()(int r, int c)
{
    if(r<0||c<0||r>rows||c>columns)
        throw out_of_range("r||c out of range");
    return ptr[(r-1)*columns+c-1];
}

int DoubleSubscriptedArray::operator()(int r, int c) const
{
    if(r<0||c<0||r>rows||c>columns)
        throw out_of_range("r||c out of range");
    return ptr[(r-1)*columns+c-1];
}

istream &operator>>(istream &input, DoubleSubscriptedArray &a)
{
    for( size_t  i =0 ;i<a.size ; ++i)
        input >> a.ptr[i];
    return input;
}
ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a)
{
    for( size_t i= 0;i<a.size;++i)
    {
        output<<setw(12)<<a.ptr[i];

        if((i+1)%a.columns ==0)
            output<<endl;

    }
    if(a.size%a.columns!=0)
        output<<endl;
    return output;
}






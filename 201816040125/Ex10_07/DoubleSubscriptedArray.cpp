#include<iostream>
#include<iomanip>
#include<stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int arraySize)
      :size(arraySize>0?arraySize:
            throw invalid_argument("DoubleSubscriptedArray size must be greater than 0")),
            ptr(new int[size])
  {
         for(size_t i=0;i<size;++i)
                    ptr[i]=0;
  }

  DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &arrayToCopy):size(arrayToCopy.size),ptr(new int[size])
  {
      for(size_t i=0;i<size;++i)
                    ptr[i]=arrayToCopy.ptr[i];
  }

 DoubleSubscriptedArray::~DoubleSubscriptedArray()
 {
     delete [] ptr;
 }

 size_t DoubleSubscriptedArray::getSize()const
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
             ptr=new int[size];
         }
         for(size_t i=0;i<size;++i)
            ptr[i]=right.ptr[i];
     }
     return *this;
 }

 bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right ) const
 {
     if(size!=right.size)
        return false;
     for(size_t i=0;i<size;++i)
        if(ptr[i]!=right.ptr[i])
         return false;
     return true;
 }


int &DoubleSubscriptedArray::operator()(int row,int columns)
{
    if(row*columns<0||row*columns>size)
        throw out_of_range("Subscript out of range");
    return ptr[row*columns];
}

int DoubleSubscriptedArray::operator()(int row,int columns) const
{
    if(row*columns<0||row*columns>size)
        throw out_of_range("Subscript out of range");
    return ptr[row*columns];
}

istream &operator>>( istream &input, DoubleSubscriptedArray &a)
{
    for(size_t i=0;i=a.size;++i)
    {

        input>>a.ptr[i];
    }

    return input;
}

ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a)
{
    for(size_t i=0;i<a.size;++i)
    {
     output<<setw(8)<<a.ptr[i];

    if((i+1)%6==0)
    output<<endl;
    }
    if(a.size%6!=0)
        output<<endl;

    return output;
}

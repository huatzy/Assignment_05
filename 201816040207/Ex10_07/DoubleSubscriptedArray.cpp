#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Array.h"

using namespace std;


//构造函数
Array::Array(int arraySize)//超出返回值，抛出异常
    :size(arraySize > 0 ? arraySize:
          throw invalid_argument("Array size must be greater than 0")),
          ptr(new int [size])
{
    for (size_t i=0;i<size;i++)
        ptr[i]=i;
}
//构造函数
Array::Array(const Array &arrayToCopy)
    :size(arrayToCopy.size),
    ptr(new int[size])
    {
        for (size_t i = 0;i<size;i++)
            ptr[i] = arrayToCopy.ptr[i];
    }

//析构函数
Array::~Array()
{
    delete [] ptr;
}
//返回大小
size_t Array::getSize()const
{
    return size;
}
//等于重载
const Array &Array::operator=(const Array &right)
{
    if(&right!= this)
    {
        if(size!=right.size)
        {
            delete [] ptr;
            size = right.size;
            ptr = new int[size];
        }
        for(size_t i = 0;i<size;++i)
            ptr[i] = right.ptr[i];

    }

    return *this;
}
//布尔函数
bool Array::operator==(const Array &right) const
{
    if(size != right.size)
        return false;
    for (size_t i =0; i <size ;++i)
    {
        if(ptr[i]!= right.ptr[i])
            return false;

    }
    return true;
}

istream &operator >>(istream &input, Array &a)
{
    for (size_t i =0;i<a.size;++i)
        input>>a.ptr[i];

    return input;
}

ostream &operator <<(ostream &output ,const Array &a)
{
    for (size_t  i=0;i <a.size;++i)
    {
         output << setw(12) <<a.ptr[i];

         if((i+1)%4==0)
            output <<endl;
    }

    if(a.size % 4 !=0)
        output<<endl;

    return output;
}

int &Array::operator()(int subscript)
{
    if(subscript <0||subscript>=size)//超出返回值，抛出异常
    {
        throw out_of_range("Subscript out of range");

    }
    return ptr[subscript];

}
int Array::operator()(int subscript) const
{
    if(subscript <0 ||subscript>=size)//超出返回值，抛出异常
    {

        throw out_of_range("Subscript out of range");
    }
    return ptr[subscript];

}

int   Array::operator()(int a,int b)const
{
    int c= a*b;
    return ptr[c-1];

}



#include<iostream>
#include<iomanip>
#include<stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray( int rows, int columns)
        :size(rows*columns>0?rows*columns:
               throw invalid_argument("DoubleSubscriptedArray size must be ggreater than 0")),
         ptr(new int[size])
{
    for(size_t i=0; i<size; ++i)
    ptr[i]=0;
}//把二维数组转化成一位数组去计算

DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray & arraytocopy)
        :size(arraytocopy.size),
         ptr(new int [size])
{
    for(size_t i=0; i<size;++i)
    ptr[i]=arraytocopy.ptr[i];
}

DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}// 析构函数

size_t DoubleSubscriptedArray::getSize() const
{
    return size;
}//计算二维数组转化为一位数组后的长度

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(&right != this)
    {
        if(size != right.size)
        {
            delete [] ptr;
            size = right.size;
            ptr = new int[size];
        }
        for(size_t i=0;i<size;++i)
        ptr[i]=right.ptr[i];
    }
    return *this;
}// 赋值运算

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
    if(size != right.size)
    return false;
    for(size_t i=0;i<size;++i)
        if(ptr[i]!=right.ptr[i])
        return false;
    return true;
}

int &DoubleSubscriptedArray::operator[](int subscript)
{
    if(subscript<0 || subscript >=size)
        throw out_of_range("Subscript out of range");
    return ptr[subscript];
}

int DoubleSubscriptedArray::operator[](int subscript)const
{
    if(subscript<0 || subscript >=size)
        throw out_of_range("Subscript out of range");
    return ptr[subscript];
}

istream &operator >>(istream &input, DoubleSubscriptedArray &a)
{
    for(size_t i=0; i<a.size;++i)
        input >> a.ptr[i];
    return input;
}//把数据输入二维数组中

ostream &operator<<(ostream &output, const DoubleSubscriptedArray &a)
{
    for(size_t i=0;i<a.size;++i)
    {
        output<<setw(3)<<a.ptr[i];
        if((i+1)%5==0)
        output<<endl;
    }
    if(a.size % 3 !=0)
        output <<endl;

    return output;
}//把二维数组中的数据输出

//Ex10_07:DoubleSubscriptedArray.cpp
#ifndef DOUBLESUBCRIPTEDARRAY_CPP_INCLUDED
#define DOUBLESUBCRIPTEDARRAY_CPP_INCLUDED

#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;


DoubleSubscriptedArray::DoubleSubscriptedArray(unsigned int sizeA,unsigned int sizeB)
    :size1(sizeA>0 ? sizeA : throw invalid_argument("Array 行数 must be greater than 0")),
    size2(sizeB>0 ? sizeB : throw invalid_argument("Array 列数 must be greater than 0")),
    ptr(new int[sizeA*sizeB])
{
}
//copy constructor for class
//must receive a reference to an Array
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray & arrayToCopy)
    :size1(arrayToCopy.size1),size2(arrayToCopy.size2),ptr(new int[size1*size2])
{
    *this=arrayToCopy;
}

//destructor for class
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}//end desstructor

//overloaded assignment operator
//const return avoids: (a1 = a2) = a3
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(&right!=this)
    {
        //for Arrays of different sizes, deallocate original left-size Array, the allocate new left-side Arrray
        if(size1!=right.size1||size2!=right.size2)
        {
            delete [] ptr;
            size1=right.size1;
            size2=right.size2;
            ptr=new int[right.size1*right.size2];
        }//end inner if
        for(size_t i=0; i<size1 ;++i)
            for(size_t j=0; j<size2 ;++j)
                ptr[i*size2+j]=right.ptr[i*size2+j];
    }//end outer if
    return *this;
}//end function operator=

//determine if two Arrrays are not equal
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &right) const
{
    //判断范围
    if(size1==right.size1&&size2==right.size2)
        return false;
    //判断具体数据
    for(size_t i=0;i<size1;++i)
        for(size_t j=0;j<size2;++j)
            if(ptr[i*size2+j]==right.ptr[i*size2+j])
                return false;
    return true;
} //end function
//determine if two Arrrays are  equal
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
    if(*this!=right)
        return false;
    return true;
}//end function
//overloaded  operator() for class
//reference return creates an rvalue
int &DoubleSubscriptedArray::operator()(unsigned int sizeA,unsigned int sizeB)
{
    //验证在范围内
    if(sizeA>=size1||sizeB>=size2||sizeA<0||sizeB<0)
        throw out_of_range("Subscript out of range");
    return ptr[sizeA*size2+sizeB];
}//end function
//overloaded  operator() for class
//const reference return creates an rvalue
int DoubleSubscriptedArray::operator()(unsigned int sizeA,unsigned int sizeB) const
{
    //验证在范围内
    if(sizeA>=size1||sizeB>=size2||sizeA<0||sizeB<0)
        throw out_of_range("Subscript out of range");
    return ptr[sizeA*size2+sizeB];//返回当前位置的值
}//end function
//overloaded input operator for class
istream &operator>>(std::istream &input,DoubleSubscriptedArray &a)
{
    for(size_t i=0;i<a.size1;++i)
        for(size_t j=0;j<a.size2;++j)
            input>>a.ptr[j+i*a.size2];
    return input;
}//end function

//overloaded output operator foa class
ostream &operator<<(std::ostream &output,const DoubleSubscriptedArray &a)
{
    //循环输出数组数据
    for(size_t i=0; i<a.size1; ++i)
    {
        //第二层循环
        for(size_t j=0;j<a.size2;++j)
        {
            output<<a.ptr[j+i*a.size2]<<' ';//输出数组里的数据
        }//end for
        output<<endl;//换行
    }//end for
    return output;
}// end function operator <<




#endif // DOUBLESUBCRIPTEDARRAY_CPP_INCLUDED

//DoubleSubscriptedArray.cpp
//DoubleSubscriptedArray member-function and friend-function definitions
#include<iostream>
#include<iomanip>
#include<stdexcept>
#include "DoubleSubscriptedArray.h"//DoubleSubscriptedArray class definition

using namespace std;

//default constructor for class DoubleSubscriptedArray(default size 1)
DoubleSubscriptedArray::DoubleSubscriptedArray(int Line ,int Row)
    : line(Line>0?Line :throw invalid_argument("DoubleSubscriptedArray line must be greater than 0")),
      row(Row>0?Row :throw invalid_argument("DoubleSubscriptedArray row must be greater than 0")),
      ptr(new int[Line*Row])
{
    size=Line*Row;
    for(size_t i=0;i<size;++i)
            ptr[i]=0;
}//end DoubleSubscriptedArray default constructor

//copy constructor for class DoubleSubscriptedArray
//must receive a reference to an DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &toCopy)
    : size(toCopy.size),
      line(toCopy.line),
      row(toCopy.row),
      ptr(new int[size])
{
    for(size_t i=0;i<size;++i)
        ptr[i]=toCopy.ptr[i];//copy into object
}//end DoubleSubscriptedArray copy constructor

//destructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;//release pointer-based DoubleSubscriptedArray space
}//end destructor

//return number of elements in DoubleSubscriptedArray
size_t DoubleSubscriptedArray::getSize()const
{
    return size;
}//end function getSize

//overloaded assignment operator
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(&right != this)//avoid self-assignment
    {
        //for DoubleSubscriptedArrays of different sizes,deallocate original
        //left-side DoubleSubscriptedArray,then allocate new left-side DoubleSubscriptedArray
        if(size != right.size)
        {
            delete [] ptr;//release space
            size=right.size;//resize this object
            line=right.line;
            row=right.row;
            ptr = new int[size];//creat space for DoubleSubscriptedArray copy
        }
        for(size_t i=0 ; i<size ; ++i)
            ptr[i]=right.ptr[i];
    }
    return *this;
}

//determine if two DoubleSubscriptedArrays are equal and
//return ture ,otherwise return false
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)const
{
    if(size !=right.size)
        return false;
    for(size_t i=0;i<size;++i)
    {
        if(ptr[i]!=right.ptr[i])
            return false;
    }
    return true;
}
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &right)const
{
    return !(*this==right);
}
int &DoubleSubscriptedArray::operator()(int Line,int Row)
{
    if((Line>line||Line<0)||(Row>row||Row<0))
        throw out_of_range("line and row out of range");
    return ptr[Line*row+Row];
}
int DoubleSubscriptedArray::operator()(int Line,int Row)const
{
    if((Line>line||Line<0)||(Row>row||Row<0))
        throw out_of_range("line and row out of range");
    return ptr[Line*row+Row];
}
//overloaded input operator for class DoubleSubscriptedArray
istream &operator>>(istream &input,DoubleSubscriptedArray &a)
{
    for(size_t i=0;i<a.size;++i)
        input>>a.ptr[i];
    return input;
}
//overloaded output operator for class DoubleSubscriptedArray
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)
{
    for(size_t i=0;i<a.size;++i)
    {
        output<<setw(12)<<a.ptr[i];
        if((i+1)%a.line==0)
            output<<endl;
    }
    if(a.size % 4 != 0)
        output << endl;
    return output;
}

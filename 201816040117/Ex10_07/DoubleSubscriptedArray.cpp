#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;
DoubleSubscriptedArray::DoubleSubscriptedArray(int r,int c)
:row(r>0?r:throw invalid_argument("row size must be greater than 0")),
column(c>0?c:throw invalid_argument("column size must be greater than 0")),
ptr(new int[row*column])
{
    for(size_t i=0;i<row;++i)
        for(size_t j=0;j<column;++j)
        ptr[column*i+j]=0;
}//end function construction
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray & DoubleSubscriptedArrayToCopy)
:row(DoubleSubscriptedArrayToCopy.getRowSize()),
column(DoubleSubscriptedArrayToCopy.getColumnSize()),
ptr(new int[row*column])
{
    for(size_t i=0;i<row;++i)
        for(size_t j=0;j<column;++j)
        ptr[column*i+j]=DoubleSubscriptedArrayToCopy.ptr[DoubleSubscriptedArrayToCopy.getColumnSize()*i+j];
}//end function copy constructor
size_t DoubleSubscriptedArray::getRowSize()const
{
    return row;
}
size_t DoubleSubscriptedArray::getColumnSize()const
{
    return column;
}
int & DoubleSubscriptedArray::operator()(unsigned int r,unsigned int c)
{
    if(r<0||c<0||r>=row||c>=column)
        throw out_of_range("out of range");
    return ptr[column*r+c];
}//end function operator ()
int DoubleSubscriptedArray::operator()(unsigned int r,unsigned int c)const
{
    if(r<0||c<0||r>=row||c>=column)
        throw out_of_range("out of range");
    return ptr[column*r+c];
}//end function operator ()
 bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray & right)const
 {
     if(row!=right.getRowSize()||column!=right.getColumnSize())
        return false;
     for(size_t i=0;i<row;++i)
        for(size_t j=0;j<column;++j)
            if(ptr[column*i+j]!=right.ptr[right.getColumnSize()*i+j])
               return false;
    return true;
 }//end function operator ==
 const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
 {
     if(right!=*this)
     {
     if(row!=right.getRowSize()&&column!=right.getColumnSize())
     {
         delete [] ptr;
         row=right.getRowSize();
         column=right.getColumnSize();
     }
     for(size_t i=0;i<row;++i)
        for(size_t j=0;j<column;++j)
        ptr[column*i+j]=right.ptr[right.getColumnSize()*i+j];
     }
     return *this;
 }//end function operator =
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &d)
{
     for(size_t i=0;i<d.getRowSize();++i)
        {
            for(size_t j=0;j<d.getColumnSize();++j)
                output<<setw(10)<<d.ptr[d.getColumnSize()*i+j];
            output<<endl;
        }
        return output;
}//end function operator <<
istream &operator>>(istream &input,DoubleSubscriptedArray &n)
{
    for(size_t i=0;i<n.getRowSize();++i)
        for(size_t j=0;j<n.getColumnSize();++j)
            input>>n.ptr[n.getColumnSize()*i+j];
    return input;
}//end function operator >>

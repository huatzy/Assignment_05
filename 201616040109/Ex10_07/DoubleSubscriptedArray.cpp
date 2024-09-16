#include<iostream>
#include<iomanip>
#include<stdexcept>

#include"DoubleSubscriptedArray.h"
using namespace std;
DoubleSubscriptedArray::DoubleSubscriptedArray(int row,int column)
    :rowSize(row>0?row:
             throw invalid_argument("DoubleSubscriptedArray rowSize must be greater than 0")),
     columnSize(column>0?column:
                throw invalid_argument("DoubleSubscriptedArray columnSize must be greater than 0")),
     ptr(new int*[rowSize] )//[columnSize]
{
    for(size_t i=0;i<rowSize;i++)
    {
        ptr[i]=new int[columnSize];
        for(size_t j=0;j<columnSize;j++)
        {
            ptr[i][j]=0;
        }
    }
}//end DoubleSubscriptedArray default constructor
//copy constructor for class DoubleSubscriptedArray
//must receive a reference to an DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &arrayToCopy)
    :rowSize(arrayToCopy.rowSize),
     columnSize(arrayToCopy.columnSize),
     ptr(new int*[rowSize])//[columnSize]
{
    for(size_t i=0;i<rowSize;i++)
         {
             ptr[i]=new int[columnSize];
             for(size_t j=0;j<columnSize;++j)
             {
                 ptr[i][j]=arrayToCopy.ptr[i][j];
             }
         }
}
//destructor for class Array
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}
//return number of row elements in DoubleSubscriptedArray
size_t DoubleSubscriptedArray::getRowSize()const
{
    return rowSize;
}
//return number of column elements in DoubleSubscriptedArray
size_t DoubleSubscriptedArray::getColumnSize()const
{
    return columnSize;
}
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(&right != this)
    {
        if(rowSize!=right.rowSize||columnSize!=right.columnSize)
        {
            delete [] ptr;
            rowSize=right.rowSize;
            columnSize=right.columnSize;
            ptr=new int *[rowSize];
            for(size_t i=0;i<rowSize;i++)
                ptr[i]=new int [columnSize];
        }
    for(size_t i=0;i<right.rowSize;i++)
    {
        for(size_t j=0;j<right.columnSize;j++)
        {
            ptr[i][j]=right.ptr[i][j];
        }
    }
    }
    return *this;
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)const
{
    if(rowSize!=right.rowSize||columnSize!=right.columnSize)
        return false;
     for(size_t i=0;i<right.rowSize;++i)
    {
        for(size_t j=0;j<right.columnSize;++j)
        {
            if(ptr[i][j]!=right.ptr[i][j])
                return false;
        }
    }
    return true;
}
int &DoubleSubscriptedArray::operator()(int rowSubscript,int columnSubcript)
{
    if(rowSubscript<0||columnSubcript<0||rowSubscript>rowSize||columnSubcript>columnSize)
        throw out_of_range("Subscript out of range");
    return ptr[rowSubscript][columnSubcript];
}
int &DoubleSubscriptedArray::operator()(int rowSubscript,int columnSubcript)const
{
    if(rowSubscript<0||rowSubscript>rowSize||columnSubcript<0||columnSubcript>columnSize)
        throw out_of_range("Subscript out of range");
    return ptr[rowSubscript][columnSubcript];
}
istream &operator>>(istream &input,DoubleSubscriptedArray &d)
{
    for(size_t i=0;i<d.rowSize;++i)
    {
        for(size_t j=0;j<d.columnSize;++j)
        {
            input>>d.ptr[i][j];
        }
    }
    return input;
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &d)
{
     for(size_t i=0;i<d.rowSize;++i)
    {
        for(size_t j=0;j<d.columnSize;++j)
        {
            output<<setw(12)<<d.ptr[i][j];
        }
        output<<endl;
    }
    return output;
}

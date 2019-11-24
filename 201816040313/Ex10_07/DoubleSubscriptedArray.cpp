#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int row,int column)//constructor
 :rows(row>0?row:
       throw invalid_argument("Array rows must be greater than 0")),
   columns(column>0?column:
           throw invalid_argument("Array columns must be greater than 0")),
        chessBorard(new int [rows*columns])
{
    for(size_t i=0;i<rows;++i)
            for(size_t j=0;j<columns;++j)
    {
        chessBorard[i*columns+j]=0;
    }
}
DoubleSubscriptedArray::~DoubleSubscriptedArray()//destructor
{
    delete [] chessBorard;
}
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &a)//copy constructor
 :rows(a.rows),
 columns(a.columns),
 chessBorard(new int [rows*columns])
{

    for(size_t i=0;i<rows;++i)
            for(size_t j=0;j<columns;++j)
    {
        chessBorard[i*columns+j]=a.chessBorard[i*columns+j];
    }
}

int &DoubleSubscriptedArray::operator()(int subscript1 ,int subscript2)//overload ()
{
    if(subscript1<0||subscript1>rows)
        throw out_of_range("Subscript1 out of range");
    if(subscript2<0||subscript2>columns)
        throw out_of_range("Subscript2 out of range");
    return chessBorard[subscript1*columns+subscript2];

}
int &DoubleSubscriptedArray::operator()(int subscript1 ,int subscript2)const//overload ()
{

    if(subscript1<0||subscript1>rows)
        throw out_of_range("Subscript1 out of range");
    if(subscript2<0||subscript2>columns)
        throw out_of_range("Subscript2 out of range");
    return chessBorard[subscript1*columns+subscript2];
}
int DoubleSubscriptedArray::getrows()const//return rows
{
    return rows;
}
int DoubleSubscriptedArray::getcolumns()const//return columns
{
    return columns;
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)//overload output
{
     for(size_t i=0;i<a.rows;++i)
            for(size_t j=0;j<a.columns;++j)
            {
                output<<setw(6)<<a.chessBorard[i*a.columns+j];
                if((j+1)==a.columns)
                    output<<endl;
            }

    return output;
}
istream &operator>>(istream &input,DoubleSubscriptedArray &a)//overload input
{
     for(size_t i=0;i<a.rows;++i)
            for(size_t j=0;j<a.columns;++j)
            {
                input>>a.chessBorard[i*a.columns+j];
            }

    return input;
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)const//overload ==
{
    if(right.rows!=rows||right.columns!=columns)
    {
        return false;
    }
    for(size_t i=0;i<right.rows;++i)
        for(size_t j=0;j<right.columns;++j)
    {
        if(right.chessBorard[i*right.columns+j]!=chessBorard[i*columns+j])
        {
            return false;
        }
    }
    return true;
}
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &right)const//overload !=
{
    if(right.rows!=rows||right.columns!=columns)
    {
        return true;
    }
    for(size_t i=0;i<right.rows;++i)
        for(size_t j=0;j<right.columns;++j)
    {
        if(right.chessBorard[i*right.columns+j]!=chessBorard[i*columns+j])
        {
            return true;
        }
    }
    return false;
}
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)//overload =
{
    if(&right!=this)
    {
        if(!(rows==right.rows&&columns==right.columns))
        {
            delete [] chessBorard;
            rows=right.rows;
            columns=right.columns;
            chessBorard=new int [rows*columns];

        }
        for(size_t i=0;i<rows;++i)
            for(size_t j=0;j<columns;++j)
        {
            chessBorard[i*columns+j]=right.chessBorard[i*columns+j];
        }

    }
    return *this;
}

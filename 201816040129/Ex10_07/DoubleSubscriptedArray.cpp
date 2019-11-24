#include<iostream>
#include<iomanip>
#include<stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;
DoubleSubscriptedArray::DoubleSubscriptedArray(int row,int column)
{
   rows=row;//assign the value to rows
   columns=column;//assign the value to columns
   ptr=new int[rows*columns];
}
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &right)//看的书上的，这个不大懂
{
    rows=right.rows;//assign the data
    columns=right.columns;//assign the data
    ptr=new int[rows*columns];
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<rows;++j)
        {
           ptr[i*columns+j]=right.ptr[i*columns+j];//assign
        }
    }
}

bool DoubleSubscriptedArray ::operator==(DoubleSubscriptedArray &right)//这个看书，有问题
{
    if(&right!=this)//if not equal
    {
       for(int i=0;i<rows;++i)
       {
          for(int j=0;j<columns;++j)//routine
          {
             if(ptr[i*columns+j]!=right.ptr[i*columns+j]);
          }
             return false;
       }
    }
    else
       return true;
}
int &DoubleSubscriptedArray::operator()(int row,int column)
{
    return ptr[row*columns+column];//retrun the data
}
int &DoubleSubscriptedArray::operator()(int row,int column)const
{
    return ptr[row*columns+column];//return the data
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)
{
     for(int i=0;i<a.rows;++i)
     {
         for(int j=0;j<a.columns;++j)
         {
            output<<a.ptr[i*a.columns+j]<<" ";//output the data
         }
         output<<endl;
     }
    return output;//return the data
}
istream &operator>>(istream &input,DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.rows;++i)
    {
        for(int j=0;j<a.columns;j++)
        {
            input >> a.ptr[i*a.columns+j];//input the data
        }
    }
    return input;//return the data
}
 bool DoubleSubscriptedArray ::operator!=( DoubleSubscriptedArray &right)
{
    return !(*this==right);//在网上看的
}
int DoubleSubscriptedArray ::getRows()const
{
    return rows;//return the data
}
int DoubleSubscriptedArray ::getColumns()const
{
    return columns;//return the data
}

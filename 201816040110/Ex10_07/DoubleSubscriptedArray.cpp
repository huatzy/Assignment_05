#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
#include "DoubleSubscriptedArray.h"
DoubleSubscriptedArray::DoubleSubscriptedArray( int row, int column)
:rows(row),columns(column),size1(row),size2(column)
{
    ptr= new int *[row];
    int i,j;
    for(i=0;i<row;i++)
    {
        ptr[i] = new int[column];
    }
}
int DoubleSubscriptedArray::getsize1()
{
    return size1;
}
int DoubleSubscriptedArray::getsize2()
{
    return size2;
}
bool DoubleSubscriptedArray::operator==(  DoubleSubscriptedArray &a )
{
    int p=1,i,j;
    if(rows!=a.rows||columns!=a.columns)
    {
        p=0;
    }
    else
    {
        for(i=0;i<rows;i++)
        {
            for (j=0;j<columns;j++)
            {
                if(ptr[i][j]!=a.ptr[i][j])
                {
                    p=0;
                    break;
                }
            }
        }
    }
    if(p==1)
    {
        return true;
    }
    else if(p==0)
    {
        return false;
    }
}
void DoubleSubscriptedArray::operator=( DoubleSubscriptedArray &a )
{
    rows=a.rows;
    columns=a.columns;
    int i, j;
    for(i=0;i<rows;i++)
        {
            for (j=0;j<columns;j++)
            {
                ptr[i][j]=a.ptr[i][j];
            }
        }
}
bool DoubleSubscriptedArray::operator!=(  DoubleSubscriptedArray &a )
{
    int p=1,i,j;
    if(rows!=a.rows||columns!=a.columns)
    {
        p=0;
    }
    else
    {
        for(i=0;i<rows;i++)
        {
            for (j=0;j<columns;j++)
            {
                if(ptr[i][j]!=a.ptr[i][j])
                {
                    p=0;
                    break;
                }
            }
        }
    }
    if(p==0)
    {
        return true;
    }
    else if(p==1)
    {
        return false;
    }
}
int  DoubleSubscriptedArray::operator(  )( int Rows, int Columns )
{
    int a;
    a=ptr[Rows][Columns];
    return a;
}
ostream & operator<<( ostream &output, const DoubleSubscriptedArray &a )
{
   int i,j;
   for (i=0;i<a.size1;i++)
   {
       for(j=0;j<a.size2;j++)
       {
           output<<a.ptr[i][j]<<" ";
       }
       output<<endl;
   }
   return output; // enables concatenation
} // end function operator<<
istream &operator>>(istream &input ,DoubleSubscriptedArray &a)
{
    int i,j;
   for (i=0;i<a.size1;i++)
   {
       for(j=0;j<a.size2;j++)
       {
           input>>a.ptr[i][j];
       }
   }
   return input;
}









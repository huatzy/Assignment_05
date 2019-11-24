#include <iostream>
using namespace std;
#include "DoubleSubscriptedArray.h"
#include <iomanip>
#include <stdexcept>

DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)
{            
	setrows(a);
	setcolumns(b);
}
void DoubleSubscriptedArray::setrows(int a)
{
	if(a>0)
	{
		row=a ;
	}
	else
	{
		throw invalid_argument("row must greater than 0");
	}
}
int DoubleSubscriptedArray::getrows()
{
	return row;
}
void DoubleSubscriptedArray::setcolumns(int b)
{
	if(b>0)
	{
		column=b ;
	}
	else
	{
		throw invalid_argument("column must greater than 0");
	}	
}
int DoubleSubscriptedArray::getcolumns()
{
	return column; 
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &a) const
{
	if(row!=a.row||column!=a.column)
		return false;
	else
	{
		for(int i=0;i<a.row;i++)
		{
			for(int j=0;j<a.column;j++)
			{
				if(p[i*j]!=a.p[i*j])
				{
					return false;
				}
				else
					return true;
			}
		}
	}
}
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &a) const
{
	return !(*this==a);
}
DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &a) const
{
       if(a!=*this) 
     { 
         if(row!=a.row||column!=a.column) 
         { 
             delete[]p; 
             row=a.row; 
             column=a.column; 
             p=new int[row*column]; 
         } 
         for(int i=0;i<row;++i) 
            for(int j=0;j<column;++j) 
            p[i*column+j]=right.ptr[i*column+j]; 
     } 
     return *this;
}
int DoubleSubscriptedArray::operator ()(int i,int j)
{
	if(i>0&&j>0)
	{
		return p[i*j];
	}
	else
	{
		throw invalid_argument("error");
	}
}
int DoubleSubscriptedArray::operator ()(int i,int j) const
{
	if(i>0&&j>0)
	{
		return p[i*j];
	}
	else
	{
		throw invalid_argument("error");
	}
}
istream &operator>>( istream & input, DoubleSubscriptedArray & a)
{
	for(int i=0;i<a.row;i++)
	{
		for(int j=0;j<a.column;j++)
		{
			input>>a.p[i*j];
		}	
	}
	return input;	
} 
ostream &operator<<( ostream & output, const DoubleSubscriptedArray & a)
{
	for(int i=0;i<a.row;i++)
	{
		for(int j=0;j<a.column;j++)
		{
			output<<a.p[i*j];
		}
		cout<< endl;	
	}
	return output;		
} 


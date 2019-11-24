//DoubleSubscriptedArray.cpp
#include "DoubleSubscriptedArray.h"
#include <iostream>
#include <iomanip>
#include <string>
std::ostream &operator<<(std::ostream & output,const DoubleSubscriptedArray & object)//overload the << function
{
    for(int i=0;i<object.row;i++)
    {
        for(int j=0;j<object.column;j++)
        {
            output<<std::setw(2)<<object.ptr[i*object.column+j]<<" ";
        }
        output<<std::endl;
    }
    return output;

}
std::istream &operator>>(std::istream & input,DoubleSubscriptedArray & object)//overload the >> function
{
    for(int i=0;i<object.row*object.column;i++)
    {
        input>>object.ptr[i];
        input.ignore();
    }
    return input;

}
DoubleSubscriptedArray::DoubleSubscriptedArray(const int &rowParameter,const int & columnParameter)//constructor with two parameter
{
    ptr=new int[rowParameter*columnParameter]{};//allocate the array space
    for(int i=0;i<rowParameter*columnParameter;i++)
        ptr[i]=i+1;
    row=rowParameter;//set the row
    column=columnParameter;//set the column
}
int & DoubleSubscriptedArray::operator()(const int &rowParameter,const int &columnParameter)
{
    //int &a;

    if(rowParameter>=0 && rowParameter<row && columnParameter>=0 && columnParameter<column)
    {
        return ptr[(rowParameter-1)*column+columnParameter];
    }

    return ptr[0];
}
const int & DoubleSubscriptedArray::operator()(const int &rowParameter,const int &columnParameter)const//overload the () function
{
    if(rowParameter>=0 && rowParameter<row && columnParameter>=0 && columnParameter<column)
    {
        return ptr[(rowParameter-1)*column+columnParameter];
    }
    return ptr[0];
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &object)//overload the == function
{
    for(int i=0;i<row*column;i++)//compare the element one by one
    {
            if(ptr[i]!=object.ptr[i])
                return false;
    }
    return true;
}
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &object)//overload the != function
{
    if((*this)==object)//use the == overload function
        return false;
    return true;
}
DoubleSubscriptedArray & DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray & object)//assign the object by another object
{
    delete [] ptr;//delete the allocated array space
    row=object.row;
    column=object.column;
    ptr=new int [row*column]{};//allocate the space  to array
    for(int i=0;i<row*column;i++)
        ptr[i]=object.ptr[i];
    return *this;

}
std::string DoubleSubscriptedArray::toString(const int & i)const//convert the number into string
{
    if(i==0)
        return "false";
    return "true";
}

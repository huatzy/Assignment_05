#include<iostream>
#include<iomanip>
#include"DoubleSubscriptedArray.h"

using namespace std;

//default constructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)
   :size(a*b),
    ptr(new int [size])

{
    int i;
    for(i=0;i<size;++i)
          ptr[i]=0;//set pointer-based DoubleSubscriptedArray element
}//end
//copy constructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &right)
    :size(right.size),
    ptr( new int [size])
{
    for(int i;i<size;++i)
        ptr[i]=right.ptr[i];//copy into object
}//end copy function
//return size
int DoubleSubscriptedArray::getsize() const
{
    return size;
}//end

//overload assignment operator
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(&right!=this)//avoid self-assignment
    {
        if(size!=right.size)
        {
            delete [] ptr;//release space
            size=right.size;//resize this object
            ptr=new int[size];//create space for DoubleSubscriptedArray copy
        }
        for(int i=0;i<size;++i)
            ptr[i]=right.ptr[i];
    }
    return *this;
}//end

//judge if two DoubleSubscriptedArray equal or not
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)
{
    if(size!=right.size)
        return false;
    else
    {
        for(int i=0;i<size;++i)
           if(ptr[i]!=right.ptr[i])
              return false;
    }
    return true;
}//end

bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &right)
{
    return !(*this==right);//calls operator==
}//end
 //reference return creates a modifiable lvalue
 int &DoubleSubscriptedArray::operator()(int a,int b)
 {
     int s=a*b;
     //check for a*b out-of-range error
     if(s<0||s>size)
        throw out_of_range("Subscript out of range");

     return ptr[s];//reference return
 }//end

 //const reference return creates  an rvalue
 int DoubleSubscriptedArray::operator()(int a,int b) const
 {
     int s=a*b;
     //check for subscript out-of range error
     if(s<0||s>size)
        throw out_of_range("Subscript out of range");

     return ptr[s];//returns copy of this element
 } //end

 //overload input operator
 istream &operator>>(istream &input,DoubleSubscriptedArray &a)
 {
     for(int i=0;i<a.size;++i)
        input>>a.ptr[i];

     return input;
 }//end
 //overload output operator
 ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)
 {
     for(int i=0;i<a.size;++i)
     {
         output<<setw(12)<<a.ptr[i];
         if((i+1)%4==0)
            output<<endl;
     }
     if(a.size%4!=0)
        output<<endl;

     return output;
 }//end

#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;
// default constructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray( int arraySize )
      : size(arraySize > 0 ? arraySize :
             throw invalid_argument ("DoubleSubscriptedArray size must be greater than 0")),
        ptr ( new int [size])
{
    for (size_t i=0; i<size; ++i)
        ptr[i]=0;
}//end DoubleSubscriptedArray default constructor

//copy constructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &arrayToCopy)
      :size(arrayToCopy.size),
        ptr( new int[ size])
 {
     for (size_t i=0; i<size; ++i)
        ptr[i]=arrayToCopy.ptr[i];
 }

 //destructor for class DoubleSubscriptedArray
 DoubleSubscriptedArray::~DoubleSubscriptedArray()
 {
     delete[]ptr;
 }

 size_t DoubleSubscriptedArray::getSize() const
 {
     return size ;
 }

 //overloaded assignment operator;
 const DoubleSubscriptedArray &DoubleSubscriptedArray ::operator=( const DoubleSubscriptedArray &right)
 {
     if (&right != this )
     {
         if(size!= right.size)
         {
             delete []ptr;
             size = right.size;
             ptr=new int[size];
         }
         for(size_t i=0; i < size; ++i)
            ptr[i]=right.ptr[i];
     }
     return *this;
 }

 //determine if two DoubleSubscriptedArrays are equal
 bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
 {
     if ( size !=right.size)
        return false;
     for( size_t i=0;i<size; ++i)
        if( ptr[i]!=right.ptr[i])
           return false;
     return true;
 }


 int &DoubleSubscriptedArray::operator()(int a, int b)
 {
     rc= a * b - 1;
     return ptr[ rc ];
 }//end function operator()

 //overload input operator
 istream &operator>>(istream &input, DoubleSubscriptedArray &a)
 {
     for (size_t i=0; i<a.size; ++i)
        input >>a.ptr[i];

     return input;
 }

//overload output operator
 ostream &operator<<(ostream &output, const DoubleSubscriptedArray &a )
 {
     for (size_t i=0; i<a.size; ++i)
     {
         output << setw(15)<< a.ptr[i];
         if ((i+1)%5 == 0)
            output << endl;
     }
        if (a.size%5 !=0 )
            output << endl;

         return output;
 }

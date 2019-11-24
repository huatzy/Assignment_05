#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;

//看书上的代码

DoubleSubscriptedArray::DoubleSubscriptedArray(int row1,int col1) //constructor for DoubleSubscriptedArray
    {
        if(row1>=0&&col1>=0)
            row = row1;
            col = col1;
    }
 DoubleSubscriptedArray::~DoubleSubscriptedArray() //destructor for DoubleSubscriptedArray
 {
     delete [] ptr;
 }

 size_t DoubleSubscriptedArray::getSize()const
 {
     return size;
 }

 const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right) //define function for operator=
 {
     if(&right != this)
     {
         if(size != right.size)
         {
             delete [] ptr;
             size = right.size;
             ptr = new int[size];
         }
         for(size_t i = 0;i < size;++i)
            ptr[i] = right.ptr[i];
     }
 }

 bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)const //define function for operator==
 {
     if(size != right.size)
        return false;
     for(size_t i = 0;i < size;++i)
        if(ptr[i]!=right.ptr[i])
            return false;
     return true;
 }

 int DoubleSubscriptedArray::operator()(int subscript)const //define function for operator()
 {
     if(subscript < 0 || subscript >= size)
        throw out_of_range("Subscript out of range");
     return ptr[subscript];
 }

 istream &operator>>(istream &input,DoubleSubscriptedArray &a) //define the function for operator>>
 {
     for(size_t i = 0;i < a.size;++i)
        input >> a.ptr[i];
     return input;
 }

 ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a) //define the function for operator<<
 {
     for(size_t i = 0;i < a.size;++i)
     {
         output << setw(12) << a.ptr[i];
         if((i + 1) % 4 == 0)
            output << endl;
     }
     if(a.size % 4 != 0)
        output << endl;
     return output;
 }

 bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &right) //define the function for operator!=
 {
     return !(*this == right);
 }


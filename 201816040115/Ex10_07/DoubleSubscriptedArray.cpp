//DoubleSubscriptedArray.cpp

#include"DoubleSubscriptedArray.h"
#include<stdexcept>
#include<iomanip>

//default constructor for class DoubleSubscriptedArray (default rows is 2, columns is 2)
DoubleSubscriptedArray::DoubleSubscriptedArray(int row,int column)
    :rows(row>0 ? row : throw invalid_argument("DoubleSubscriptedArray rows must be greater than 0")),
    columns(column>0 ? column : throw invalid_argument("DoubleSubscriptedArray columns must be greater than 0")),
    size(rows*columns),
    ptr(new int[size])
{
    for(int i = 0;i<size;++i)
        ptr[i]=0;   //set pointer-based DoubleSubscriptedArray element
}   //end DoubleSubscriptedArray default constructor

//copy constructor for class DoubleSubscriptedArray;
//must receive a reference to a DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &doubleArrayToCopy)
    :rows(doubleArrayToCopy.rows),
    columns(doubleArrayToCopy.columns),
    size(doubleArrayToCopy.size),
    ptr(new int[size])
{
    for(int i=0;i<size;++i)
        ptr[i]=doubleArrayToCopy.ptr[i];    //copy into object
}   //end DoubleSubscriptedArray copy constructor

//destructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete []ptr;   //release pointer-based DoubleSubscriptedArray space
}   //end destructor

//return number of elements of DoubleSubscriptedArray
int DoubleSubscriptedArray::getSize() const
{
    return size;    //number of elements in DoubleSubscriptedArray
}   //end function getSize

//overloaded assignment operator ;
//const return avoids : (a1 = a2) = a3
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(&right!=this)    //avoid self-assignment
    {
        //for DoubleSubscriptedArrays of different sizes, deallocate original
        //left-side  DoubleSubscriptedArray, then allocate new left-side DoubleSubscriptedArray
        if(rows!=right.rows||columns!=right.columns)
        {
            delete []ptr;   //release space
            rows=right.rows;    //reset object's rows
            columns=right.columns;  //reset object's columns
            size = right.size;  //reset object's size
            ptr=new int[size];  //create space for DoubleSubscriptedArray copy

            for(int i=0;i<size;++i)
            {
                ptr[i]=right.ptr[i]; //copy DoubleSubscriptedArray into object
            }
        }
    }
    return *this;   //enables x = y = z,for example
}   //end function operator=

//determine if two DoubleSubscriptedArray are equal and
//return true, otherwise return false
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
    if(rows!=right.rows||columns!=right.columns)
        return false;   //DoubleSubscriptedArray of different number of rows or columns

        for(int i=0;i<size;++i)
        {
            if(ptr[i]!=right.ptr[i])
                return false;   //DoubleSubscriptedArrays contents are not equal
        }

        return true;    //DoubleSubscriptedArrays are equal

}   //end function operator==

//overloaded subscript operator for  non-const DoubleSubscriptedArrays;
//reference return creates a modifiable lvalue
int &DoubleSubscriptedArray::operator()(int row,int column)
{
    //check for subscript out-of-range error
    if((row<1||row>rows)||(column<1||column>columns))
        throw invalid_argument("Subscript out of range");

        return ptr[(row-1)*columns+column-1];  //reference return
}   //end function operator operator()

//overload subscript operator for const DoubleSubscriptedArray
//const reference return creates an rvalue
int DoubleSubscriptedArray::operator()(int row,int column) const
{
    //check for subscript out-of-range error
    if((row<1||row>rows)||(column<1||column>columns))
        throw invalid_argument("Subscript out of range");

        return ptr[(row-1)*columns+column-1]; //returns copy of this element
}   //end function operator operator()

//overloaded input operator for class DoubleSubscriptedArray;
//inputs values for entire DoubleSubscriptedArray
istream &operator>>(istream &input,DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.size;++i)
        input >> a.ptr[i];

    return input;   //enables cin >> x >> y;
}   //end function

//overloaded output operator for class DoubleSubscriptedArray
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)
{
    //output private ptr-based DoubleSubscriptedArray
    for(int i=1;i<=a.rows;++i)
    {
        for(int j=1;j<=a.columns;++j)
        {
            output << setw(12) << a(i,j);   //called function operator()
        }
         output << endl;
    }

    return output;  //enable cout << x << y;
}

#include <iostream>
#include <array>
#include <iomanip>
#include "DoubleSubscriptedArray.h"
using namespace std;
//constructor function
DoubleSubscriptedArray::DoubleSubscriptedArray( double ro , double co )
{
    while( ro>0&&co>0 )//judge rows and columns both >0
    {
        rows = ro;
        columns = co;
        size = rows*columns;
        ptr = new int [ size ];
    }
    while(ro<=0||co<=0)
        {
            throw invalid_argument("rows and columns both must > 0");
        }

    int i = 0;
    while( i<size )
    {
        i++;
        ptr[i]=0;//set pointer-based array element
    }
}//end constructor function
//copy constructor
DoubleSubscriptedArray::DoubleSubscriptedArray( const DoubleSubscriptedArray &rarray )
    : size( rarray.size ),
     ptr( new int [size] ),
     rows( rarray.rows ),
     columns( rarray.columns )//initialize the
{
     int i = 0;
    while( i<size )
    {
        i++;
       ptr[i]=rarray.ptr[i];
    }

}//end function
//destructor function
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
    cout<<"destructor has been called"<<endl;
}//end function
//function to return size
size_t DoubleSubscriptedArray::getSize() const
{
    return size;
}//end function
//overload assignment operator
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray &rarray )
{
    while( *this!=rarray )//avoid self-assignment
    {
        rows = rarray.rows;
        columns = rarray.columns;
        while( size!=rarray.size )
        {
            delete [] ptr;//release space
            size = rarray.size;//resize this object
            ptr = new int [size];//create space for array copy
        }
        int i = 0;
    while( i<size )
    {
        i++;
        ptr[i]=rarray.ptr[i];
    }

    return *this;
}//end function operator
//determine if two DoubleSubscriptedArrays are equal
bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &rarray )const
{
    while( rows!=rarray.rows||columns!=rarray.columns )
       {
          return false;//if rows or columns is different,return false
       }
    for( int i=0;i<size;++i )
        if( ptr[i]!=rarray.ptr[i] )
            return false;//DoubleSubscriptedArray are not equal
    return true;
}//end function
//overload operator() to get non-const appointed object
int &DoubleSubscriptedArray::operator()(int r,int c)
{
    while( r<0||r>rows||c<0||c>columns )
        {
            throw invalid_argument("Subscript out of range");//judge range
        }
    return ptr[(r-1)*rows+c-1];//return
}//end function
//overload operator() to get const appointed object
int DoubleSubscriptedArray::operator()( int r,int c )const
{
    while( r<0||r>rows||c<0||c>columns )
        {
            throw invalid_argument("Subscript out of range");//judge range
        }

    return ptr[(r-1)*rows+c-1];//return
}//end function
//overload input operator for class DoubleSubscriptedArray
istream &operator>>( istream &input, const DoubleSubscriptedArray &rarray )
{
    int i=0;
    while( i<rarray.size)
    {
        i++;
        input >> rarray.ptr[i];
    }

    return input;//enable cin>>x>>y;
}//end function
//overload output operator for class DoubleSubscriptedArray
ostream &operator<<( ostream &output, const DoubleSubscriptedArray &rarray )
{
    int i=0;
   while(i<rarray.size )
    {
        i++;
        output <<setw(6)<<rarray.ptr[i];
        if((i+1)%rarray.columns==0)//number of columns per row of output
            output<<endl;
    }
    return output;//enables cout<<x<<y;
}

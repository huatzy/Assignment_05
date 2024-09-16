//class DoubleSubscriptedArray member function define
#include "DoubleSubscriptedArray.h"
#include <iostream>
#include <iomanip>
using namespace std;

//DoubleSubscriptedArray constructor
DoubleSubscriptedArray::DoubleSubscriptedArray(int aa,int bb)
{
    a=aa;//row
    b=bb;//column
    doublee=new int[aa*bb];
    for(int i=0;i<aa*bb;i++)
    {
        *(doublee+i)=i;
    }
}//end DoubleSubscriptedArray constructor
//function equality
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)const
{
    if( size != right.size )
        return false;//arrays of different number of elements
    for(size_t i=0;i<size;++i)
        if( doublee[i]!=right.doublee[i])
            return false;//array contents are not equal

    return true;//array are equal
}//end function operator ==
size_t DoubleSubscriptedArray::getSize()const
{
    return a*b;
}//end function
//overloaded assignment operator
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if( &right !=this)
    {
        if(size !=right.size)
        {
            delete [] doublee;//release space
            size =right.size;//resize this object
            doublee = new int [size];//create space for array copy
        }//end inner if
        for( size_t i=0;i<size;++i)
            doublee[i]=right.doublee[i];//copy array into object
    }//end outer if
    return *this;
} //end function operator=
int& DoubleSubscriptedArray::operator()(int aa,int bb)
{
    if(aa<a&&aa>0&&bb<b&&bb>0)
        return *(doublee+aa*b+bb);
    else
        cout<<"the number is out of range."<<endl;
}//end function
istream &operator>>( istream &input,DoubleSubscriptedArray &x)
{
    for(size_t i=0;i<x.size;++i)
        input>>x.doublee[i];
    return input;//enables cin >>a>>b;
}//end function
ostream &operator<<( ostream &output,const DoubleSubscriptedArray &x)
{
    for( size_t i=0;i<x.size;++i)
    {
        output<<setw(12)<<x.doublee[i];
        if((i+1)%4==0)//4 numbers per row of output
            output<<endl;
    }//end for
    if(x.size%4!=0)//end last line of output
        output<<endl;
    return output;//enable cout<< a<<b
}


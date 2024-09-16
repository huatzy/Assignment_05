#include <iostream>
#include "DoubleSubscriptedArray.h"
#include <iomanip>
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int m, int n )
{

    M=m;
    N=n;
    A=new int[m*n];

}

int* DoubleSubscriptedArray::getA()
{
    return A;
}

int DoubleSubscriptedArray::getM()
{
    return M;
}

int DoubleSubscriptedArray::getN()
{
    return N;
}

int& DoubleSubscriptedArray::operator()(int m, int n)
{
    return*(A+m*N+n);
}

const int& DoubleSubscriptedArray::operator()(size_t m, size_t n)
{
    return*(A+m*N+n);
}
void DoubleSubscriptedArray::operator=(DoubleSubscriptedArray &t)
{
    if(M==t.M&&N==t.N)
    {


        for(int i=0;i<t.M*t.N;++i)
    {
        *(getA()+i)=*(t.getA()+i);
    }
    }
}



bool DoubleSubscriptedArray:: operator==(DoubleSubscriptedArray &t)
{
    if(M !=t.M||N!=t.N)
        return false;
        else
            for(int i=0;i<t.M*t.N;++i)
        {
            if(*(t.getA()+i)!=*(getA()+i))
                return false;

        }
        return true;
}

bool DoubleSubscriptedArray:: operator!=(DoubleSubscriptedArray &t)
{
    if(*this==t)
        return false;
    else
        return true;
}



ostream& operator<<(ostream &output, DoubleSubscriptedArray &t)
{
    for(int i=0; i<t.M*t.N;++i )
    {


        cout<<setfill(' ')<<setw(2)<<*(t.getA()+i)<<" ";
        if((i+1)%t.N==0)
        cout<<endl;
    }
}

istream& operator>>(istream &input, DoubleSubscriptedArray &t)
{
    for(int i=0; i<t.M*t.N;++i )
    {


        cin>>*(t.getA()+i);

    }
}


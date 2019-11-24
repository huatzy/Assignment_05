#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    //a b are DoubleSubscriptedArray
    DoubleSubscriptedArray a(2,4);
    DoubleSubscriptedArray b(3,2);
    cin>>a>>b;//input a and b
    cout<<"a.size:"<<a.getSize()<<"\n"<<"a:\n"<<a<<"b:\n"<<b;//print a.size, a and b

    DoubleSubscriptedArray c( a );//test copy function
    DoubleSubscriptedArray d(1,1);
    d=b;//test operator=
    cout<<"c:\n"<<c<<"d:\n"<<d<<endl;//print c and d
    cout<<"a[1][1]: "<<a(1,1)<<endl;//print the a[1][1]
    a(1,1)=55;//assign 55 to a[1][1]
    cout<<"a:\n"<<a;//print a
    return 0;
}

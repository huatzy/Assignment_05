#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;
int main()
{
    DoubleSubscriptedArray m(3,2);
    DoubleSubscriptedArray n(2,4);
    cin>>m>>n;
    cout<<"m.size:"<<m.getSize()<<"\n"<<"m:\n"<<a<<"n:\n"<<b;

    DoubleSubscriptedArray c( m );
    DoubleSubscriptedArray d(1,1);
    d=n;//test operator=
    cout<<"c:\n"<<c<<"d:\n"<<d<<endl;
    cout<<"a[1][1]: "<<m(1,1)<<endl;
    m(1,1)=11;
    cout<<"m:\n"<<m;
}

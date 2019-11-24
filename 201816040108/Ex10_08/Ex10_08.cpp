//Ex10_08.cpp
//Complex class program
#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);
    cout<<"x: ";
    cout<<x<<"\ny: ";
    cout<<y<<"\nz: "<<z<<endl;

    x=y-z;
    cout<<"x=y-z: "<<x<<"="<<y<<"-"<<z<<endl;
    x=y+z;
    cout<<"x=y+z: "<<x<<"="<<y<<"+"<<z<<endl;
    x=y*z;
    cout<<"x=y*z: "<<x<<"="<<y<<"*"<<z<<endl;
     x=y*z;
    cout<<"\n\nx = y * z\n";
    cout<<x<<" = "<< y <<" * "<<z<<endl;

    if(x==y)
        cout<<x<<" = "<<y;
    else
        cout<<x<<" != "<<y;
    if(y==z)
        cout<<y<<"and"<<z<<"is equal."<<endl;
    if(y!=z)
        cout<<y<<"and"<<z<<"is unequal."<<endl;

    return 0;
}

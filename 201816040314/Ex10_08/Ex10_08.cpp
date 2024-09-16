//Ex10_08.cpp
#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;//construct the x object
    Complex y(4.3,8.2);//construct the y object
    Complex z(3.3,1.1);//construct the z object

    cout<<"x:";
    cout<<x<<endl;
    cout<<"y:";
    cout<<y<<endl;
    cout<<"z:";
    cout<<z<<endl;

    x=y+z;//check the + overload function
    cout<<endl<<endl<<"x=y+z:"<<endl;
    cout<<x<<"="<<y<<"+"<<z<<endl;

    x=y-z;//check the - overload function
    cout<<endl<<endl<<"x=y-z:"<<endl;
    cout<<x<<"="<<y<<"-"<<z<<endl;

    x=y*z;//check the * overload function
    cout<<endl<<endl<<"x=y*z:"<<endl;
    cout<<x<<"="<<y<<"*"<<z<<endl<<endl;

    cout<<"Compare x to y:"<<endl//to check the ==overload function and != overload function
        <<((x==y)?"true":"false")<<":by == overload function"<<endl
        <<((x!=y)?"true":"false")<<":by != overload function"<<endl;
    return 0;
}

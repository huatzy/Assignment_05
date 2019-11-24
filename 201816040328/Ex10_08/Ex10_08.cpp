#include <iostream>
#include"Complex.h"

using namespace std;

int main()
{
    Complex x;//both real and imaginary are default
    Complex y(4.3,8.2);//both real and imaginary are initialization
    Complex z(3.3,1.1);//both real and imaginary are initialization
    //output x,y and z
    cout<<"x: "<<x
        <<"\ny: "<<y
        <<"\nz: "<<z;
    //use overload operator +
    x=y+z;
    cout<<"\n\nx=y+z:\n"<<x<<"="<<y<<"+"<<z;
    //use overload operator -
    x=y-z;
    cout<<"\n\nx=y-z:\n"<<x<<"="<<y<<"-"<<z;
    //use overload operator *
    x=y*z;
    cout<<"\n\nx=y*z:\n"<<x<<"="<<y<<"*"<<z;
    //use operator ==
    if(y==z)
        cout<<"\n\ny and z are equality!";
    else
        cout<<"\n\ny and z are inequality!";
    return 0;
}

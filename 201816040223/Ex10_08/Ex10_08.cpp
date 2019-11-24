#include <iostream>
#include"Complex.h"
using namespace std;
int main()
{
    Complex x;
    Complex y;
    Complex z;

    cout<<"y:";
    cin>>y.real>>y.imaginary;
    cout<<"z:";
    cin>>z.real>>z.imaginary;
   // cout<<y<<z;
    x=y+z;
    cout<<"x=y+z:\n";
    cout<<x<<"="<<y<<"+"<<z;
    x=y-z;
    cout<<"\nx=y-z:\n";
    cout<<x<<"="<<y<<"-"<<z;

    x=y*z;
    cout<<"\nx=y*z:\n";
    cout<<x<<"="<<y<<"*"<<z;
    if(y==z)
        cout<<"\nThe plural is equal"<<endl;
        if(y!=z)
     cout<<"\nUnequal complex Numbers"<<endl;


}//end main

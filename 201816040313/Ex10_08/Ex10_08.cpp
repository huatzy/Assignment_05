#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex x;
    Complex y;
    cin>>y;//input two sets of numbers
    Complex z;
    cin>>z;

    //output x,y,z
    cout<<"x: ";
    cout<<x;
    cout<<"\ny: ";
    cout<<y;
    cout<<"\nz: ";
    cout<<z;


    x=y+z;
    cout<<"\n\nx=y+z:"<<endl;
    cout<<x;
    cout<<"=";
    cout<<y;
    cout<<"+";
    cout<<z;


    x=y-z;
    cout<<"\n\nx=y-z:"<<endl;
    cout<<x;
    cout<<"=";
    cout<<y;
    cout<<"-";
    cout<<z;



    x=y*z;
    cout<<"\n\nx=y*z:"<<endl;
    cout<<x;
    cout<<"=";
    cout<<y;
    cout<<"*";
    cout<<z;
    cout<<endl;


    if(z==y)
        cout<<"z and y are equal"<<endl;
    if(z!=y)
        cout<<"z and y are  not equal"<<endl;
}

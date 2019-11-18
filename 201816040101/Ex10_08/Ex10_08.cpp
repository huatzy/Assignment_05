#include <iostream>
#include "Complex.h"
#include <iomanip>
#include <stdexcept>

using namespace std;


int main()
{
    Complex x;
    Complex y( 4.3 , 8.2);
    Complex z( 3.3 , 1.1 );

    cout<<"x: ";
    cout<<x<<"\ny: ";
    cout<<y<<"\nz: "<<z<<endl;

    cin>>x;
    cout<<x<<endl;

    x=y+z;
    cout<<"\n\nx = y + z\n";
    cout<<x<<" = "<< y <<" + "<<z;

    x=y-z;
    cout<<"\n\nx = y - z\n";
    cout<<x<<" = "<< y <<" - "<<z;

    x=y*z;
    cout<<"\n\nx = y * z\n";
    cout<<x<<" = "<< y <<" * "<<z<<endl;

    if(x==y)
        cout<<x<<" = "<<y;
    else
        cout<<x<<" != "<<y;


    return 0;




}

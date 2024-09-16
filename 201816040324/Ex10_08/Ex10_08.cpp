#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex x( 0.0, 0.0 );
    Complex y( 7.9, 9.3 );
    Complex z( 2.6, 6.5 );
    cout<<"x:"<<x<<"\n" ;
    cout<<"y:"<<y<<"\n" ;
    cout<<"z:"<<z<<"\n" ;
    x=y+z;
    cout << "x = y + z: " << endl;
    cout<<x<<"="<<y<<"+"<<z<<"\n" ;
    x=y-z;
    cout << "x = y - z: " << endl;
    cout<<x<<"="<<y<<"-"<<z<<"\n" ;
    x=y*z;
    cout << "x = y * z: " << endl;
    cout<<x<<"="<<y<<"*"<<z<<"\n" ;
    if ( x != y )
    cout << "x and y are not equal" << endl;
    if ( y != z )
    cout << "y and z are not equal" << endl;
    if ( x != z )
    cout << "x and z are not equal" << endl;
    cout << "input(2.6, 6.5)\n";
    cin >> y;
    if ( y == z )
    cout << "y"<<y<< endl ;
}

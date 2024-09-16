#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex x;
    Complex y( 4.3, 8.2 );
    Complex z( 3.3, 1.1 );

    cout << "x: ";
    cout << x <<endl;

    cout << "\ny: ";
    cout << y <<endl;

    cout << "\nz: ";
    cout << z <<endl;

    x=y+z;
    cout << "\n\nx = y + z:" <<endl;
    cout << x << "=" << y << "+" << z <<endl;

    x=y-z;
    cout << "\n\nx = y - z:" <<endl;
    cout << x << "=" << y << "-" << z <<endl;

    x=y*z;
    cout << "\n\nx = y * z:" <<endl;
    cout << x << "=" << y << "*" << z <<endl;

    if(x==y)
        cout << "Complex x is equal y\n";
    else
        cout << "Complex x is not equal y\n";

    cout << "\n\n\n";
    double a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    Complex complex1( a, b);
    Complex complex2( c, d);
    Complex complex3;

    cout << "\ncomplex1: " << complex1 <<endl;
    cout << "\ncomplex2: " << complex2 <<endl;
    cout << "\ncomplex3: " << complex3 <<endl;

    complex3=complex1+complex2;
    cout << "\n\ncomplex3 = complex1 + complex2:" <<endl;
    cout << complex3 << "=" << complex1 << "+" << complex2 <<endl;

    complex3=complex1-complex2;
    cout << "\n\ncomplex3 = complex1 - complex2:" <<endl;
    cout << complex3 << "=" << complex1 << "-" << complex2 <<endl;

    complex3=complex1*complex2;
    cout << "\n\ncomplex3 = complex1 * complex2:" <<endl;
    cout << complex3 << "=" << complex1 << "*" << complex2 <<endl;

    if(complex1==complex2)
        cout << "\ncomplex1 is equal complex2\n";
    else
        cout << "\ncomplex1 is not equal complex2 \n";
}

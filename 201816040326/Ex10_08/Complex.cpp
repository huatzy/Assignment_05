#include <iostream>
#include "Complex.h"
using namespace std ;

Complex::Complex( double a , double b )
{
    real = a;
    imag = b;
}

bool Complex::operator==( const Complex &c )const
{
    if(c.real == real &&c.imag == imag)
        return true;
    else
        return false;
}

 bool Complex::operator!=( const Complex &c )const
 {
     if(c.real != real ||c.imag != imag)
        return true;
     else
        return false;
 }

 Complex Complex::operator+( const Complex &c )const
 {
     return Complex(real + c.real,imag + c.imag);
 }

  Complex Complex::operator-( const Complex &c )const
 {
     return Complex(real - c.real,imag - c.imag);
 }

  Complex Complex::operator*( const Complex &c )const
 {
     return Complex(real*c.real - imag*c.imag , real*c.imag + imag*c.real);
 }

 ostream &operator <<(ostream &output,const Complex &c)
{
    output <<c.real<<"+"<<c.imag<<"*i";

    return output;
}
istream &operator >>(istream &input,Complex &c)
{
    input >> c.real >> c.imag;

    return input;
}


// Fig. 10.15: Complex. cpp
//Complex class member -function definitions.
#include <iostream>
#include"Complex.h"
using namespace std ;

//Constructor
Complex::Complex( double realPart, double imaginaryPart )
    : real( realPart ),imaginary( imaginaryPart )
{
    // empty body
}//end Complex constructor

//addition operator
Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex( real + operand2. real,
      imaginary + operand2. imaginary );
}// end function operator+

//subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
    return Complex( real - operand2.real,
      imaginary - operand2. imaginary );
}//end function aperator-

Complex Complex::operator*( const Complex &operand2 ) const
{
    return Complex( real*operand2.real-imaginary*operand2.imaginary,
                real*operand2.imaginary+imaginary*operand2.real);
}

bool Complex::operator==( const Complex &operand2 ) const
{
    if(real==operand2.real&&imaginary==operand2.imaginary)//判断两个复数是否相等
        return 1;
    else
        return 0;
}

bool Complex::operator!=( const Complex &operand2 ) const
{
    if(*this==operand2)
        return 0;
    else
        return 1;
}

istream &operator>>(istream &input,Complex &c)
{
    input>>c.real>>c.imaginary;
    return input;
}

ostream &operator<<(ostream &output,const Complex &c)
{
    output<<"("<<c.real<<", "<<c.imaginary<<")";
}

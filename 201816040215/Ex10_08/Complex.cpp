//Fig. 10.15: Complex.cpp
//Complex class member-function definition.
#include <iostream>
#include "Complex.h"
using namespace std;

//constructor
Complex::Complex( double realPart, double imaginaryPart)
    :real( realPart ),
    imaginary( imaginary )
{
    //empty body
}//end Complex constructor

//addition operator
Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex( real + operand2.real ,
        imaginary + operand2.imaginary );
}//end function operator+

//subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
    return Complex( real - operand2.real,
        imaginary - operand2.imaginary );
}//end function operator-

Complex Complex::operator*( const Complex &operand2 ) const;
{
    return Complex( real * operand2.real - imaginary * operand2.imaginary,
          real * operand2.imaginary + imaginary * operand2.real );
}

bool Complex::operator==( const Complex &operand ) const
{
    if( real == operand2.real && imaginary == operand.imaginary )
        return 1;
    else
        return 0;
}

istream &operator>>( istream &input,DoubleSubscriptedArray &a)
{
    return input;
}

ostream &operator<<( ostream &output,const DoubleSubscriptedArray &a)
{
    return output;
}


//display a Complex object in the form: (a,b)
void Complex::print() const
{
    cout << '(' << real << ", " << imaginary << ')';
}//end function print

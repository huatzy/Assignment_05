#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double realP, double imaginaryP )
    :real(realP), imaginary(imaginaryP)
{
//empty body
}//end complex constructor

Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real + operand2.real, imaginary+operand2.imaginary);
}//end function operator+

Complex Complex::operator-(const Complex &operand2) const
{
    return Complex(real - operand2.real, imaginary-operand2.imaginary);
}//end function operator-
Complex Complex::operator*( const Complex &operand2 ) const
{
    return Complex(real*operand2.real-imaginary*operand2.imaginary,
                   real*operand2.imaginary+imaginary*operand2.real);
}
//operator ==
bool Complex::operator==(const Complex &operand2 )const
{
    if(real==operand2.real&&imaginary==operand2.imaginary)
        return 1;
    else
        return 0;
}
//operator !=
bool Complex::operator!=(const Complex &operand2 )const
{
    return !(real==operand2.real&&imaginary==operand2.imaginary);
}
//input
istream &operator>>( istream &input, Complex &a )
{
    input>>a.real>>a.imaginary;
    return input;
}
istream &operator>>(istream &input ,Complex &a)
{
    input>>a.real;
    input>>a.imaginary;
    return input;
}
ostream &operator<<(ostream &output , const Complex &a)
{
    output<<"(" << a.real << "," << a.imaginary << ")";
    return output;
}

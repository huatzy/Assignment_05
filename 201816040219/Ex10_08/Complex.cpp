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

Complex Complex::operator*(const Complex &operand2) const
{
    return Complex( real*operand2.real - imaginary*operand2.imaginary, imaginary*operand2.real + real*operand2.imaginary);
}//end function operator*

bool Complex::operator==(const Complex &operand2) const
{
    if(real == operand2.real && imaginary == operand2.imaginary)
        return true;
    else
        return false;
}//end function operator==

bool Complex::operator!=(const Complex &operand2) const
{
    if(*this == operand2)
        return false;
    else
        return true;
}//end function operator!=

istream &operator>>( istream &input, Complex &operand2 )
{
    input >> operand2.real;
    input >> operand2.imaginary;
    return input;
}//end function operator>>

ostream &operator<<( ostream &output, const Complex &operand2)
{
    output << "(" << operand2.real << ", " << operand2.imaginary << ")";

    return output;
}//end function operator<<



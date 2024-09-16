#include<iostream>
#include"Complex.h"
using namespace std;

Complex::Complex( double realpart ,double imaginarypart)
    :real(realpart),imaginary(imaginarypart)
    {

    }
Complex Complex::operator+(const Complex &operand2)
{
    return Complex(this->real + operand2.real,this->imaginary +operand2.imaginary);
}
Complex Complex::operator-(const Complex &operand2 )
{
    return Complex(real - operand2.real,
                   imaginary - operand2.imaginary);
}//end function operator-
Complex Complex::operator*(const Complex &operand2 )
{
    return Complex((real*operand2.real)-imaginary*operand2.imaginary,
                   imaginary*operand2.real+real*operand2.imaginary);
}//end function operator*
//equality
bool Complex::operator==( const Complex &operand2 )
{
    if(real==operand2.real&&imaginary==operand2.imaginary)
        return true;
    else
        return false;
}//end function operator==
bool Complex::operator!=( const Complex &operand2 )
{
    if(real==operand2.real&&imaginary==operand2.imaginary)
        return false;
    else
        return true;
}//end function operator!=
//overloaded input operator for class Complex
istream &operator>>(istream &input, Complex &right)
{
    input>>right.real>>right.imaginary;

    return input;
}
ostream &operator<<(ostream &output, const Complex &right)
{
    output<<"("<<right.real<<"," <<right.imaginary <<")";

    return output;
}

//Complex.cpp
//Complex class member function definition
#include<iostream>
#include "Complex.h" //Complex class definition
using namespace std;

//constructor
Complex::Complex(double realPart,double imaginaryPart )
    :real( realPart ),
    imaginary(imaginaryPart)
{
        //empty body
}//end Complex constructor
//addition operator
Complex Complex::operator+(const Complex &operand2 )const
{
    return Complex(real + operand2.real,
                   imaginary+operand2.imaginary);
}//end function operator+
//subtraction operator
Complex Complex::operator-(const Complex &operand2 )const
{
    return Complex(real - operand2.real,
                   imaginary - operand2.imaginary);
}//end function operator-
Complex Complex::operator*(const Complex &operand2 )const
{
    return Complex((real*operand2.real)-imaginary*operand2.imaginary,
                   imaginary*operand2.real+real*operand2.imaginary);
}//end function operator*
//equality
bool Complex::operator==( const Complex &operand2 )const
{
    if(real==operand2.real&&imaginary==operand2.imaginary)
        return true;
    else
        return false;
}//end function operator==
bool Complex::operator!=( const Complex &operand2 )const
{
    if(real==operand2.real&&imaginary==operand2.imaginary)
        return false;
    else
        return true;
}//end function operator!=
//overloaded input operator for class Complex
istream &operator>>( istream &input,Complex &a)
{
    input>>a.real>>a.imaginary;
    return input;
}//end function
ostream &operator<<( ostream &output,const Complex &a)
{
    output<<"("<<a.real<<","<<a.imaginary<<")";
    return output;
}

//Fig. 10.8:Complex.cpp
#include <iostream>
#include "Complex.h"
using namespace std;
//Constructor
Complex::Complex(double realPart,double imaginaryPart)
    :real(realPart),
    imaginary(imaginaryPart)
{
    //empty body
}//end Complex constructor

//addition operator
Complex Complex::operator+(const Complex &operand2)const
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}//end function operator+

//subtraction operator
Complex Complex::operator-(const Complex &operand2)const
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}//end function operator-

Complex Complex::operator*(const Complex &operand2)const
{
    return Complex(real*operand2.real,imaginary*operand2.imaginary);
}//end function operator*

 bool Complex::operator==( const Complex &right ) const
 {
     if(real==right.real&&imaginary==right.imaginary)
     {
         return true;
     }
     return false;
 }

bool Complex::operator!=( const Complex &right ) const
{
     return !(*this == right);
}
istream &operator>>(istream &input,Complex &c)
{

    input>>c.real>>c.imaginary;
    return input;
}
ostream &operator<<(ostream &output,const Complex &c)
{
    output<<'('<<c.real<<","<<c.imaginary<<')';
    return output;
}

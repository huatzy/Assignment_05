#include <iostream>
#include "Complex.h"
using namespace std;

//Constructor
Complex::Complex(double realPart,double imaginaryPart)
    : real(realPart),imaginary(imaginaryPart)
{
    real=realPart;
    imaginary=imaginaryPart;
}//end Complex constructor

//addition operator
Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real + operand2.real,imaginary + operand2.imaginary);
}//end function operator+

Complex Complex::operator-(const Complex &operand2) const
{
    return Complex(real - operand2.real,imaginary - operand2.imaginary);
}//end function operator-

Complex Complex::operator*(const Complex &operand2) const
{
    return Complex(real*operand2.real-imaginary*operand2.imaginary,imaginary*operand2.real+real*operand2.imaginary);
} //end function operator *

bool Complex::operator==( const Complex &operand ) const//equality operator
{
  if((real==operand.real)&&(this->imaginary==operand.imaginary))
  {
      return true;
  }
  else
    return false;

}

bool Complex::operator!=( const Complex &operand ) const
{
  if((real==operand.real)&&(this->imaginary==operand.imaginary))
  {
      return true;
  }
  else
    return false;

}

ostream& operator << (ostream& output,const Complex& operand) //定义运算符“<<”重载函数
{
    output<<"("<<operand.real<<","<<operand.imaginary<<")";
    return output;
}

istream& operator >> (istream& input,Complex& operand) //定义重载运算符“>>”
{
    cout<<"input real part and imaginary part of complex number:";
    input>>operand.real>>operand.imaginary;
    return input;
}


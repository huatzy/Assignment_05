//部分参照一班五号同学的代码

#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex( double realPart , double imaginaryPart )
:real(realPart),
 imaginary(imaginaryPart)
 {
 	
  } 
  
Complex Complex::operator+(const Complex &operand2) const
{
	return Complex (real+operand2.real,imaginary+operand2.imaginary);
}

Complex Complex::operator-(const Complex &operand2) const
{
	return Complex (real-operand2.real,imaginary-operand2.imaginary);
}

Complex Complex::operator*(const Complex &operand2) const
{
	return Complex (real*operand2.real-imaginary*operand2.imaginary,real*operand2.imaginary+imaginary*operand2.real);
}

bool Complex::operator==(const Complex &operand2) const
{
	if (real!=operand2.real||imaginary!=operand2.imaginary)
	return false;
	else
	return true;
}

ostream& operator<<(ostream & output, const Complex & operand2)
{
    output<<"("<<operand2.real<<","<<operand2.imaginary<<")";
    return output;
}

istream& operator>>(istream & input, Complex & operand2)
{
	input>>operand2.real>>operand2.imaginary;
	return input;
}

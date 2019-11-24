#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double realPart,double imaginaryPart)
	:real( realPart ),
	 imaginary( imaginaryPart )	
{
	
} 

Complex Complex::operator+(const Complex &operand2) const
{
	return Complex(real + operand2.real,imaginary + operand2.imaginary);
}

Complex Complex::operator-(const Complex &operand2) const
{
	return Complex(real - operand2.real,imaginary - operand2.imaginary);
}

Complex Complex::operator*(const Complex &operand2) const
{
	return Complex(real * operand2.real,imaginary * operand2.imaginary);
}

istream &operator>>(istream &input, Complex &a)
{
	input>>a.real>>a.imaginary;
	return input;
}

ostream &operator<<(ostream &output,const Complex &a)
{
	output<<"("<<a.real<<","<<a.imaginary<<")";
	return output;
}

bool Complex::operator==(const Complex &operand2) const
{
	if(real == operand2.real && imaginary == operand2.imaginary)
		return true;
	else
	    return false;
 }
 
 bool Complex::operator!=(const Complex &operand2) const
{
	return !(*this == operand2);
 }
  

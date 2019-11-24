#include <iostream>
#include"Complex.h"
using namespace std;

Complex::Complex(double realpart,double imaginarypart)
	: real(realpart),
	  imaginary(imaginarypart)
{
	
}
Complex Complex::operator+(const Complex & r)
{
	return Complex (real+r.real,imaginary+r.imaginary);
}
Complex Complex::operator-(const Complex & r)
{
	return Complex (real-r.real,imaginary-r.imaginary);
}
Complex Complex::operator*(const Complex & r)  //(a+bi)(c+di)=(ac-bd)+(bc+ad)i
{
	return Complex (real*r.real-imaginary*r.imaginary,imaginary*r.real+real*r.imaginary);
}
bool Complex::operator==(const Complex &r) const
{
	if(real==r.real&&imaginary=r.imaginary)
	{
		return true;
	}
	else
		return false;
}
bool Complex::operator==(const Complex &r) const
{
	return !(*this==r) ;
}
istream &operator >>(istream &input,Complex &a)
{
	input>> a.real>>a.imaginary;
	return input;
	
}
ostream &operator<< (ostream &output,Complex &a)
{
	output <<'('<<a.real<<","<<a.imaginary<<')';
	return output;
}

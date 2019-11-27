#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex(double a, double b)
	:real(a), imaginary(b)
{
}

Complex Complex::operator+(const Complex &b) const
{
	return Complex(real + b.real, imaginary + b.imaginary);
}

Complex Complex::operator-(const Complex &b) const
{
	return Complex(real - b.real, imaginary - b.imaginary);
}

Complex Complex::operator*(const Complex &b) const
{
	return Complex(real*b.real, imaginary*b.imaginary);
}

bool Complex::operator==(const Complex &b) const
{
	if (real != b.real || imaginary != b.imaginary)
        return false;
    return true;
}

bool Complex::operator!=(const Complex & b) const
{
	return !(*this == b);
}

ostream &operator<<(std::ostream &output, const Complex &a)
{

	output << '(' << a.real << ", " << a.imaginary << ')';
    return output;
}
istream &operator>>(std::istream &input, const Complex &a)
{
	input >> a.real >> a.imaginary;
    return input;
}

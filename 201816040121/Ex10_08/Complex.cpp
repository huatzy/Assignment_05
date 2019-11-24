//Ex10_08:ComplexPro.cpp
#include <iostream>
#include <iomanip>
#include "ComplexPro.h"
//constructor real and imaginary parts of complex
ComplexPro::ComplexPro(double r, double i)
	: real(r),
	  imaginary(i)
{

}

//overloaded output operator
ostream& operator<<(ostream& output, const ComplexPro& c)
{
	output << "(" << c.real << ", " << c.imaginary << ")";
	return output;
}

//overloaded input operator
istream& operator>>(istream& input, ComplexPro& c)
{
	input.ignore();
	input >> c.real;
	input.ignore(2);
	input >> c.imaginary;
	input.ignore();
	return input;
}
//overloaded product operator
ComplexPro ComplexPro::operator*(const ComplexPro& c)
{
	ComplexPro temp;
	temp.real = this->real * c.real;
	temp.imaginary = this->imaginary * c.imaginary;
	return temp;
}
//overloaded equal operator
bool ComplexPro::operator==(const ComplexPro& c) const
{
	if ((this->real == c.real) && (this->imaginary == c.imaginary))
		return true;
	else
		return false;
}
//overloaded inequal operator
bool ComplexPro::operator!=(const ComplexPro& c) const
{
	if ((this->real != c.real) || (this->imaginary != c.imaginary))
		return true;
	else
		return false;
}

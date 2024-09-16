#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double realPart,double imaginaryPart)
    :real(realPart),imaginary(imaginaryPart)
{
}
Complex Complex::operator+(const Complex &flag) const
{
    return Complex(real+flag.real,imaginary+flag.imaginary);
}
Complex Complex::operator-(const Complex &flag) const
{
    return Complex(real-flag.real,imaginary-flag.imaginary);
}
Complex Complex::operator*(const Complex &flag) const
{
    return Complex(real*flag.real-imaginary*flag.imaginary,imaginary*flag.real+real*flag.imaginary);
}
bool Complex::operator==(const Complex &flag) const
{
    if(real==flag.real&&imaginary==flag.imaginary)
    {
        return true;
    }
    else
    {
        return false;
    }
}
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

#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double a,double b)
    :real(a),imaginary(b)
{
}
Complex Complex::operator+(const Complex &r) const
{
    return Complex(real+r.real,imaginary+r.imaginary);
}

Complex Complex::operator-(const Complex &r) const
{
    return Complex(real-r.real,imaginary-r.imaginary);
}
Complex Complex::operator*(const Complex &r) const
{
    return Complex(real*r.real-imaginary*r.imaginary,imaginary*r.real+real*r.imaginary);
}
bool Complex::operator==(const Complex &r) const
{
    if(real==r.real&&imaginary==r.imaginary)
        return true;
    else
        return false;
}
bool Complex::operator!=(const Complex &r) const
{
    return !(*this==r);
}
ostream &operator<<(ostream &output,const Complex &r)
{

    output<<'('<<r.real<<','<<r.imaginary<<')';
    return output;
}
istream &operator>>(istream &input,Complex &r)
{
    input.ignore();
    input>>r.real;
    input.ignore();
    input>>r.imaginary;
    return input;
}

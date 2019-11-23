#include <iostream>
#include "Complex.h"
using namespace std ;
Complex::Complex(double a,double b)
{
    real = a;
    imaginary = b;
}
Complex Complex::operator+(const Complex &q) const
{
    return Complex(real +q.real,imaginary +q.imaginary);
}
Complex Complex::operator-(const Complex &q) const
{
    return Complex(real -q.real,imaginary -q.imaginary);
}
Complex Complex::operator*(const Complex &q) const
{
    return Complex(real*q.real,imaginary*q.imaginary);
}
bool Complex::operator==(const Complex &q) const
{
    if(real == q.real&&imaginary==q.imaginary)
    {
        return true;
    }
    return false;
}
ostream &operator<<(ostream &output,const Complex &a)
{
    output<<a.real<<" "<<a.imaginary<<endl;
    return output;
}
istream &operator>>(istream &input,Complex &a)
{
    input>>a.real;
    input>>a.imaginary;
    return input;
}

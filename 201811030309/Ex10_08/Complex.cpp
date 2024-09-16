#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(double a, double b)
    :real(a),
     imaginary(b)
{
}
Complex Complex::operator+(const Complex &n) const
{
    return Complex(real+n.real,
        imaginary+n.imaginary);
}
Complex Complex::operator-(const Complex &n) const
{
    return Complex(real-n.real,
        imaginary-n.imaginary);
}
Complex Complex::operator*(const Complex &n) const
{
    return Complex(real*n.real-imaginary*n.imaginary,
        real*n.imaginary+n.real*imaginary);
}
bool Complex::operator==(const Complex &n) const
{
    if(real==n.real&&imaginary==n.imaginary)
        return true;
    return false;
}
bool Complex::operator!=(const Complex &n) const
{
    return !(*this==n);
}
ostream &operator<<(ostream &output, const Complex &n)
{
    output << "( " << n.real << ", " << n.imaginary << " )";
    return output;
}
istream &operator>>(istream &input, Complex &n)
{
    input >> n.real >> n.imaginary ;
    return input;
}

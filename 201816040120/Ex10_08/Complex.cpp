#include <iostream>
#include "Complex.h"
using namespace std;

Complex ::Complex(double r,double i)
:real(r),imaginary(i)
{
}
Complex Complex ::operator*(const Complex &a)const
{
    return Complex(real*a.real - imaginary*a.imaginary,real*a.imaginary + imaginary*a.real);
}
bool Complex ::operator == (const Complex &a) const
{
    if(real == a.real && imaginary == a.imaginary)
        return true;

    return false;
}
ostream &operator<<(ostream& output, const Complex& a)
{
    output<<a.real<<" "<<a.imaginary;
    return output;
}
istream &operator >>(istream &input, Complex &a)
{
    input>>a.real>>a.imaginary;
    return input;
}

#include <iostream>
using namespace std;

#include "Complex.h"

//Constructors
Complex::Complex(double realPart , double imaginaryPart)
:real(realPart),imaginary(imaginaryPart)
{
}
//Overload operator +
Complex Complex::operator+(const Complex &op2) const
{
    return Complex(real + op2.real , imaginary + op2.imaginary);
}
//Overload operator -
Complex Complex::operator-(const Complex &op2) const
{
    return Complex(real - op2.real , imaginary - op2.imaginary);
}
//Overload operator *
Complex Complex::operator*(const Complex &op2) const
{
    return Complex(real*op2.real-imaginary*op2.imaginary , real*op2.imaginary+imaginary*op2.real);
}
//Overload operator ==
bool Complex::operator==(const Complex &a) const
{
    if(real == a.real && imaginary==a.imaginary)
        {return true ;}
    return false ;
}
//Overload operator !=
bool Complex::operator!=(const Complex &a) const
{
    if(real == a.real && imaginary==a.imaginary)
        {return false ;}
    return true ;
}
////Overload operator <<
ostream &operator<<(std::ostream &output,const Complex &a)
{
    output<<"("<<a.real<<"+"<<a.imaginary<<"i)";
    return output;
}
//Overload operator >>
istream &operator>>(std::istream &input,Complex &a)
{
    input>>a.real>>a.imaginary;
    return input;
}

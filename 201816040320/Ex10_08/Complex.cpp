#include <iostream>
#include <iomanip>
#include "Complex.h"
using namespace std;


Complex::Complex(double realPart,double imaginaryPart)
:real(realPart),imaginary(imaginaryPart)
{

}

Complex Complex::operator+(const Complex &right) const
{
    return Complex(real+right.real,imaginary+right.imaginary);
}

Complex Complex::operator-(const Complex &right) const
{
    return Complex(real-right.real,imaginary-right.imaginary);
}

ostream &operator<<(ostream &output,const Complex &right)
{
    output<<"("<<right.real<<","<<right.imaginary<<")";
    return output;
}

istream &operator>>(istream &input,Complex &right)
{
    //input.ignore(2);
    input>>right.real;
    //input.ignore(2);
    input>>right.imaginary;
    //input.ignore(2);
    return input;
}

Complex Complex::operator*(const Complex &right) const
{
    return Complex(real*right.real-imaginary*right.imaginary,real*right.imaginary+imaginary*right.real);
}

bool Complex::operator==(const Complex &right)
{
    if(real==right.real&&imaginary==right.imaginary)
        return true;
    else
        return false;
}

bool Complex::operator!=(const Complex &right)
{
    if(real==right.real&&imaginary==right.imaginary)
        return false;
    else
        return true;
}

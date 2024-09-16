#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double realPart,double imaginaryPart) //define the constructor for Complex
{
    real = realPart;
    imaginary = imaginaryPart;
}

istream &operator>>(istream &input,Complex &a) //define the function for operator>>
{
    input >> a.real >> a.imaginary;
    return input;
}

ostream &operator<<(ostream &output,Complex &a) //define the function for operator<<
{
    output << "(" << a.real << "," << a.imaginary << ")";
    return output;
}

Complex Complex::operator*(const Complex &a) //define the function for operator*
{
    Complex temp;
    temp.real = real*a.real-imaginary*a.imaginary;
    temp.imaginary = imaginary*a.real+real*imaginary;
    return temp;
}

bool Complex::operator==(Complex &a) //define function for operator==
{
    if((real == a.real) && (imaginary == a.imaginary))
        return true;
    else
        return false;
}

bool Complex::operator!=(Complex &a) //define function for operator!=
{
    if((real != a.real) || (imaginary != a.imaginary))
        return true;
    else
        return false;
}


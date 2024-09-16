#include <iostream>
#include "Complex.h"
using namespace std;


Complex::Complex(double realPart,double imaginaryPart)
 :real(realPart),imaginary(imaginaryPart)
{

}

Complex Complex::operator*(const Complex &op2)const
{
    return Complex(real*op2.real,imaginary*op2.imaginary);
}

bool Complex::operator==( Complex &op2 )
{
    if(real==op2.real&&imaginary==op2.imaginary)
        return true;
        return !(op2!=*this);
}

bool Complex::operator!=( Complex &op2 )
{
    if(real!=op2.real||imaginary!=op2.imaginary)
        return true;
    return !( op2 == *this );
}

ostream &operator<<(ostream &output, const Complex &a)
{
    output<<"("<<a.real<<" , "<<a.imaginary<<")";
    return output;
}


istream &operator>>(istream &input,Complex &a)
{
    input.ignore();
    input>>a.real;
    input.ignore();
    input>>a.imaginary;
}



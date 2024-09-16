#ifndef COMPLEX_CPP_INCLUDED
#define COMPLEX_CPP_INCLUDED

#include <iostream>
#include "Complex.h"
using namespace std;
//constructor
Complex::Complex(double realPart,double imaginaryPart)
{

    real=realPart;
    imaginary=imaginaryPart;

}//end
//加法函数
Complex Complex::operator+(const Complex &right) const
{
    return Complex(real+right.real,imaginary+right.imaginary);
}//end function operator+

//减法函数
Complex Complex::operator-(const Complex &right) const
{
    return Complex(real-right.real,imaginary-right.imaginary);
}//end function operator-

//乘法函数
Complex Complex::operator*(const Complex &right) const
{
    return Complex(real*right.real+imaginary*right.imaginary,real*right.imaginary+imaginary*right.real);
}//end function operator*

//重载==运算符
bool Complex::operator==(const Complex &right) const
{
    if(real!=right.real||imaginary!=right.imaginary)
        return false;
    return true;
}//end function operator==
//重载!=运算符
bool Complex::operator!=(const Complex &right) const
{
    if(*this==right)
        return false;
    return true;
}

//重载运算符<<
ostream &operator<<(std::ostream &output,const Complex &a)
{

    output<<"("<<a.real<<", "<<a.imaginary<<")";
    return output;
}//end function operator<<

//重载运算符>>
istream &operator>>(std::istream &input,Complex &a)
{
    input>>a.real>>a.imaginary;
    return input;
}//end function operator>>

#endif // CIMPLEX_CPP_INCLUDED

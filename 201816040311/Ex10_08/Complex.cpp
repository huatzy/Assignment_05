#include <iostream>
#include "Complex.h"

using namespace std;

//默认构造函数
Complex::Complex(double a,double b):real(a),imaginary(b)
{

}

//以下分别重载+，-，*，/
Complex Complex::operator+( const Complex &right) const
{
    return Complex(real + right.real,imaginary+right.imaginary);
}

Complex Complex::operator-( const Complex &right) const
{
    return Complex(real - right.real,imaginary-right.imaginary);
}
//重载<< >>
ostream &operator <<(ostream &output,const Complex &right)
{
    output <<right.real<<"+"<<right.imaginary<<"*i";

    return output;
}
istream &operator >>(istream &input,Complex &right)
{
    input >> right.real >> right.imaginary;

    return input;
}
//重载==，！=
bool Complex::operator==(const Complex &right) const
{
    if(real==right.real)
    {
        if(imaginary==right.imaginary)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
 bool Complex::operator!=(const Complex &right) const
 {
    if(*this==right)
    {
        return false;
    }
    else
    {
        return true;
    }
 }

 //重载*,使复数相乘。
 Complex Complex::operator*(Complex &right)
 {
    Complex temp;
    temp.real=real*right.real+imaginary*right.imaginary;
    temp.imaginary=real*right.imaginary+imaginary*right.real;

    return temp;
 }

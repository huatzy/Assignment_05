#include <cstdlib>
#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double realPart,double imaginaryPart)            //构造函数
   :real(realPart),
    imaginary(imaginaryPart)
{

}

Complex Complex::operator+(const Complex &operand2) const             //重载+
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}

Complex Complex::operator-(const Complex &operand2) const         //重载-
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}

Complex Complex::operator*(const Complex &operand2) const          //重载*
{
   double x,y;                                   //乘法运算
   x=real*operand2.real-imaginary*operand2.imaginary;
   y=imaginary*operand2.real+real*operand2.imaginary;

   return Complex(x,y);
}
bool Complex::operator==(const Complex &right) const             //重载==
{
    if(real==right.real&&imaginary==right.imaginary)
        return true;
    return false;
}
bool Complex::operator!=(const Complex &right) const           //重载！=
{
    return !(*this==right);
}

istream &operator>>(istream &input, Complex &a)               //重载输入
{
    input>>a.real>>a.imaginary;
    return input;
}

ostream &operator<<(ostream &output, const Complex &a)         //重载输出
{
    output<<'('<<a.real<<","<<a.imaginary<<')';
    return output;
}

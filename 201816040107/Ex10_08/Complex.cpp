#include <iostream>
#include "Complex.h"
#include <iomanip>
using namespace std;
Complex::Complex(double realPart,double imaginaryPart)
    :real(realPart),
     imaginary(imaginaryPart)
{

}
Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}
Complex Complex::operator-(const Complex &operand2) const
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}
bool Complex::operator==(const Complex &n) const
{
    if(real==n.real && imaginary==n.imaginary)
    {
        return true;
    }
    return false;
}
bool Complex::operator!=(const Complex &n) const
{
    return !(*this==n);
}
Complex Complex::operator*(const Complex &n) const//定义重载*运算符；
{
    Complex t;
    t.real=real*n.real+imaginary*n.imaginary*(-1);
    t.imaginary=real*n.imaginary+imaginary*n.real;
    return t;
}


ostream &operator<<(ostream &output,const Complex &n)//定义输出流；
{
    output<<'('<<n.real<<","<<n.imaginary<<')';
    return output;

}
istream &operator >>(istream &input,Complex &n)//定义输入流；
{
    input>>n.real;
    input>>n.imaginary;
    return input;
}

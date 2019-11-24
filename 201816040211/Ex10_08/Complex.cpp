#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(double realPart, double imaginaryPart)
       :real (realPart),
        imaginary(imaginaryPart)
{

}// 构造函数初始化

Complex Complex :: operator + (const Complex &operand2)const
{
    return Complex(real + operand2.real, imaginary + operand2.imaginary);
}//执行加法运算

Complex Complex :: operator - (const Complex &operand2)const
{
    return Complex(real - operand2.real, imaginary - operand2.imaginary);
}//执行减法运算

Complex  Complex :: operator * (const Complex &operand2)const
{
    return Complex(real * operand2.real-imaginary * operand2.imaginary , imaginary * operand2.real+real*operand2.imaginary);
}//执行乘法运算

bool Complex:: operator == (const Complex &operand2)const
{
    if(real != operand2.real || imaginary != operand2.real)
    return false;
    else
    return true;
}//判别是否相等

bool Complex:: operator != (const Complex &operand2)const
{
    if(real == operand2.real || imaginary == operand2.real)
    return false;
    else
    return true;
}//判别是否不等

ostream &operator<<(ostream & output, const Complex &number)
{
    output<<"("<<number.real<<","<<number.imaginary<<")";
}//执行输出

istream &operator>>(istream & input, Complex &number)
{
    input>>number.real>>number.imaginary;
}//执行输入

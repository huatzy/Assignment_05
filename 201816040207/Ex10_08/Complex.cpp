#include <iostream>
#include "Complex.h"

using namespace std;

//构造函数
Complex::Complex(double realPart,double imaginaryPart)
    :real(realPart),
     imaginary(imaginaryPart)
{

}
//加法
Complex Complex::operator+(const Complex &a) const
{
    return Complex(real +a.real,imaginary+a.imaginary);
}
//减法
Complex Complex::operator-(const Complex &a) const
{
    return Complex(real-a.real,imaginary - a.imaginary);
}
//乘法
Complex Complex::operator*(const Complex &a) const
{
    return Complex( real*a.real - imaginary*a.imaginary, imaginary*a.real + real*a.imaginary);
}
//判断是否相等
bool Complex::operator==(const Complex &a) const
{
    if(real == a.real && imaginary == a.imaginary)  //如果实部虚部分别相同
        return true;
    else
        return false;
}
//判断是否不相等
bool Complex::operator!=(const Complex &a) const
{
    if(*this == a)   //如果相等
        return false;
    else
        return true;
}

//打印函数
void Complex::print() const
{

    cout<<'('<< real <<"," <<imaginary<<')';

}

//友元重构<<
ostream &operator<<( ostream &output, const Complex & a)
{

    output<<'('<< a.real <<"," <<a.imaginary<<')';
    return output;
}

//友元重构>>
 istream &operator>>( std::istream &input, Complex &a)
 {

    input >> a.real;
    input >> a.imaginary;

    return input;

 }

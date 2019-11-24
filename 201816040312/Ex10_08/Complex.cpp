#include <iostream>
#include<iomanip>
#include "Complex.h"//complex的头文件
using namespace std;

ostream &operator<<(ostream &output,const Complex &com)//重载<<运算符
{
    output<<"("<<com.real<<","<<com.imaginary<<")";
}
istream &operator>>(istream &input,Complex &com)//重载>>运算符
{
    input.ignore();
    input>>setw(1)>>com.real;
    input.ignore();
    input>>setw(1)>>com.imaginary;
    input.ignore();
    return input;
}
Complex::Complex(double realpart,double imaginarypart)//complex类的构造函数
:real(realpart),
imaginary(imaginarypart)
{

}
Complex Complex::operator+(const Complex &operand2)const//重载+运算符
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}
Complex Complex::operator-(const Complex &operand2)const//重载-运算符
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}
Complex Complex::operator*(const Complex &com)const//重载*运算符
{
    Complex tem;
    tem.real=this->real*com.real-this->imaginary*com.imaginary;
    tem.imaginary=this->real*com.imaginary+this->imaginary*com.real;
    return tem;
}
bool Complex::operator==(const Complex &com)const//重载==运算符
{
    if(this->real==com.real&&this->imaginary==com.imaginary)
        return true;
    else
        return false;
}
bool Complex::operator!=(const Complex &com)const//重载！=运算符
{
    if(com==*this)
        return false;
    else
        return true;
}

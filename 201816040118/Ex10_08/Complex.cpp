#include<iostream>
#include"Complex.h"
using namespace std;
Complex::Complex(double realPart,double imaginaryPart) //构造函数
{
    real=realPart;
    imaginary=imaginaryPart;
}
Complex Complex::operator+(const Complex &op)const
{
    return Complex(real+op.real,imaginary+op.imaginary);
}
Complex Complex::operator-(const Complex &op)const
{
    return Complex(real-op.real,imaginary-op.imaginary);
}
Complex Complex::operator*(const Complex &op)const
{
    return Complex(real*op.real,imaginary*op.imaginary);
}
bool Complex::operator==(const Complex &op)const
{
    if(real==op.real&&imaginary==op.imaginary)  //如果实部和虚部相同
    {
        return true;
    }
    else
        return false;
}
bool Complex::operator!=(const Complex &op)const
{
    if(*this!=op)         //如果不相同
        return true;
    else
        return false;
}
ostream&operator<<(ostream &output,const Complex &op)
{
    output<<"("<<op.real<<","<<op.imaginary<<")"; //输出格式
    return output;
}
istream &operator>>(istream &input,Complex &op)
{
    input>>op.real>>op.imaginary;      //输入
    return input;
}

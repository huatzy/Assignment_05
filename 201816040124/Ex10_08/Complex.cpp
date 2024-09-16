#include<iostream>
#include"Complex.h"
using namespace std;
Complex::Complex(double a,double b)//用构造函数初始化数据成员
:real(a),imaginary(b)
{

}
ostream &operator<<(ostream &output,const Complex &c)//重载<<
{
    output<<"("<<c.real<<","<<c.imaginary<<")";
    return output;
}
istream &operator>>(istream &input,Complex &c)//重载>>
{
    char x;
    cin>>x;
    input>>c.real;
    cin>>x;
    input>>c.imaginary;
    cin>>x;
    return input;
}
Complex Complex::operator+(const Complex &right)const//重载+
{
    Complex temp;
    temp.real=real+right.real;
    temp.imaginary=imaginary+right.imaginary;
    return temp;
}
Complex Complex::operator-(const Complex &right)const//重载-
{
    Complex temp;
    temp.real=real-right.real;
    temp.imaginary=imaginary-right.imaginary;
    return temp;
}
Complex Complex::operator*(const Complex &right)const//重载*
{
    Complex temp;
    temp.real=real*right.real-imaginary*right.imaginary;
    temp.imaginary=real*right.imaginary+imaginary*right.real;
    return temp;
}
bool Complex::operator==(const Complex &right)const//重载==
{
    if(real==right.real&&imaginary==right.imaginary)
        return true;
    else
        return false;
}
bool Complex::operator!=(const Complex &right)const//重载!=
{
    if(*this==right)
        return false;
    else
        return false;
}

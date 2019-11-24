//Fig.10.15:Complex.cpp
//Complex class member-function definitions.
#include<iostream>
#include"Complex.h"
using namespace std;

//Constructor
Complex::Complex(double realPart,double imaginaryPart)
    :real(realPart),imaginary(imaginaryPart)
    {
       //setRealPart(real);
       //setImginaryPart(imginary);//empty body
    }//end Complex constructor
//addition operator
Complex Complex::operator+(const Complex &operand2 )const//重载加法运算符
{
    return Complex(real + operand2.real,imaginary + operand2.imaginary);
}//end of function operator+
Complex Complex::operator-(const Complex &operand2 )const//重载减法运算符
{
    return Complex(real - operand2.real,imaginary - operand2.imaginary);
}//end of function operator-
Complex Complex::operator*(const Complex &operand2 )const
{
    return Complex(real*operand2.real,imaginary*operand2.imaginary);//重载乘法运算符
}
bool Complex::operator==(const Complex &operand2) const
{
    if(real==operand2.real&&imaginary==operand2.imaginary)
    {
        return true;
    }
    else return false;
}
bool Complex::operator!=(const Complex &operand2) const
{
    if (real!=operand2.real||imaginary!=operand2.imaginary)//判断
    {
        return true;
    }
    else
        return false;
}

istream &operator>>(istream &input,Complex &a )//输入复数函数
{
    input>>a.real;
    input>>a.imaginary;
    return input;
}
ostream &operator<<(ostream &output,const Complex &a )//输出
{
    output<<'('<<a.real<<","<<a.imaginary<<')';
    //output<<endl;
    return output;
}
//display a Complex object in the form :(a,b)
/*void Complex::print()const
{
    cout<<'('<<real<<","<<imginary<<')';
}//end of function print*/

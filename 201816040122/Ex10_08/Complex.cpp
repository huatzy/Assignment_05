
//Fig. 10.15:Complex.cpp
//Complex class member-function definition
#include <iostream>
#include <iomanip>
#include<cstdlib>
#include<string>
#include "Complex.h"
using namespace std;

//Constructor
Complex::Complex(double realPart,double imaginaryPart)
:real(realPart),imaginary(imaginaryPart)
{

}
Complex Complex::operator+(const Complex & operand2)const
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}
Complex Complex::operator-(const Complex &operand2)const
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}
ostream &operator<<(ostream &output,const Complex &operand2)
{
    output<<"("<<operand2.real<<","<<operand2.imaginary<<")";
    return output;
}
istream &operator>>(istream &input, Complex &operand2)
{
   input>>operand2.real>>operand2.imaginary;
}
Complex Complex::operator*(const Complex &operand2)const
{
    Complex temp;
    temp.real=(this->real*operand2.real)-(this->imaginary*operand2.imaginary);
    temp.imaginary=(this->imaginary*operand2.real)+(this->real*operand2.imaginary);
    return temp;
}
bool Complex::operator==(const Complex &operand2)const
{
    if((this->real==operand2.real)&&(this->imaginary==operand2.imaginary))
        return true;
    else
        return false;
}
bool Complex::operator!=(const Complex &operand2)const
{
    if((this->real==operand2.real)&&(this->imaginary==operand2.imaginary))
        return false;
    else
        return true;
}

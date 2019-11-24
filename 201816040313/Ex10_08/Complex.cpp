#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Complex.h"
using namespace std;

Complex::Complex(double realPart,double imaginaryPart)//constructor
 :real(realPart),
 imaginary(imaginaryPart)
{

}
Complex Complex::operator+(const Complex &operand2)const//overload +
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}
Complex Complex::operator-(const Complex &operand2)const//overload -
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}
Complex Complex::operator*(const Complex &operand2)const//overload *
{
    return Complex(real*operand2.real,imaginary*operand2.imaginary);
}
ostream &operator<<(ostream &output,const Complex &operand2)//overload  output
{
    output<<'('<<operand2.real<<","<<operand2.imaginary<<')';
    return output;
}
istream &operator>>(istream &input,Complex &operand2)//overload input
{
    input>>operand2.real>>operand2.imaginary;
    return input;
}
bool Complex::operator==(const Complex &operand2)const//overload ==
{
    if(operand2.real==real)
    {
        if(operand2.imaginary==imaginary)
        return true;
    }
    return false;

}
bool Complex::operator!=(const Complex &operand2)const//overload !=
{
    if(operand2.real==real)
    {
        if(operand2.imaginary==imaginary)
        return false;
    }
    return true;
}

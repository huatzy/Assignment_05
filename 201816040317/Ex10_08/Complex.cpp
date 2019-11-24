#include <iostream>
#include <string>
#include <iomanip>
#include "Complex.h"

using namespace std;

ostream &operator<<(ostream &output,const Complex &a)
{
    output<<"("<<a.real<<" ";
    output<<a.imaginary<<")";
    return output;
}
istream &operator>>(istream &input, Complex &a)
{
    input>>a.real;
    input>>a.imaginary;
    return input;
}

Complex::Complex(double realPart,double imaginaryPart):real(realPart),imaginary(imaginaryPart)
{

}//end Complex

Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}

Complex Complex::operator-(const Complex &operand2) const
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}

Complex Complex::operator*(const Complex &operand2) const
{
    return Complex(real*operand2.real,imaginary*operand2.imaginary);
}

bool Complex::operator!=(const Complex &operand2)
{
    if(real==operand2.real&&imaginary==operand2.imaginary)
    {
        return false;
    }
    else
        return true;
}

bool Complex::operator==(const Complex &operand2)
{
    if(real!=operand2.real||imaginary==operand2.imaginary)
    {
        return false;
    }
    else
        return true;
}

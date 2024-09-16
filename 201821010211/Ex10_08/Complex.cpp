#include<iostream>
#include"complex.h"
using namespace std;
Complex:: Complex(double realpart,double imaginaryPart)
     :real(realpart),
     imaginary(imaginaryPart)
{

}
ostream & operator<<(ostream &output ,const Complex &data)
{
    output<<data.real<<"+"<<data.imaginary<<"i";
    return output;
}
istream &  operator>>(istream &input,Complex &right)
{
    double r,i;
    input>>r>>i;
    right.real=r;
    right.imaginary=i;

     return input;
}
Complex Complex::operator+(const Complex &right) const
{
    return Complex(real+right.real,imaginary+right.imaginary);
}
Complex Complex::operator-(const Complex &right) const
{
    return Complex(real-right.real,imaginary-right.imaginary);
}
Complex Complex::operator*(const Complex &right) const
{
    return Complex(real*right.real-imaginary*right.imaginary,imaginary*right.real+real*right.imaginary);

}
bool Complex::operator==(const Complex &right) const
{
    if(real!=right.real)
        return false;
    if(imaginary!=right.imaginary)
        return false;
    return true;
}
 bool Complex:: operator!=(const Complex &right) const
 {
     if(real==right.real)
        return false;
     if(imaginary==right.imaginary)
        return false;
     return true;
 }



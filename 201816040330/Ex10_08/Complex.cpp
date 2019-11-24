#include <iostream>
#include <iomanip>
#include "Complex.h"

using namespace std;

Complex::Complex(double re,double im)
:real(re),imaginary(im)
{

}//end constructor

ostream &operator<<(ostream &output,const Complex &number)
{
    cout<<"("<<number.real<<","<<number.imaginary<<")";
    return output;
}//end function operator<<


istream &operator>>(istream &input,Complex &number)
{
    input.ignore();//skip (
    input>>setw(3)>>number.real;//input real
    input.ignore();//skip ,
    input>>setw(3)>>number.imaginary;//input imaginary

    return input;

}//end function operator>>

Complex Complex::operator*(const Complex &operand2)const
{
    return Complex(real*operand2.real,imaginary*operand2.imaginary);
}//end function operator*


bool Complex::operator!=(const Complex &number)const
{
    Complex a,b;
    a.real=number.real;
    a.imaginary=number.imaginary;
    b.real=real;
    b.imaginary=imaginary;
    if((a.real==b.real)&&(a.imaginary==b.imaginary))
        return false;
    else
        return true;

}//end function operator!=


bool Complex::operator==(const Complex &number)const
{
    Complex a,b;
    a.real=number.real;
    a.imaginary=number.imaginary;
    b.real=real;
    b.imaginary=imaginary;
    if((a.real!=b.real)||(a.imaginary!=b.imaginary))
        return false;
    else
        return true;

}//end function operator!=

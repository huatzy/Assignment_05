#include <iostream>
#include "Complex.h"
std::ostream & operator<<(std::ostream & output,const Complex &object)//overload the << function
{
    output<<"("<<object.real<<","<<object.imaginary<<")";//to print the operand with (,) form
    return output;
}
std::istream & operator>>(std::istream & input, Complex &object)//overload the >> function
{
    input>>object.real;
    input.ignore();
    input>>object.imaginary;
    return input;
}
Complex::Complex(double realPart,double imaginaryPart)//construction with two parameter
:real(realPart),imaginary(imaginaryPart)//initialize the object
{

}
Complex Complex::operator+(const Complex &object2)const//overload the + function
{
    return Complex(real+object2.real,imaginary+object2.imaginary);
}
Complex Complex::operator-(const Complex &object2)const//overload the -function
{
    return Complex(real-object2.real,imaginary-object2.imaginary);
}
Complex Complex::operator*(const Complex &object2)const//overload the * function
{
    return Complex(real*object2.real+imaginary*object2.imaginary,imaginary*object2.real+real*object2.imaginary);
}
bool Complex::operator==(const Complex &object2)const//overload the == function
{
    if(real==object2.real &&imaginary==object2.imaginary)//compare the real and imaginary of two object
        return true;
    return false;
}
bool Complex::operator!=(const Complex &object2)const//overload the != function
{
    if((*this)==object2)//use the == overload function to judge the two object
        return false;
    return true;
}

//Complex.cpp
//Complex class member-function definitions
#include"Complex.h"

//constructor
Complex::Complex(double realPart, double imaginaryPart)
    :real(realPart),
    imaginary(imaginaryPart)
{
    //empty body
}   //end Complex constructor

//addition operator
Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}   //end function operator+

//subtraction operator
Complex Complex::operator-(const Complex &operand2) const
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}   //end function operator-

Complex Complex::operator*(const Complex &operand2) const
{
    return Complex(real*operand2.real-imaginary*operand2.imaginary,real*operand2.imaginary+imaginary*operand2.real);
}   //end function operator*

//equality operator
bool Complex::operator==(const Complex &operand2) const
{
    return (real==operand2.real&&imaginary==operand2.imaginary);
}

//overloaded input operator for class Complex
//inputs real and imaginary for class Complex
istream &operator>>(istream &input,Complex &complex)
{
    input.ignore(); //skip (
    input >> complex.real ;
    input.ignore(); //skip ,
    input >> complex.imaginary ;
    input.ignore(); //skip )

    return input;   //enable cin >> a >> b;
}   //endl function operator>>

//overloaded output operator
ostream &operator<<(ostream &output,const Complex &complex)
{
    output << "(" << complex.real << ", " << complex.imaginary << ")";

    return output;  //enable cout << a << b;
}


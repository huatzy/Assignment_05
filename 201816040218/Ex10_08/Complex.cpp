
#include "Complex.h"
Complex::Complex(double realPart, double imaginaryPart)
:real(realPart),
imaginary(imaginaryPart)
{
    //empty body
}//end Complex constructor

//addition operator
Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}//end function operator+

//subtraction operator-
Complex Complex::operator-(const Complex &operand2) const
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}//end function operator-

//display a Complex object in the form:(a, b)
void Complex::print()const
{
    cout << "(" << real << "," << imaginary << ")";
}//end function print

istream &operator>>(istream &input ,Complex &a)
{
    input>>a.real;
    input>>a.imaginary;
    return input;
}

ostream &operator<<(ostream &output , const Complex &a)
{
    output<<"(" << a.real << "," << a.imaginary << ")";
    return output;
}

Complex Complex::operator*(const Complex &operand2) const
{
    return Complex(real*operand2.real-imaginary*operand2.imaginary,real*operand2.imaginary+imaginary*operand2.real);
}

bool Complex::operator==(const Complex &operand2)
{
    return real==operand2.real&&imaginary==operand2.imaginary;
}

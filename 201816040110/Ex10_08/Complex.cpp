#include <iostream>
#include"Complex.h"
using namespace std;
Complex::Complex(double realpart ,double imaginarypart )
:real (realpart),imaginary(imaginarypart)
{
}
Complex Complex::operator*( const Complex &operand2 ) const
{
    return Complex (real*operand2.real-imaginary*operand2.imaginary,real*operand2.imaginary+operand2.real*imaginary);
}
Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex (real+operand2.real,imaginary+operand2.imaginary);
}
Complex Complex::operator-( const Complex &operand2 ) const
{
    return Complex (real-operand2.real,imaginary-operand2.imaginary);
}
ostream & operator<<( ostream &output, const Complex &a )
{
   output<<"("<<a.real<<" "<<a.imaginary<<")";
   return output; // enables concatenation
} // end function operator<<
istream &operator>>(istream &input ,Complex &a)
{
   input>>a.real;
   input>>a.imaginary;
   return input;
}

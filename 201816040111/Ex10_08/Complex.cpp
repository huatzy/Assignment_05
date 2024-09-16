#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex( double realPart , double imaginaryPart )
:real( realPart ), imaginary ( imaginaryPart )//Initialize member list to initialize private data members
{

}
// addition operator
Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex( real + operand2.real , imaginary + operand2.imaginary );
}
// subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
    return Complex( real - operand2.real , imaginary - operand2.imaginary );
}
// multiply operator
Complex Complex::operator*( const Complex &operand2 ) const
{
    return Complex( real * operand2.real , imaginary * operand2.imaginary );
}
//Determine if two complex numbers are equal
bool Complex::operator==( Complex &a )
{
    if (real == a.real && imaginary == a.imaginary)
        return true;
    else
        return false;
}
//Determine if two complex numbers are not equal
bool Complex::operator!=( Complex &a )
{
    if (real != a.real || imaginary != a.imaginary)
        return true;
    else
        return false;
}

istream &operator>>(istream &input, Complex &a)
{
    input >> a.real;//Enter a data as the real part of the complex
    input >> a.imaginary;//Enter a data as the imaginary part of the complex
    return input;
}

ostream &operator<<(ostream &output, const Complex &a)
{
    output << '(' << a.real << ", " << a.imaginary << ')';//complex output format
    return output;
}

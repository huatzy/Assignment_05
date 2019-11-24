#include <iostream>
#include "Complex.h"
using namespace std;

//Constructor
Complex::Complex( double realPart , double imaginaryPart )
:real( realPart ),
imaginary( imaginaryPart )
 {
     //empty body
 }//end Complex constructor

 //addition operator
 Complex Complex::operator+( const Complex &operand2 ) const
 {
     return Complex( real + operand2.real,
                    imaginary + operand2.imaginary );
 }//end function operator+

 //subtraction operator
 Complex Complex::operator-( const Complex &operand2 ) const
 {
     return Complex( real - operand2.real,
                    imaginary - operand2.imaginary );
 }//end function operator-


istream &operator>>( istream &input, Complex &number )//operator >>
{
    input.ignore();
    input >> number.real;
    input.ignore();
    input >> number.imaginary;
    input.ignore(2);

    return input;
}

ostream &operator<<( ostream &output, Complex &number )//operator <<
{
    if( number.imaginary == 0 )//judge the imaginary if it is 0
    {
        output << "The imaginary part is zero.\nSo the answer is: "
        << number.real;//make the imaginary become 0,and only show the real part
    }
    else
        output << "(" << number.real << " , "
    << number.imaginary << ")";//the imaginary is not 0,show the real and imaginary parts

    return output;
}

 Complex Complex::operator*( const Complex &operand2 ) const//operator *
 {
     return Complex( real * operand2.real - imaginary * operand2.imaginary,
                    real * operand2.imaginary + imaginary * operand2.real);//this is the way to multiply
 }//end function operator*

bool Complex::operator==( const Complex &number) const//judge two complexes are equal
{
    if ( number.real == real && number.imaginary == imaginary )
        return true;
    else
        return false;
}

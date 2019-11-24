// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );
} // end Complex constructor

Complex Complex::operator+( const Complex &right )const
{

     return Complex(realPart+right.realPart,imaginaryPart+right.imaginaryPart);//return real and imaginary part

} // end function operator +


Complex Complex::operator-( const Complex &right )const
{

      return Complex(realPart -right.realPart,imaginaryPart-right.imaginaryPart);//return real part and imaginary part

} // end function operator -
Complex Complex::operator*( const Complex &right )const
{
   return Complex(realPart*right.realPart-imaginaryPart*right.imaginaryPart,realPart*right.imaginaryPart+right.realPart*imaginaryPart) ;
}//end function operator *
bool Complex::operator==(const Complex & right)const
{
    if((realPart==right.realPart)&&(imaginaryPart==right.imaginaryPart))
        return true;
    return false;
}//end function operator ==
void Complex::setComplexNumber( double rp, double ip )
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber
ostream &operator<<(ostream &output,const Complex &c)
{
    output<<"("<<c.realPart<<","<<c.imaginaryPart<<")";
    return output;
}//end function operator <<
istream &operator>>(istream &input,Complex &d)
{
    input.ignore();
    input>>d.realPart;
    input.ignore();
    input>>d.imaginaryPart;
    input.ignore();
    return input;
}//end function operator >>

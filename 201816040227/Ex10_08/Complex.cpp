// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );
} // end Complex constructor

Complex Complex::operator+( const Complex &right )
{

	return Complex(right.realPart + realPart,right.imaginaryPart + imaginaryPart );

} // end function add

Complex Complex::operator-( const Complex &right )
{

	return Complex(realPart - right.realPart ,imaginaryPart - right.imaginaryPart );

} // end function subtract



void Complex::setComplexNumber( double rp, double ip )
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber

bool Complex::operator ==(const Complex &a)
{


     if(a.realPart==a.imaginaryPart )
    {
        return true;
    }
    else
    {
          return false;
    }
}
bool Complex::operator !=(const Complex &a)
{


     if(a.realPart==a.imaginaryPart )
    {
        return false;
    }
    else
    {
          return ture;
    }
}

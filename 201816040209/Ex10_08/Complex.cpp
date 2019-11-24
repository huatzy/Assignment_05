// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )
{
   setComplexNumber( real, imaginary );
} // end Complex constructor

Complex::~Complex()
{

}

Complex Complex::operator+(const Complex &right)
{
   /* Write a statement to return a Complex object. Add
      the realPart of right to the realPart of this Complex
      object and add the imaginaryPart of right to the
      imaginaryPart of this Complex object */

      Complex cx; //create one Complex object
      cx.realPart = realPart + right.realPart;
      cx.imaginaryPart = imaginaryPart + right.imaginaryPart;
      return cx;

} // end function add

Complex Complex::operator-( const Complex &right)
{
   /* Write a statement to return a Complex object. Subtract
      the realPart of right from the realPart of this Complex
      object and subtract the imaginaryPart of right from
      the imaginaryPart of this Complex object */
      Complex cx; //create one Complex object
      cx.realPart = realPart - right.realPart;
      cx.imaginaryPart = imaginaryPart - right.imaginaryPart;
      return cx;
} // end function subtract

Complex Complex::operator*( const Complex &right)
{
      Complex cx; //create one Complex object
      cx.realPart = realPart * right.realPart-imaginaryPart * right.imaginaryPart;
      cx.imaginaryPart = imaginaryPart*right.realPart + realPart*right.imaginaryPart;
      return cx;
} // end function subtract

//Overload equal sign operator and Overloaded inequality operator
bool Complex::operator==(const Complex &right)
{
    return (realPart==right.realPart&&imaginaryPart==right.imaginaryPart)?true:false;
}

bool Complex::operator!=(const Complex &right)
{
    return this==&right?false:true;
}

//Overloaded input and output operators
istream &operator>>(istream &input,Complex &op)
{
    double a=0,b=0;
    cout<<"Please input the value of x,(realPart,imaginaryPart)"<<endl;
    input>>a>>b;
    op.realPart=a;
    op.imaginaryPart=b;
    return input;
}

ostream &operator<<(ostream &output,const Complex &op)
{
    output<<"("<<op.realPart<<","<<op.imaginaryPart<<")";
    return output;
}


void Complex::setComplexNumber( double rp, double ip )
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber

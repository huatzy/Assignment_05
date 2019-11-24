// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
#include<string>
using namespace std;

#include "Complex.h"

Complex::Complex( double real, double imaginary )//之前发的模板
{
    realPart = real;//assign the value of the data to realPart
    imaginaryPart = imaginary;//assign the value of the data to imaginaryPart
} // end Complex constructor

Complex Complex::operator+( const Complex &right )const
{
    return Complex(realPart+right.realPart,imaginaryPart+right.imaginaryPart);//return the final result
} // end function add

Complex Complex::operator-( const Complex &right )const
{
    return Complex(realPart-right.realPart,imaginaryPart-right.imaginaryPart);//return the final result
} // end function subtract

Complex Complex::operator*( const Complex &right )const
{
    return Complex(realPart*right.realPart-imaginaryPart*right.imaginaryPart,imaginaryPart*right.realPart+realPart*right.imaginaryPart);//return the final result
} // end function
bool Complex::operator==(Complex &right)
{
    if(realPart==right.realPart&&imaginaryPart==right.imaginaryPart)//judge if they are equal
        return true;
    else
        return false;
}
bool Complex::operator!=(Complex &right)//judge if they are not equal
{
    if(realPart==right.realPart&&imaginaryPart==right.imaginaryPart)
        return false;
    else
        return true;
}
ostream &operator<<(ostream &output,const Complex &right)
{
    output<<"("<<right.realPart<<","<<right.imaginaryPart<<")";
    return output;
}
istream &operator>>(istream &input,Complex &right)
{
    input>>right.realPart>>right.imaginaryPart;
    //input>>right.imaginaryPart;
    return input;
}

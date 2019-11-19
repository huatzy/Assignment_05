//Complex.cpp
//Complex class member-function definitions
#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(double realPart,double imaginaryPart)//constructor function
    :real(realPart),
     imaginary(imaginaryPart)
{

}
Complex Complex::operator+(const Complex &str)const//addition function
{
    return Complex(real+str.real,imaginary+str.imaginary);
}//end function operator+
Complex Complex::operator-(const Complex &str)const//subtraction function
{
    return Complex(real-str.real,imaginary-str.imaginary);
}//end function operator-
Complex Complex::operator*(const Complex &str)const//multiplication function
{
    return Complex(real*str.real,imaginary*str.imaginary);
}//end function operator*
bool Complex::operator==(const Complex &str)const//equivalence function
{
    if(real==str.real&&imaginary==str.imaginary)
        return 1;
    else
        return 0;
}//end function operator ==
bool Complex::operator!=(const Complex &str)const//unequal function
{
    return !(*this==str);
}//end function operator !=
//cout << Complex
ostream &operator<<(ostream &output,const Complex &number)
{
    output << "( " <<number.real<<" , "<<number.imaginary<<" )";
    return output;
}//end function operator<<
istream &operator>>(istream &input,Complex &number)
{
    input.ignore(2);//skip ( and space
    input>>number.real;//input real
    input.ignore(3);//skip space , and space
    input>>number.imaginary;//input imaginary
    input.ignore(2);//skip space and )
    return input;
}//end function operator>>

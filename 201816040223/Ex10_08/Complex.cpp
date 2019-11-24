#include<iostream>
#include"Complex.h"//Complex class definition
using namespace std;
//Constructor
Complex::Complex(double realPart,double imaginaryPart)
:


    real(realPart),
    imaginary(imaginaryPart)
{


    //empty body

    //end Complex constructor
}
//addition operator
Complex Complex::operator+(const Complex &operand2)const
{

    return Complex(real+operand2.real,imaginary+operand2.imaginary);
    }
    //end function opreator+
    Complex Complex::operator*(const Complex &operand2)const
{

    return Complex(real*operand2.real,imaginary*operand2.imaginary);
    }
    //end function opreator+
Complex Complex::operator-(const Complex &operand2)const
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}
//end function operator-
//display a Complex object in the form :(a,b)
istream &operator>>(istream &input, Complex &opreand)
{
    input>>opreand.real;
    input>>opreand.imaginary;
    return input;


}
ostream &operator<<(ostream &output,const Complex &opreand )
{
    output<<"("<<opreand.real<<","<<opreand.imaginary<<")";
    return output;
}
bool Complex::operator==(const Complex &operand2)const
{
    if(real==operand2.real&&imaginary==operand2.imaginary)
        return true;
    else return false;
}
bool Complex::operator!=(const Complex &operand2)const
{
    if(real!=operand2.real&&imaginary!=operand2.imaginary)
        return true;
    else return false;
}

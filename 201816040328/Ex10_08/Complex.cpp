#include<iostream>
#include"Complex.h"

using namespace std;

//constructor
Complex::Complex(double a,double b)
  :real(a),
  imaginary(b)
  {
      //empty body
  };//end
//overload operator +
Complex Complex::operator+(const Complex &right)
{
   real=real+right.real;
   imaginary=imaginary+right.imaginary;
   return *this;
}//end

//overload operator -
Complex Complex::operator-(const Complex &right)
{
    return Complex(real-right.real,imaginary-right.imaginary);
}//end operator -
//overload operator *
Complex Complex::operator*( const Complex &right)
{
    return Complex(((real*right.real)-(imaginary*right.imaginary)),((real*right.imaginary)+(imaginary*right.real)));
}//end operator *

bool Complex::operator==(const Complex &right)
{
    if((real==right.real)&&(imaginary==right.imaginary))
        return true;
    return false;
}//end operator ==

bool Complex::operator!=(const Complex &right)
{
    return !(*this==right);
}//end function !=

 //overload input operator
 istream &operator>>(istream &input,Complex &a)
 {
    input>>a.real;
    input>>a.imaginary;

     return input;
 }//end
 //overload output operator
 ostream &operator<<(ostream &output,const Complex &a)
 {
     output<<'('<<a.real<<","<<a.imaginary<<')';


     return output;
 }//end

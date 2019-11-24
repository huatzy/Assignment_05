#include <iostream>
#include"Complex.h" // Complex class definition
using namespace std;
// Constructor
Complex::Complex( double realPart, double imaginaryPart )
  {
      real=realPart;
    imaginary=imaginaryPart;
}

Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex( real + operand2.real,imaginary + operand2.imaginary );
}
//subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
    return Complex( real - operand2.real,imaginary - operand2.imaginary);
}

//multiplication operator
Complex Complex::operator*( const Complex &operand2 ) const
{
    return Complex(real*operand2.real-imaginary*operand2.imaginary,
                   real*operand2.imaginary+imaginary*operand2.real);
}
//operator ==
bool Complex::operator==(const Complex &operand2 )const
{
    while(real==operand2.real&&imaginary==operand2.imaginary)
        {
            return true;
        }
    while(real!=operand2.real||imaginary!=operand2.imaginary)
        {
            return false;
}
}
//operator !=
bool Complex::operator!=(const Complex &operand2 )const
{
    return !(real==operand2.real&&imaginary==operand2.imaginary);
}
//input
istream &operator>>( istream &input, Complex &a )
{
    input>>a.real;
    input>>a.imaginary;
    return input;
}
//output
ostream &operator<<( ostream &output, const Complex &a )
{
    output<<'('<<a.real<<","<<a.imaginary<<')';
    return output;
}
void Complex::print() const
{

    cout<<'('<< real <<"," <<imaginary<<')';

}

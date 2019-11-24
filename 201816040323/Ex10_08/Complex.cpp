
#include <iostream>
#include <iomanip>
#include "Complex.h"

using namespace std;

Complex::Complex( double realPart, double imaginaryPart )
    : real( realPart ),
      imaginary( imaginaryPart )
{
    //empty body
}//end complex constructor

Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex( real + operand2.real,
                   imaginary + operand2.imaginary );
}//Overload the + operator

Complex Complex::operator-( const Complex &operand2 ) const
{
    return Complex( real - operand2.real,
                   imaginary - operand2.imaginary );
}//Overload the - operator

Complex Complex::operator*( const Complex &operand2 ) const
{
    return Complex( ( real * operand2.real ) - ( imaginary * operand2.imaginary ),
                   ( real * operand2.imaginary ) + ( imaginary * operand2.real ) );
}//Overload the * operator

bool Complex::operator==( const Complex &right ) const
{
    if ( (real == right.real) && (imaginary == right.imaginary) )
        return true;
    else
        return false;
}//Overload the == operator
bool Complex::operator!=( const Complex &right ) const
{
    if ( (real != right.real) || (imaginary != right.imaginary) )
        return true;
    else
        return false;
}//Overload the != operator

ostream &operator<<( ostream &output, const Complex &temp )
{
    output << fixed << setprecision( 2 );
    output << '(' << temp.real << ", " << temp.imaginary << ')';
    return output;
}//Overload the << operator

istream &operator>>( istream &input, Complex &temp )
{
    input.ignore();
    input >> temp.real;
    input.ignore( 2 );
    input >> temp.imaginary;
    input.ignore();
    return input;
}//Overload the >> operator

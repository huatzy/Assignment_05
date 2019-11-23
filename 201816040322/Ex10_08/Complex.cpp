// Assignment_05: Complex.cpp
// Complex class member-function definition
#include <iostream>
#include <iomanip>
#include "Complex.h" // Complex class definition

using namespace std;

// constructor
Complex::Complex( double realPart, double imaginaryPart )
    : real( realPart ),
      imaginary( imaginaryPart )
{
    // empty body
} // end Complex constructor

// addition operator
Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex( real + operand2.real,
                   imaginary + operand2.imaginary );
} // end function operator+

// subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
    return Complex( real - operand2.real,
                   imaginary - operand2.imaginary );
} // end function operator-

// multiply operator
Complex Complex::operator*( const Complex &operand2 ) const
{
    return Complex( ( real * operand2.real ) - ( imaginary * operand2.imaginary ),
                   ( real * operand2.imaginary ) + ( imaginary * operand2.real ) );
} // end function operator*

// equality operator
bool Complex::operator==( const Complex &right ) const
{
    if ( (real == right.real) && (imaginary == right.imaginary) )
        return true;
    else
        return false;
} // end function operator==

// overload output operator for class Complex
ostream &operator<<( ostream &output, const Complex &temp )
{
    output << fixed << setprecision( 2 );
    output << '(' << temp.real << ", " << temp.imaginary << ')';
    return output; // enable cout << x << y;
} // end function operator<<

// overload input operator for class Complex
// inputs value for entire Complex
istream &operator>>( istream &input, Complex &temp )
{
    input.ignore();
    input >> temp.real;
    input.ignore( 2 );
    input >> temp.imaginary;
    input.ignore();
    return input; // enables cin >> x >> y;
} // end function

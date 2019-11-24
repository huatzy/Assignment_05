#include <iostream>
#include <iomanip>
#include "Complex.h"

using namespace std;

Complex::Complex( double r, double i)
{
    real=r ;
    imaginary=i ;

}

Complex Complex::operator+( const Complex &b ) const
{
    Complex temp(0, 0) ;
    temp.real=real + b.real ;
    temp.imaginary=imaginary + b.imaginary ;
    return  temp ;
}

Complex Complex::operator-( const Complex &b) const
{
    Complex temp(0, 0) ;
    temp.real=real - b.real ;
    temp.imaginary=imaginary -b.imaginary ;
    return  temp ;
}
Complex Complex::operator*( const Complex &b ) const
{
    Complex temp (0, 0) ;
    temp.real=( real * b.real ) - ( imaginary * b.imaginary ) ;
    temp.imaginary=( real * b.imaginary ) + ( imaginary * b.real ) ;
    return temp ;
}
bool Complex::operator==( const Complex &right ) const
{
    if ( (real == right.real) && (imaginary == right.imaginary) )
        return true;
    else
        return false;
}
ostream &operator<<( ostream &output, const Complex &temp )
{
    output << fixed << setprecision( 2 );
    output << '(' << temp.real << ", " << temp.imaginary << ')';
    return output;
}
istream &operator>>( istream &input, Complex &temp )
{
    input.ignore();
    input >> temp.real;
    input.ignore( 2 );
    input >> temp.imaginary;
    input.ignore();
    return input;
}

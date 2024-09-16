#include <iostream>
#include"Complex.h"
using namespace std;

Complex::Complex(double sPart, double xPart)
    :s(sPart), x{xPart}
    {

    }
Complex Complex :: operator+(const Complex &operand2) const
{
    return Complex (s + operand2.s, x +operand2.x);

}
Complex Complex :: operator-(const Complex &operand2) const
{
    return Complex (s - operand2.s, x - operand2.x);


}
Complex Complex :: operator*(const Complex &operand2) const
{
    return Complex ( s * operand2.s- x * operand2.x,
                    x * operand2.s + s* operand2.x);
}
bool Complex::operator==( const Complex &operand2)
{
    return ( s == operand2.s && x == operand2.x );
}

bool Complex::operator!=( const Complex &operand2)
{
    return !( *this == operand2 );
}


istream &operator>>( istream &input , Complex &a )
{
    input >> a.s >> a.x;
    return input;
}

ostream &operator<<( ostream &output , const Complex &a )
{
    output <<"("<< a.s<<", "<< a.x<<")";
    return output;
}

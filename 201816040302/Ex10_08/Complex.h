//Ex10_18:Complex.h
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
using namespace std;
#include<iostream>
class Complex
{
    //overload input and output
    friend ostream &operator<<( ostream &, const Complex & );
    friend istream &operator>>( istream &, Complex & );
public:
    explicit Complex(double = 0.0, double = 0.0);
    Complex operator+( const Complex &) const;
    Complex operator-( const Complex &) const;
    Complex operator*( const Complex &) const;
    bool operator==(const Complex &) const;
    bool operator!=(const Complex &) const;
private:
    double real;//real part
    double imaginary;//imaginary part
};

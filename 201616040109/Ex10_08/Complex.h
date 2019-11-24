//Fig. 10.8:Complex.h
//Complex class definition.
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class Complex
{
    friend ostream &operator<<( ostream &, const Complex & );
   friend istream &operator>>(istream &,Complex &);
public:
    explicit Complex(double =0.0,double=0.0);//constructor
    Complex operator+(const Complex &)const;//addition
    Complex operator-(const Complex &)const;//subtraction
    Complex operator*(const Complex &)const;//multiply
    bool operator==( const Complex & ) const;//equality operator
    bool operator!=( const Complex & ) const;
private:
    double real;//real part
    double imaginary;//imaginary part
};//end class Complex


#endif // COMPLEX_H

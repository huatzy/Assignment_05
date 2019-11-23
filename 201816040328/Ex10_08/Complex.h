#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include<iostream>

using namespace std;

class Complex
{
    friend ostream &operator<<(ostream &,const Complex &);
    friend istream &operator>>(istream &,Complex &);
public:
    Complex(double =0.0,double =0.0);//constructor
    //arithmetic
    Complex operator+(const Complex &);//addition
    Complex operator-(const Complex &);//subtraction
    Complex operator*(const Complex &);//multiplication
    //judgment
    bool operator==(const Complex &);//equality
    bool operator!=(const Complex &);//inequality
private:
    double real;//real part
    double imaginary;//imaginary part
};


#endif // COMPLEX_H_INCLUDED

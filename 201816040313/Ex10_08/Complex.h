#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>

class Complex
{
    friend std::ostream &operator<<(std::ostream &, const Complex &);//overload output
    friend std::istream &operator>>(std::istream &, Complex &);//overload input
public:
    explicit Complex(double =0.0,double =0.0);//constructor
    Complex operator+(const Complex &)const;//overload +
    Complex operator-(const Complex &)const;//overload -
    Complex operator*(const Complex &)const;//overload *
    bool operator==(const Complex &)const;//overload ==
    bool operator!=(const Complex &)const;//overload !=
private:
    double real;
    double imaginary;
};
#endif // COMPLEX_H_INCLUDED

//Complex.h
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
class Complex
{
friend std::ostream &operator<<(std::ostream &,const Complex &);
friend std::istream &operator>>(std::istream &,Complex &);
public:
    explicit Complex(double =0.0,double = 0.0);//default constructor
    Complex operator+(const Complex &) const;//overload the + function
    Complex operator-(const Complex &)const;//overload the - function
    Complex operator*(const Complex &)const;//overload the * function
    bool operator==(const Complex &)const;//overload the == function
    bool operator!=(const Complex &)const;//overload the != function
private:
    double real;
    double imaginary;
};


#endif // COMPLEX_H_INCLUDED

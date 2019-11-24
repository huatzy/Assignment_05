
// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H


#include<string>
#include "Complex.h"

class Complex
{
    friend std::ostream &operator << (std::ostream &,const Complex &);
    friend std::istream &operator >> (std::istream &,Complex &);
public:
    explicit Complex(double=0.0,double=0.0);// constructor initializes real and imaginary
    Complex operator+(const Complex &)const;// function to add the data
    Complex operator-(const Complex &)const;// function to substract the data
    Complex operator*(const Complex &)const;// function to mutiply the data
    bool operator==(Complex &);//Judge whether two numbers are equal
    bool operator!=(Complex &);//Judge whether two numbers are not equal
private:
    double realPart;
    double imaginaryPart;

};

#endif // COMPLEX_H_INCLUDED

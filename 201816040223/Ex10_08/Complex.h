#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>

#endif // COMPLEX_H
using namespace std;
class Complex{
public:
    explicit Complex(double=0.0,double=0.0);
    Complex operator+(const Complex &) const;
    Complex operator-(const Complex &)const;
    Complex operator*(const Complex &)const;
    friend istream &operator>>(istream &, const Complex &);
    friend ostream &operator<<(ostream &, const Complex &);
    bool operator==(const Complex &)const;
    bool operator!=(const Complex &)const;

    double real;
    double imaginary;


    };

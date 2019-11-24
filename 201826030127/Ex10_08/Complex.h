#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
using namespace std;
#include<iostream>
class Complex
{
public:
    friend ostream & operator<<(ostream & ,const Complex &);
    friend istream & operator>>(istream & , Complex &);
    explicit Complex(double=0.0,double=0.0);
    Complex operator+(const Complex &) const;
    Complex operator-(const Complex &) const;
    Complex operator*(const Complex &) const;
    bool operator==(const Complex &) const;
    bool operator!=(const Complex &) const;

private:
    double real;
    double image;
};


#endif // COMPLEX_H_INCLUDED

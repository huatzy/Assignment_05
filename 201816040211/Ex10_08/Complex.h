#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Complex
{
    friend ostream &operator<<(ostream &, const Complex &);
    friend istream &operator>>(istream &, Complex &);
public:
    explicit Complex(double = 0.0, double = 0.0);
    Complex operator + (const Complex &) const;
    Complex operator - (const Complex &) const;
    Complex operator * (const Complex &) const;
    bool  operator == (const Complex &)const;
    bool  operator != (const Complex &)const;
private:
    double real;
    double imaginary;
}; //end complex




#endif // COMPLEX_H_INCLUDED

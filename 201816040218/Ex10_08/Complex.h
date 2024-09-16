#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>

using namespace std;
class Complex
{
    friend ostream &operator<<(ostream&, const Complex &);
    friend istream &operator>>(istream &, Complex &);
public:
    explicit Complex( double =0.0, double =0.0);//constructor
    Complex operator+(const Complex&) const ;//addition
    Complex operator-(const Complex&) const ;//subtraction
    Complex operator*(const Complex&) const ;//multi
    bool operator==(const Complex&);
    bool operator!=(const Complex& a)
    {
        return !(*this ==a);
    }
    void print() const ;//output
private:
    double real;//real part
    double imaginary;//imaginary part
};


#endif // COMPLEX_H_INCLUDED

#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Complex
{
    friend std::ostream &operator<<(std::ostream &,const Complex &);
    friend std::istream &operator>>(std::istream &, Complex &);
public:
    explicit Complex(double=0.0,double=0.0);//constructor
    Complex operator+(const Complex &)const;//addition
    Complex operator-(const Complex &)const;//subtration
    Complex operator*(const Complex &)const;//chnegfa
    bool operator!=(const Complex &) ;
    bool operator==(const Complex &);
private:
    double real;
    double imaginary;
};//end class Complex
#endif // COMPLEX_H_INCLUDED

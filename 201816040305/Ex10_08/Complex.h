#include<bits/stdc++.h>
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    //Declare a friend function
    friend std::ostream &operator<<(std::ostream &,const Complex &);
    friend std::istream &operator>>(std::istream &,Complex &);
public:
    //Declare other function
    explicit Complex(double = 0.0 , double = 0.0);
    Complex operator+(const Complex &) const ;
    Complex operator-(const Complex &) const ;
    Complex operator*(const Complex &) const ;
    bool operator==(const Complex &) const;
    bool operator!=(const Complex &) const;
private:
    //declare private member
    double real ;
    double imaginary ;
};

#endif // COMPLEX_H

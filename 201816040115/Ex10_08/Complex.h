//Complex.h
//Complex class definition
#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>

using namespace std;

class Complex
{
    friend istream &operator>>(istream &,Complex &);
    friend ostream &operator<<(ostream &,const Complex &);
public:
    explicit Complex(double = 0.0 , double = 0.0); //constructor
    Complex operator+(const Complex &) const;   // addition
    Complex operator-(const Complex &) const;   //subtraction
    Complex operator*(const Complex &) const;   //multiplication
    bool operator==(const Complex &) const; //equality operator

    //inequality operator; returns opposite of == operator, and its inline function
    bool operator!=(const Complex &right) const
    {
        return !(*this==right); //invokes Complex::operator==
    }   //end function operator!=

private:
    double real;    //real part
    double imaginary;   //imaginary part

};  //end class Complex

#endif // COMPLEX_H

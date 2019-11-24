//
//  Complex.h
//  Ex10_08
//
//  Created by misonomayubw on 2019/11/24.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef COMPLEX_H
#define COMPLEX_H


#include <iostream>
using namespace std;
class Complex
{

    friend ostream &operator<<(ostream & ,const Complex &);
    friend istream &operator>>(istream &,Complex &);
public:
    explicit Complex(double=0.0 ,double=0.0);
    Complex operator+(const Complex&) const;
    Complex operator-(const Complex&) const;
    Complex operator*(const Complex&) const;

    bool operator==(const Complex& );
    bool operator!=(const Complex& );
private:
    double real;
    double imaginary;
};

#endif // COMPLEX_H

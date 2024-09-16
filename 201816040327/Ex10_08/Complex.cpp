//
//  Complex.cpp
//  Ex10_08
//
//  Created by misonomayubw on 2019/11/24.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Complex.h"
#include <iomanip>
#include <stdexcept>

using namespace std;

Complex::Complex(double a,double b)

  :real(a),imaginary(b){}

Complex Complex::operator+(const Complex &right)const
{
    return Complex(real+right.real,imaginary+right.imaginary);
}
Complex Complex::operator-(const Complex &right)const
{
    return Complex(real-right.real,imaginary-right.imaginary);
}
Complex Complex::operator*(const Complex &right)const
{
    return Complex(real*right.real-imaginary*right.imaginary, real*right.imaginary+right.real*imaginary );
}

bool Complex::operator==(const Complex &right)
{
    if(real==r.real&&imaginary==r.imaginary)
        return true;
    else
        return false;
}
bool Complex::operator!=(const Complex &right)
{
    return !(*this==r);
}
istream &operator>>(istream &input, Complex &right)
{
    input>>right.real>>right.imaginary;

    return input;
}
ostream &operator<<(ostream &output, const Complex &right)
{
    output<<"("<<right.real<<"," <<right.imaginary <<")";

    return output;
}

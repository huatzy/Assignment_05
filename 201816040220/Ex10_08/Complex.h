#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex
{
    friend ostream &operator<<(ostream &, const Complex &);             //重载输出输入
    friend istream &operator>>(istream &,  Complex &);
public:
    explicit Complex(double=0.0,double=0.0);               //构造函数
    Complex operator+(const Complex &) const;             //重载+
    Complex operator-(const Complex &) const;             //重载-
    Complex operator*(const Complex &) const;              //重载*

    bool operator==(const Complex &) const;                 //重载==
    bool operator!=(const Complex &) const;                //重载！=

private:
    double real;
    double imaginary;
};

#endif

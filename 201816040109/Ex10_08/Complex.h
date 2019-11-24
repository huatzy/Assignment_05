#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class Complex
{
    friend ostream &operator<<(ostream &,const Complex &);
    friend istream &operator>>(istream &,Complex &);
public:
    explicit Complex(double =0.0,double =0.0);
    Complex operator+(const Complex &) const;   //两复数相加
    Complex operator-(const Complex &) const;   //两复数相减
    Complex operator*(const Complex &) const;   //两复数相乘
    bool operator==(const Complex &) const;
    bool operator!=(const Complex &right) const //判断两复数是否相等
    {
        return!(*this == right);
    }
private:
    double real;//实部
    double imaginary;//虚部
};
#endif // COMPLEX_H

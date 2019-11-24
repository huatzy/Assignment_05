#include<iostream>
#ifndef COMPLEX_H
#define COMPLEX_H

 using namespace std;
class Complex
{
    friend ostream &operator<<(ostream &,const Complex &);//重载<<运算符
    friend istream &operator>>(istream &,Complex &);//重载>>运算符
public:
    explicit Complex(double=0.0,double=0.0);//构造函数
    Complex operator+(const Complex &)const;//分别重载+，-，*，==，！=运算符
    Complex operator-(const Complex &)const;
    Complex operator*(const Complex &)const;
    bool operator==(const Complex &com)const;
    bool operator!=(const Complex &com)const;
private:
    double real;//实部
    double imaginary;//虚部
};
#endif // COMPLEX_H

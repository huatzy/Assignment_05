#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
#include<string>
class Complex
{
     //声明流插入和流提取符
     friend std::ostream &operator<<(std::ostream &,const Complex &);
     friend std::istream &operator>>(std::istream &,Complex &);
public:
    Complex(double=0.0,double=0.0);
    Complex operator+(const Complex &)const;
    Complex operator-(const Complex &)const;
    Complex operator*(const Complex &)const;
    bool operator==(const Complex &)const;
    bool operator!=(const Complex &)const;
private:
    //声明数据成员
    double real;
    double imaginary;
};
#endif

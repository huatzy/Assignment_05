//Fig.10.14:Complex.h
//complexclass denfinition.
#ifndef COMPLEX_H
#define COMPLEX_H
#include<bits/stdc++.h>
using namespace std;
class Complex
{
    friend std::ostream &operator<<(std::ostream &,const Complex &);
    friend std::istream &operator>>(std::istream &, Complex &);
public:
    explicit Complex(double = 0.0,double = 0.0);//construcor
    void setRealPart(double);
    double getRealPart();
    void setImginaryPart(double);
    double getImginaryPart();
    Complex operator+(const Complex &)const;//addtion
    Complex operator-(const Complex &)const;//subtraction
    Complex operator*(const Complex &)const;

    bool operator==(const Complex &)const;
    bool operator!=(const Complex &)const;
private:
    double real;//real part
    double imaginary;//imaginary part
};//end class Complex
#endif // COMPLEX_H

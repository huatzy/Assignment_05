#include"Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(double r = 0,double i= 0):real(r),imag(i){};

void Complex::setReal(double r)
{
    real = r;
}

void Complex::setImag(double i)
{
    imag = i;
}

double Complex::getReal()
{
    return real;
}

double Complex::getImag()
{
    return imag;
}

Complex Complex::operator*(const Complex & c)
{
    Complex temp(0,0);
    temp.setReal(real*c.getReal());
    temp.setImag(imag*c.getImag());
    return temp;
}

ostream & Complex::operator<<(ostream & os,const Complex & c)
{
    os << c.real << "+" << c.imag << "i";
    return os;
}

istream & operator>>(istream & is,Complex & c)
{
    string s;
    is >> s;
    int pos = s.find("+",0);
    string sTmp = s.substr(0,pos);
    c.real = atof(sTmp.c_str());
    sTmp = s.substr(pos+1,s.length()-pos-2);
    c.imag = atof(sTmp.c_str());
    return is;
}


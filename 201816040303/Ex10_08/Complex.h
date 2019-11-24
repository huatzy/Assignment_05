#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
#include<cstdlib>

using namespace std;

class Complex
{
private:
    double real,imag;
public:
    Complex (double,double);
    void setReal(double);
    void setImag(double);
    double getReal();
    double getImag();
    Complex operator*(const Complex & c);
    friend ostream & operator<<(ostream & ,const Complex &);
    friend istream & operator>>(istream &,Complex &);

};


#endif // COMPLEX_H_INCLUDED

// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
#include <string> // program uses C++ standard string class
using namespace std;
class Complex
{
    friend std::ostream &operator<<(std::ostream &,const Complex &);
    friend std::istream &operator>>(std::istream &,Complex &);
public:
    Complex(double real=0,double imaginary=0);//constructor
    Complex operator+(const Complex&)const;//function operator +
    Complex operator-(const Complex&)const;//function operator -
    Complex operator*(const Complex&)const;//function operator *
    bool operator==(const Complex &)const;//function operator ==
    bool operator!=(const Complex & right)const
    {
        return !(*this==right);
    }//function operator !=
    void setComplexNumber(double,double);//function to set realPart and imaginaryPart
 private:
     double realPart;//real part in the Complex
     double imaginaryPart;//imaginary part in the Complex
};

#endif


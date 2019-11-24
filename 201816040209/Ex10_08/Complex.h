// Lab 4: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
using namespace std;

/* Write class definition for Complex */
class Complex
{
    //Overloaded input and output operators
    friend istream &operator>>(istream &,Complex &);
    friend ostream &operator<<(ostream &,const Complex &);
public:
    Complex( double=0,double=0 );//constructor
    ~Complex();//Destructor

    Complex operator+(const Complex& );//addition
    Complex operator-(const Complex& );//subtraction
    Complex operator*(const Complex& );//Multiply

    //Overload equal sign operator and Overloaded inequality operator
    bool operator==(const Complex& );
    bool operator!=(const Complex& );

    void setComplexNumber( double,double);//set function
private:
    double realPart;
    double imaginaryPart;
};
#endif



//Fig. 10.14:Complex.h
//Complex class definition
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    friend std::ostream &operator<<(std::ostream &,const Complex &);
    friend std::istream &operator>>(std::istream &,Complex &);
public:
    explicit Complex(double=0.0,double=0.0);//constructor
    Complex operator+(const Complex &)const;
    Complex operator-(const Complex &)const;
    Complex operator*(const Complex &)const;
    bool operator==(const Complex &)const;
    bool operator!=(const Complex &)const;
private:
    double real;
    double imaginary;
};
#endif // COMPLEX_H

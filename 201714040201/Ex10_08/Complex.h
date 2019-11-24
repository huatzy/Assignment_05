//Complex.h
//Comply class definition
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    friend std::ostream &operator<<(std::ostream &,const Complex &);
    friend std::istream &operator>>(std::istream &,Complex &);
public:
    explicit Complex(double=0.0,double = 0.0);//constructor
    Complex operator*(const Complex &)const;//multiplication
    Complex operator+(const Complex &)const;//addition
    Complex operator-(const Complex &)const;//subtraction
    bool operator==(const Complex &)const;//equivalence
    bool operator!=(const Complex &)const;//unequal
private:
    double real;//real part
    double imaginary;//imaginary part
};//end class Complex

#endif // COMPLEX_H

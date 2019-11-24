//Ex10_08:Complex.h

#ifndef CIMPLEX_CPP_INCLUDED
#define CIMPLEX_CPP_INCLUDED

class Complex
{
    friend std::ostream &operator<<(std::ostream &,const Complex &);//重载<<运算符
    friend std::istream &operator>>(std::istream &,Complex &);//重载>>运算符
public:
    Complex(double = 0.0 , double = 0.0 );//constructor
    Complex operator+(const Complex &) const;//重载=运算符
    Complex operator-(const Complex &) const;//重载-运算符
    Complex operator*(const Complex &) const;//重载*运算符
    bool operator==(const Complex &) const;//重载==运算符
    bool operator!=(const Complex &) const;//重载!=运算符
private:
    double real;//real part
    double imaginary;// imaginary part
};


#endif // CIMPLEX_CPP_INCLUDED

#ifndef COMPLEX_H
#define CONPLEX_H

class Complex
{
    friend std::ostream &operator<<( std::ostream &, const Complex &);
    friend std::istream &operator>>( std::istream &, Complex &);
public:
    explicit Complex( double = 0.0, double = 0.0);
    Complex operator+(const Complex &) const;   //addition
    Complex operator-(const Complex &) const;   //subtraction
    Complex operator*(const Complex &) const;   //multiplication
    bool operator==(const Complex &) const; //equal
    bool operator!=(const Complex &) const; //unequal
private:
    double real;//real part
    double imaginary;//imaginary part
};
#endif



#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    friend std::ostream &operator<<( std::ostream &, const Complex & );
    friend std::istream &operator>>( std::istream &, Complex & );
public:
    explicit Complex( double = 0, double = 0 );
    Complex operator+( const Complex &) const;//Overload the + operator
    Complex operator-( const Complex &) const;//Overload the - operator
    Complex operator*( const Complex &) const;//Overload the * operator

    bool operator==( const Complex & ) const;//Overload the == operator
    bool operator!=( const Complex & ) const;//Overload the != operator
private:
    double real;
    double imaginary;
};

#endif

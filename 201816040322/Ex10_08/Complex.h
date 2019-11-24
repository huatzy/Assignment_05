// Assignment_05: Complex.h
// Complex class definition.
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    friend std::ostream &operator<<( std::ostream &, const Complex & );
    friend std::istream &operator>>( std::istream &, Complex & );
public:
    explicit Complex( double = 0, double = 0 ); // constructor
    Complex operator+( const Complex &) const; // addition
    Complex operator-( const Complex &) const; // subtraction
    Complex operator*( const Complex &) const; // multiply

    bool operator==( const Complex & ) const; // equality operator

    // inequality operator; returns opposite of == operator
    bool operator !=( const Complex &right ) const
    {
        return !( *this == right ); // invokes Complex::operator==
    } // end function operator !=
private:
    double real; // real part
    double imaginary; // imaginary part
}; // end class Complex

#endif // COMPLEX_H

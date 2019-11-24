#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

using namespace std;

#endif // COMPLEX_H_INCLUDED

class Complex
{
    friend istream &operator>>( istream &, Complex & );
    friend ostream &operator<<( ostream &, Complex & );
public:
    explicit Complex( double = 0.0, double = 0.0 );//constructor
    Complex operator+( const Complex & ) const;//addition
    Complex operator-( const Complex & ) const;//subtraction
    Complex operator*( const Complex & ) const;//multiply
    bool operator==( const Complex &) const;//judge equal
    bool operator!=( const Complex &right ) const//judge not equal
    {
        return !(*this == right );
    }

private:
    double real;//real part
    double imaginary;//imaginary part
};//end class Complex

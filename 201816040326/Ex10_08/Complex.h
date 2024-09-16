#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
using namespace std;

class Complex
{
    friend istream &operator>>(istream &,Complex & );
    friend ostream &operator<<(ostream &,const Complex & );
public:
    Complex( double =0.0, double =0.0 );
    bool operator==( const Complex & ) const;
    bool operator!=( const Complex & ) const;
    Complex operator+( const Complex & ) const;
    Complex operator-( const Complex & ) const;
    Complex operator*( const Complex & ) const;
private:
    double real;
    double imag;
};
#endif // COMPLEX_H_INCLUDED

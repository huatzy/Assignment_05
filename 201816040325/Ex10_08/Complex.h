#include<iostream>

using namespace std;

class Complex
{

    friend istream &operator>>(istream &,Complex & );
    friend ostream &operator<<(ostream &,const Complex & );
public:
    explicit Complex( double =0.0, double =0.0 ); // constructor
    Complex operator+( const Complex & ) const; //  addition
    Complex operator-( const Complex & ) const; // subtraction
    Complex operator*( const Complex & ) const; // multiplication
    bool operator==( const Complex & ) const;
    bool operator!=( const Complex & ) const;
private:
    double real; // rea1 part
    double imaginary; // imaginary part
};

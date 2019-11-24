#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
class Complex
{
	friend std::istream &operator>>(std::istream &, Complex &);
	friend std::ostream &operator<<(std::ostream &,const Complex &);
	
public:
	explicit Complex(double = 0.0,double = 0.0);
	Complex operator+( const Complex &) const;
	Complex operator-( const Complex &) const;
	Complex operator*( const Complex &) const;
	bool operator==(const Complex &) const;
	bool operator!=(const Complex &) const;
private:
	double real;
	double imaginary; 
};
#endif

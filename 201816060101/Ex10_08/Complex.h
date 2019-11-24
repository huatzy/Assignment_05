#include<bits/stdc++.h>

class Complex
{
public:
	Complex(double = 0, double = 0);
	Complex operator+(const Complex &b) const;
	Complex operator-(const Complex &b) const;
	Complex operator*(const Complex &b) const;
	bool operator==(const Complex &b) const;
	bool operator!=(const Complex &b) const;
	friend ostream &operator<<(ostream &out, const Complex &a);
	friend istream &operator>>(istream &out, const Complex &a);
private:
	double real;
	double imaginary;
};

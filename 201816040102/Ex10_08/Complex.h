 #ifndef COMPLEX_H
 #define COMPLEX_H
 #include <iostream> 
 using namespace std;
 class Complex
 {
 	friend istream &operator>>(istream &,Complex &);
 	friend ostream &operator<<(ostream &,Complex &);
public:
	explicit Complex(double,double);
	Complex operator+(const Complex &) const;
	Complex operator-(const Complex &) const;
	Complex operator*(const Complex &) const;
	bool operator ==(const Complex &) const;
	bool operator !=(const Complex &) const;	
private:
	double real;
	double imaginary;
	
 };
 
 #endif

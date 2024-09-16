#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;



class Complex
{
    friend ostream &operator<<( std::ostream &, const Complex &);
    friend istream &operator>>( std::istream &, Complex &);

public:
    explicit Complex(double =0.0,double =0.0);
    Complex operator+(const Complex &) const;
    Complex operator-(const Complex &) const;
    bool operator==(const Complex &) const;
    bool operator!=(const Complex &) const;
    Complex operator*(const Complex &) const;
    void print() const;

private:
    double real;
    double imaginary;


};

#endif // COMPLEX_H

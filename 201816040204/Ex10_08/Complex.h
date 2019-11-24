#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
    friend std::ostream &operator << (std::ostream &, const Complex &);
    friend std::istream &operator >> (std::istream &, Complex &);
public:
    explicit Complex(double = 0.0, double = 0.0);
    Complex operator+(const Complex &) const;
     Complex operator-(const Complex &) const;
      Complex operator*(const Complex &) const;
      bool operator == (const Complex &);
      bool operator != (const Complex &);
private:
    double s;
    double x;

};
#endif

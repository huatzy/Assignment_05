#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
using namespace std;
class Complex
{
    friend ostream &operator<<( ostream &,const Complex &);
    friend istream &operator>>( istream &,Complex &);
public:
    explicit Complex (double=0 ,double=0 );
    Complex operator+(const Complex &);
    Complex operator-(const Complex &);
    Complex operator*(const Complex &);
    bool operator==(const Complex &);
    bool operator!=(const Complex &);
private:
    double real;
    double imaginary;
};

#endif // COMPLEX_H_INCLUDED

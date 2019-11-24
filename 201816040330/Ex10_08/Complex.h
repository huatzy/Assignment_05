#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

using namespace std;

class Complex
{
    friend ostream &operator<<(ostream &,const Complex &);
    friend istream &operator>>(istream &,Complex &);


public:
    explicit Complex(double=0.0,double=0.0);//constructor
    Complex operator*(const Complex &)const;//multiply
    bool operator==(const Complex &)const;
    bool operator!=(const Complex &)const;


private:
    double real;//real part
    double imaginary;//imaginary part

};//end class Complex


#endif // COMPLEX_H_INCLUDED

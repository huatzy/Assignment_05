#include<iostream>
using namespace std;
class Complex{
    friend istream& operator>>(istream&,Complex&);
    friend ostream& operator<<(ostream&,const Complex&);
    private:
        double real;
        double imaginary;
    public:
        explicit Complex(double=0.0,double=0.0);
        Complex operator+(const Complex&) const;
        Complex operator-(const Complex&) const;
        Complex operator*(const Complex&) const;
        bool operator==(const Complex&) const;
        bool operator!=(const Complex& right) const{
            return !(*this==right);
        }
        void print() const;
};

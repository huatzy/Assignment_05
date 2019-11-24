#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
using namespace std;
class Complex
{
    friend ostream &operator<<(ostream&,Complex&);
    friend istream &operator>>(istream&,Complex&);
public:
    Complex(int , int );
    void setRPart(int);
    void setIPart(int);
    int  getRPart();
    int  getIPart();
    bool operator==(Complex&);
    bool operator!=(Complex&);
    Complex operator*(Complex&);

private:
    int rPart, iPart;

};




#endif // COMPLEX_H_INCLUDED

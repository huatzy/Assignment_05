#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include<iostream>
using std::istream;
using std::ostream;

#endif // COMPLEX_H_INCLUDED

class complex
{
    friend istream &operator>>(istream &,complex &);
    friend ostream &operator<<(ostream &,const complex &);
public:
    complex(double=1.0,double=0.0);
    complex operator=(const complex&);
    complex operator*(const complex&)const;
    complex operator-(const complex&)const;
    complex operator+(const complex&)const;
    bool operator!=(const complex&)const;
    bool operator==(const complex&)const;
private:
    double True;
    double fiction;
};

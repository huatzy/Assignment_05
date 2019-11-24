#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(int r, int i)
{
    setRPart(r);
    setIPart(i);
}

void Complex::setIPart(int i)
{
   iPart=i;
}

void Complex::setRPart(int r)
{
    rPart=r;
}

int Complex::getIPart()
{
    return iPart;
}

int Complex::getRPart()
{
    return rPart;
}

ostream& operator<<(ostream &output, Complex &t)
{
    output<<"("<<t.getRPart()<<","<<t.getIPart()<<")"<<endl;
}

istream& operator>>(istream &input, Complex &t)
{
    int r,i;
    cin>>r;
    cin>>i;
    t.setRPart(r);
    t.setIPart(i);
}

Complex Complex::operator*( Complex &t)
{
    Complex s(0,0);
    s.setRPart(rPart*t.rPart-iPart*t.iPart);
    s.setIPart(rPart*t.iPart+iPart*t.rPart);
    return s;
}

bool Complex::operator==(Complex &t)
{
    if(rPart==t.rPart&&iPart==t.iPart)
        return true;
    else
        return false;
}

 bool Complex::operator!=(Complex &t)
 {
     if(*this==t)
        return false;
     else
        return true;

 }

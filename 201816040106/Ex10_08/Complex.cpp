#include<iostream>
#include"Complex.h"
using namespace std;
Complex::Complex(double realPart,double imaginaryPart):real(realPart),imaginary(imaginaryPart){}
Complex Complex::operator+(const Complex & right) const{
    return Complex(real+right.real,imaginary+right.imaginary);
}
Complex Complex::operator-(const Complex & right) const{
    return Complex(real-right.real,imaginary-right.imaginary);
}
Complex Complex::operator*(const Complex & right) const{
    return Complex(real*right.real-imaginary*right.imaginary,real*right.imaginary+right.real*imaginary);
}
bool Complex::operator==(const Complex &right) const{
    if(real!=right.real||imaginary!=right.imaginary) return false;
    return true;
}
void Complex::print() const{
    cout<<"("<<real<<","<<imaginary<<")"<<endl;
}
istream& operator>>(istream& input,Complex& a){
    input>>a.real>>a.imaginary;
    return input;
}
ostream& operator<<(ostream& output,const Complex& a){
    output<<"("<<a.real<<","<<a.imaginary<<")";
    return output;
}

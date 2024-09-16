#include <iostream>
#include "Complex.h"

using namespace std;

//Ĭ�Ϲ��캯��
Complex::Complex(double a,double b):real(a),imaginary(b)
{

}

//���·ֱ�����+��-��*��/
Complex Complex::operator+( const Complex &right) const
{
    return Complex(real + right.real,imaginary+right.imaginary);
}

Complex Complex::operator-( const Complex &right) const
{
    return Complex(real - right.real,imaginary-right.imaginary);
}
//����<< >>
ostream &operator <<(ostream &output,const Complex &right)
{
    output <<right.real<<"+"<<right.imaginary<<"*i";

    return output;
}
istream &operator >>(istream &input,Complex &right)
{
    input >> right.real >> right.imaginary;

    return input;
}
//����==����=
bool Complex::operator==(const Complex &right) const
{
    if(real==right.real)
    {
        if(imaginary==right.imaginary)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
 bool Complex::operator!=(const Complex &right) const
 {
    if(*this==right)
    {
        return false;
    }
    else
    {
        return true;
    }
 }

 //����*,ʹ������ˡ�
 Complex Complex::operator*(Complex &right)
 {
    Complex temp;
    temp.real=real*right.real+imaginary*right.imaginary;
    temp.imaginary=real*right.imaginary+imaginary*right.real;

    return temp;
 }

#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class Complex
{
    friend ostream &operator<<(ostream &,const Complex &);
    friend istream &operator>>(istream &,Complex &);
public:
    explicit Complex(double =0.0,double =0.0);
    Complex operator+(const Complex &) const;   //���������
    Complex operator-(const Complex &) const;   //���������
    Complex operator*(const Complex &) const;   //���������
    bool operator==(const Complex &) const;
    bool operator!=(const Complex &right) const //�ж��������Ƿ����
    {
        return!(*this == right);
    }
private:
    double real;//ʵ��
    double imaginary;//�鲿
};
#endif // COMPLEX_H

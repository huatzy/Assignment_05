#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <cmath>
class Complex
{
    //��Ҫ���������룬���
    friend std::ostream &operator<<( std::ostream &,const Complex &);
    friend std::istream &operator>>( std::istream &,Complex &);
public:
    explicit Complex(double =0.0 ,double =0.0 );//Ĭ�Ϲ��캯��
    //+,-,*,/
    Complex operator+(const Complex &)const;
    Complex operator-(const Complex &)const;
    Complex operator*(Complex &);
    bool operator==(const Complex &)const;
    bool operator!=(const Complex &)const;
private:
    double real;//ʵ��
    double imaginary;//�鲿
};

#endif // COMPLEX_H_INCLUDED

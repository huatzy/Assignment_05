#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <cmath>
class Complex
{
    //按要求重载输入，输出
    friend std::ostream &operator<<( std::ostream &,const Complex &);
    friend std::istream &operator>>( std::istream &,Complex &);
public:
    explicit Complex(double =0.0 ,double =0.0 );//默认构造函数
    //+,-,*,/
    Complex operator+(const Complex &)const;
    Complex operator-(const Complex &)const;
    Complex operator*(Complex &);
    bool operator==(const Complex &)const;
    bool operator!=(const Complex &)const;
private:
    double real;//实部
    double imaginary;//虚部
};

#endif // COMPLEX_H_INCLUDED

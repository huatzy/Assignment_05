#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
    friend std::ostream &operator<<(std::ostream &,const Complex &);//重载<<
    friend std::istream &operator>>(std::istream &,Complex &);//重载>>
public:
    Complex(double=0,double=0);//声明构造函数
    /*重载+,-,*,==,!=运算符*/
    Complex operator+(const Complex &)const;
    Complex operator-(const Complex &)const;
    Complex operator*(const Complex &)const;
    bool operator==(const Complex &)const;
    bool operator!=(const Complex &)const;
private:
    double real;//数据成员实部
    double imaginary;//数据成员虚部
};
#endif // COMPLEX_H_INCLUDED

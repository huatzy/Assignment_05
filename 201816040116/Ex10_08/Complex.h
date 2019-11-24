#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
class Complex
{
    friend std::ostream &operator<<(std::ostream &,const Complex &);    //重载插入流运算符
    friend std::istream &operator>>(std::istream &,Complex &);      //重载提取流运算符
public:
    Complex(double=0.0,double=0.0); //构造函数
    Complex operator*(Complex &);   //计算两复数相乘
    bool operator==(const Complex &);   //判定两复数是否相同
    bool operator!=(const Complex &);   //判定两复数是否不同
private:
    double real=0.0;
    double imaginary=0.0;
};
#endif // COMPLEX_H_INCLUDED

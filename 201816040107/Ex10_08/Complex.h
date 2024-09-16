#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
class Complex
{
        friend::std::ostream &operator<<(std::ostream &,const Complex &);//将重载输出流设为友元；
        friend::std::istream &operator>>(std::istream &,Complex &);//将重载输入流设为友元；

    public:
        explicit Complex(double=0.0,double=0.0);
        Complex operator+(const Complex &)const;
        Complex operator-(const Complex &)const;

        Complex operator*(const Complex &)const;//声明重载*运算符；
        bool operator==(const Complex &) const;//声明重载==运算符；
        bool operator!=(const Complex &) const;//声明重载！=运算符；
    private:
        double real;
        double imaginary;
};


#endif // COMPLEX_H_INCLUDED

#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>
using namespace std;

class Array
{
    //作为友元函数进行重载
    friend ostream &operator<<(ostream &,const Array &);
    friend istream &operator>>(istream &,Array &);
public:
    explicit Array(int = 10);//构造函数
    Array(const Array &);//构造函数
    ~Array();//析构函数
    size_t getSize() const;//得到下标
    const Array &operator= (const Array&);//等于运算符
    bool operator ==( const Array &) const;//重载等于运算符
    bool operator !=(const Array &right) const
    {
        return ! (*this ==right);
    }
    int &operator()(int );//重载括号运算符
    int operator()(int ) const;
    int  operator()(int ,int ) const;

private:
    size_t size;
    int *ptr;



};





















#endif // ARRAY_H

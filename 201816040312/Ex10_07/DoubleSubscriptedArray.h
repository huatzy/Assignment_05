#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H
#include <iostream>

using namespace std;

class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);//重载<<运算符
    friend istream &operator>>(istream &,DoubleSubscriptedArray &);//重载>>运算符
public:
    explicit DoubleSubscriptedArray(int=2,int=2);//构造函数
    DoubleSubscriptedArray(const DoubleSubscriptedArray &);//类的复制
    ~DoubleSubscriptedArray();//类的析构函数
    size_t getsize()const;//返回数组的长度

    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//重载赋值运算符
    bool operator==(const DoubleSubscriptedArray &)const;//重载==运算符
    bool operator!=(const DoubleSubscriptedArray &right)const//重载！=运算符
    {
        return !(*this==right);
    }
    int &operator()(int,int);//查找数组函数（左值)
    const int &operator()(int,int)const;//查找数组函数（右值）
private:
    size_t a,b;//查找数组的下标
    size_t len,wid;//建立数组的长和宽
    size_t size;
    int *ptr;

};
#endif // DOUBLESUBSCRIPTEDARRAY_H

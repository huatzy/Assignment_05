#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include<iostream>
using namespace std;
#define N 100
class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &); //重载输出流
    friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);   //重载插入流
public:
    DoubleSubscriptedArray(int,int);    //构造函数
    int operator()(int,int)const;   //重载（）使其可作为右值
    int &operator()(int,int);   //重载（）使其可作为左值
    DoubleSubscriptedArray &operator=(DoubleSubscriptedArray &);    //重载=，复制对象值
    bool operator==(const DoubleSubscriptedArray &)const;   //重载=，判定两数组是否一样
    bool operator!=(const DoubleSubscriptedArray &)const;   //重载=，判定两数组是否不一样
private:
    int ar[N];
    int i=0;
    int j=0;
};
#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

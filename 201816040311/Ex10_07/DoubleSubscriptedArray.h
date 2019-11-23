#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include <vector>
#include <iostream>
using namespace std;

class DoubleSubscriptedArray
{
    //重载cin,cout,变为友元函数，实现按要求输入输出
    friend std::ostream &operator<<( std::ostream &,const DoubleSubscriptedArray &);
    friend std::istream &operator>>( std::istream &,DoubleSubscriptedArray &);
public:
    //默认构造函数
    DoubleSubscriptedArray(int,int);
    int &operator()(int,int);//重载（）运算符，实现左值调用
    int &operator()(const int ,const int) const;//重载（）运算符，实现右值调用
    bool operator==(DoubleSubscriptedArray &);//重载==运算符
    bool operator!=(DoubleSubscriptedArray &);//重载！=运算符，引用==运算符
    DoubleSubscriptedArray &operator=(DoubleSubscriptedArray &);//重载=运算符
private:
    int rows=1;//行数
    int columns=1;//列数
    vector<int>darray;//将二维数组存入vector变量
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

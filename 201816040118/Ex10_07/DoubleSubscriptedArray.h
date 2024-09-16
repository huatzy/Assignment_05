#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H

#include <iostream>
class DoubleSubscriptedArray
{
    //声明流插入和流提取运算符
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
    friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);
public:
    //声明函数
    DoubleSubscriptedArray(int,int);
    int &operator()(int,int);
    int &operator()(int,int)const;
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
    bool operator==(const DoubleSubscriptedArray &)const;
    bool operator!=(const DoubleSubscriptedArray &)const;
private:
    //声明数据成员
    int x;
    int y;
    int *ptr;
};
#endif

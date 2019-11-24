#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H
#include <iostream>
using namespace std;

class DoubleSubscriptedArray

{
    friend ostream &operator<<(ostream &, const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &, DoubleSubscriptedArray &);
public:
    explicit DoubleSubscriptedArray(int =2,int =2);
    DoubleSubscriptedArray(const DoubleSubscriptedArray &);
    ~DoubleSubscriptedArray();
    void setSize(int ,int );
    int getSize() const;
    //查找函数
    void seekDoubleSubscriptedArray(int ,int );
    //运算符重载
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray&);
    bool operator==(const DoubleSubscriptedArray &) const;
    bool operator!=(const DoubleSubscriptedArray &) const;
    int &operator()(int,int);
    int operator()(int,int) const;
private:
    int row;
    int column;
    int size;
    int *ptr;

};
#endif

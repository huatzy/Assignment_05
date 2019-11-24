#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;
class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &,DoubleSubscriptedArray &);
   public:
    DoubleSubscriptedArray(int=10,int=10);
    int &operator()(int,int);
    const int &operator()(int,int) const;

    bool operator==(DoubleSubscriptedArray &);//声明重载==函数；
    bool operator!=(DoubleSubscriptedArray &);//声明重载！=函数；
    DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
   private:
    int row,column;
    vector <int> s;//声明一个vector类型的数组；

};


#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

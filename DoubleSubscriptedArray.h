#include <iostream>
#include <string> 
using namespace std;       // program uses C++ standard  class


class  DoubleSubscriptedArray
{
    friend ostream &operator <<(ostream& ,const DoubleSubscriptedArray &);
    friend istream &operator >>(istream& ,DoubleSubscriptedArray &);
public:
       DoubleSubscriptedArray(int = 10,int = 10);              //构造函数
       DoubleSubscriptedArray(const DoubleSubscriptedArray &);
       ~DoubleSubscriptedArray();                         //析构

       DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);     //重载=
       bool operator==(DoubleSubscriptedArray &);                           //重载==
       bool operator!=(DoubleSubscriptedArray &);                       //重载！=


       int &operator()(int ,int );                      //返回int& 用作左值
       int operator()(int,int) const;                   //返回const int& 用作右值
private:
       size_t size;
       int *ptr;
       int x,y;

};

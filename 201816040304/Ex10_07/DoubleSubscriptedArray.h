//Ex10_07:DoubleSubscriptedArray.h

#include<iostream>
#include<iomanip>
#include<stdexcept>
using namespace std;

class DoubleSubscriptedArray
{
   friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
   friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);
public:
   DoubleSubscriptedArray(unsigned int ,unsigned int  );//构造函数初始化数组大小
   DoubleSubscriptedArray(const DoubleSubscriptedArray & );//复制初始化构造函数
   ~DoubleSubscriptedArray();//析构函数

   int &operator()(unsigned int ,unsigned int);//重载（）运算符函数
   int operator()(unsigned int ,unsigned int) const;//重载（）运算符函数 返回值为const类型

   bool operator==(const DoubleSubscriptedArray &) const;//重载==运算符函数
   bool operator!=(const DoubleSubscriptedArray &right) const;//重载==运算符函数

   const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &)  ;//重载=运算符函数

private:
   unsigned int size1;//行数
   unsigned int size2;//列数
   int *ptr;//指针数据存储
};

#include <string>
#include <iostream>
using namespace std;
#include <string>
#include <stdlib.h>
#include "DoubleSubscriptedArray.h"

DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)           //构造函数
{
    x=a;
    y=b;
    size=a*b;
    ptr=new int[size+1];
    ptr[0]=0;
   for(size_t i=1;i<=size;++i)                //将值赋给ptr
     ptr[i]=0;
}

DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &tocopy)
{
   size=tocopy.size;
   ptr=new int[size];
   for(size_t i=1;i<=size;++i)
     ptr[i]=tocopy.ptr[i];
}

DoubleSubscriptedArray::~DoubleSubscriptedArray()            //析构
{
    delete [] ptr;
}

DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)  //重载=
{
   size=right.size;
   ptr=new int[size+1];
   for(size_t i=1;i<=size;++i)
     ptr[i]=right.ptr[i];
     return *this;
}

bool DoubleSubscriptedArray::operator==(DoubleSubscriptedArray &right)          //重载==
{
   for(size_t i=1;i<=size;++i)
    if(size!=right.size)
       return false;
   return true;

}

bool DoubleSubscriptedArray::operator!=(DoubleSubscriptedArray &right)          //重载！=
{
    return !(*this==right);
}

int &DoubleSubscriptedArray::operator()(int first,int second)               //使DoubleSubscriptedArray对象用作左值
{
    int j;
    j=(first-1)*y+second;               //计算对象在一维数组中的位置
    return ptr[j];
}

int DoubleSubscriptedArray::operator()(int first,int second) const       //使DoubleSubscriptedArray对象用作1值
{
      int j;
    j=(first-1)*y+second;              //计算对象在一维数组中的位置
    cout<<j;
    return ptr[j];
}

istream &operator>>(istream &input,DoubleSubscriptedArray &right)          //重载输入
{
    right.ptr[0]=0;
    for(size_t i=1;i<=right.size;++i)
        input>>right.ptr[i];
    return input;
}

ostream &operator<<(ostream &output,const DoubleSubscriptedArray &right)        //重载输出
{
    right.ptr[0]=0;
    for(size_t i=1;i<=right.size;++i)
        output<<right.ptr[i]<<" ";
    return output;
}

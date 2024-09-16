#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"DoubleSubscriptedArray.h"

 using namespace std;

 DoubleSubscriptedArray::DoubleSubscriptedArray(int length,int width )//构造函数
  :size(length>0&&width>0?len=length,wid=width,size=length*width:throw invalid_argument("Array size must be greater than 0")),
 ptr(new int[size])
 {

     for(size_t i=0;i<size;++i)
          ptr[i]=0;
 }
 DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &arraytocopy)//类的复制
 :size(arraytocopy.size),
 ptr(new int[size])
 {
     for(size_t i=0;i<size;++i)
        ptr[i]=arraytocopy.ptr[i];
 }

 DoubleSubscriptedArray::~DoubleSubscriptedArray()//类的析构函数
 {
     delete []ptr;
 }
 size_t DoubleSubscriptedArray::getsize()const//返回数组的长度
 {
     return size;
 }
 const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)//类的复制
 {
     if(&right!=this)
     {
         if(size!=right.size)
         {
             delete []ptr;
             size=right.size;
             ptr=new int[size];
         }
         for(size_t i=0;i<size;++i)
              ptr[i]=right.ptr[i];
     }
     return *this;
 }
 bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)const//重载==运算符
 {
     if(size!=right.size)
        return false;
     for(size_t i=0;i<size;++i)
          if(ptr[i]!=right.ptr[i])
            return false;
     return true;
 }
 int &DoubleSubscriptedArray::operator()(int sub1,int sub2)//查找数组函数（左值)
 {
     if(sub1<0||sub1>=size||sub2<0||sub2>=size)
        throw out_of_range("Subscript out of range");
     return ptr[(sub1-1)*wid+sub2];
 }
 const int &DoubleSubscriptedArray::operator()(int sub1,int sub2)const//查找数组函数（右值）
 {
    if(sub1<0||sub1>=size||sub2<0||sub2>=size)
        throw out_of_range("Subscript out of range");
     return ptr[(sub1-1)*wid+sub2];
 }
 istream &operator>>(istream &input,DoubleSubscriptedArray &an)//重载>>运算符
 {
     for(size_t i=0;i<an.size;++i)
        input>>an.ptr[i];
     return input;
 }
 ostream &operator<<(ostream &output,const DoubleSubscriptedArray &an)//重载<<运算符
 {
     for(size_t i=0;i<an.size;++i)
     {
            output<<setw(12)<<an.ptr[i];
         if((i+1)%4==0)
            output<<endl;
     }
     if(an.size%4!=0)
        output<<endl;
     return output;
 }

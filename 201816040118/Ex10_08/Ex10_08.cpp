#include<iostream>
#include<string>
using namespace std;
#include "Complex.h"
int main()
{
   cout<<"请输入复数: "<<endl;
   Complex a;//创建一个对象a
   cin>>a;
   cout<<"请输入另一个复数: "<<endl;
   Complex b; //创建一个对象b
   cin>>b;
   if(a==b) //判断
        cout<<"两个复数相同"<<endl;
   else
        cout<<"两个复数不相同!"<<endl;
   Complex c; //创建对象c
   c=a+b;
   //输出
   cout<<"a + b = "<<c<<endl;
   c=a-b;
   cout<<"a - b = "<<c<<endl;
   c=a*b;
   cout<<"a * b = "<<c<<endl;
}

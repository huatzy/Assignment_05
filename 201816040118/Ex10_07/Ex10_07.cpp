#include <iostream>
#include "DoubleSubscriptedArray.h"

using namespace std;
int main()
{
   int x,y,m,n;
   cout<<"请输入数组的边界: "<<endl;
   cin>>x>>y;
   DoubleSubscriptedArray a(x,y);
   cout<<"请输入数组的数据: "<<endl;
   cin>>a;
   cout<<"数组的内容为: "<<endl<<a;
   cout<<"a[1,3]的数据是: "<<endl;
   cout<<a(1,3)<<endl;
    cout<<"请输入另一个数组的边界: "<<endl;
   cin>>m>>n;
   DoubleSubscriptedArray b(m,n);
   cout<<"请输入新数组的数据: "<<endl;
   cin>>b;
   cout<<"新数组的内容为: "<<endl<<b;
   if(a==b)
   {
       cout<<"两个数组相同"<<endl;
   }
   else
   {
       cout<<"两个数组不同"<<endl;
   }
   cout<<"把新数组赋值给原来的数组"<<endl;
   a=b;
   cout<<"a[1,3]的数据是: "<<endl;
   cout<<a(1,3);
}

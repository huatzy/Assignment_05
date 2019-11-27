
#include <iostream>
#include <stdexcept>
using namespace std;
#include "DoubleSubscriptedArray.h" // include definition of class Rectangle


int main()
{
    DoubleSubscriptedArray chessBorard1(3,5),chessBorard2(3,5);        //创建两个对象
   cin>>chessBorard1;                                   //输入chessBorard1
   cout<<"chessBorard1="<<chessBorard1<<endl;           //输出chessBorard1
   cout<<"chessBorard1(2,3)="<<chessBorard1(2,3);        //输出chessBorard1（2,3）
   cout<<endl<<endl;

   cin>>chessBorard2;                              //输入chessBorard2
   cout<<"chessBorard2="<<chessBorard2<<endl;        //输出chessBorard1
   cout<<"chessBorard2(2,3)="<<chessBorard2(2,3);       //输出chessBorard2（2,3）
   cout<<endl<<endl;

   if(chessBorard1(2,3)==chessBorard2(2,3))            //比较·chessBorard1（2,3）与chessBorard2（2,3）
      cout<<"chessBorard1(2,3)==chessBorard2(2,3)";
    else
      cout<<"chessBorard1(2,3)!=chessBorard2(2,3)";

    return 0;
}


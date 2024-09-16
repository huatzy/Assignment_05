#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
    Complex x;
    Complex y;
    Complex z;
    cout<<"输入y: ";                 //输入
    cin>>y;
    cout<<"输入z: ";
    cin>>z;
    cout<<"x:";                       //输出值
    cout<<x;
    cout<<"\ny: ";
    cout<<y;
    cout<<"\nz: ";
    cout<<z;

    x=y+z;                            //加法
    cout<<"\n\nx=y+z:"<<endl;
    cout<<x;
    cout<<"=";
    cout<<y;
    cout<<"+";
    cout<<z;

    x=y-z;                             //减法
    cout<<"\n\nx=y-z:"<<endl;
    cout<<x;
    cout<<"=";
    cout<<y;
    cout<<"-";
    cout<<z;
    cout<<endl;

    x=y*z;                        //乘法
    cout<<"\n\nx=y*z:"<<endl;
    cout<<x;
    cout<<"=";
    cout<<y;
    cout<<"*";
    cout<<z;
    cout<<endl;
    cout<<"\n\ny与z比较:"<<endl;           //比较大小
    if(y==z)
        cout<<"y==z";
    else
        cout<<"y!=z";
}

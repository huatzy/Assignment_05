#include<iostream>
using namespace std;
#include"Complex.h"
int main()
{
    Complex a(2.0,1.0);     //创立三个Complex对象
    Complex b(3.0,2.0);
    Complex c(2.0,0.0);
    Complex d;
    cout<<"a:"<<a;      //输出三个对象值
    cout<<"b:"<<b;
    cout<<"c:"<<c;
    if(a==b)      //判定是否相同
        cout<<"Complex a is equal to Complex b\n";
    else
        cout<<"Complex a is not equal to Complex b\n";
    if(a!=c)    //判定是否不同
        cout<<"Complex a is not equal to Complex c\n";
    else
        cout<<"Complex a is equal to Complex c\n";
    cout<<"d is equal to a*c\n";
    d=a*c; //d等于a*c
    cout<<"d:"<<d;  //输出d值
    return 0;
}

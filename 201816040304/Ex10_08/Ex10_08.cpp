//Ex10_08.cpp

#include <iostream>
using namespace std;
#include "Complex.h"

int main()
{
    Complex a,b,c;//三个复数对象
    cout<<"请输入第一个复数的实部与虚部 中间用空格隔开"<<endl;
    cin>>a;//初始化
    cout<<"请输入第二个复数的实部与虚部 中间用空格隔开"<<endl;
    cin>>b;//初始化
    if(a!=b)
        cout<<"两个复数不相等"<<endl;
    else
        cout<<"两个复数相等"<<endl;
    c=a+b;
    cout<<"a+b = "<<c<<endl;
    c=a-b;
    cout<<"a-b = "<<c<<endl;
    c=a*b;
    cout<<"a*b = "<<c<<endl;

    return 0;
}

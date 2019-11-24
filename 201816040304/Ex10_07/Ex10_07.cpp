//Ex10_07.cpp
#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    int a,b;
    cout<<"请输入2个数a,b作为第一个数组的范围"<<endl;
    cout<< "a= ";
    cin>>a;
    cout<< "b= ";
    cin>>b;
    DoubleSubscriptedArray DoubleSubscriptedArray1(a,b);
    cout<<"请输入"<<a*b<<"个整数"<<endl;
    cin>>DoubleSubscriptedArray1;

    cout<<"请输入2个数a,b作为第二个数组的范围"<<endl;
    cout<< "a= ";
    cin>>a;
    cout<< "b= ";
    cin>>b;
    DoubleSubscriptedArray DoubleSubscriptedArray2(a,b);
    cout<<"请输入"<<a*b<<"个整数"<<endl;
    cin>>DoubleSubscriptedArray2;

    cout<<"第二个数组"<<endl<<DoubleSubscriptedArray2;
    if(DoubleSubscriptedArray1!=DoubleSubscriptedArray2)
    {
        cout<<"两个数组不相同"<<endl;
    }
    else
    {
        cout<<"两个数组相同"<<endl;
    }

    cout<<"第一个数组[0][0]是："<<DoubleSubscriptedArray1(0,0)<<endl;
    cout<<"把第二个数组赋值给第一个数组"<<endl;
    DoubleSubscriptedArray1=DoubleSubscriptedArray2;
    cout<<"第一个数组："<<endl<<DoubleSubscriptedArray1<<endl;
    cout<<"第二个数组"<<endl<<DoubleSubscriptedArray2;


    return 0;
}

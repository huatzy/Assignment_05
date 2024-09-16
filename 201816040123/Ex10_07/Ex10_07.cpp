#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray a(2,3);
    DoubleSubscriptedArray b;
    cout<<"数组A:"<<endl;
    cout<<a<<endl;
    cout<<"数组B:"<<endl;
    cout<<b<<endl;
    cout<<"数组A读入元素:";
    cin>>a;
    cout<<a<<endl;
    cout<<"数组A第一个元素改为123:"<<endl;
    a(0,0)=123;
    cout<<"数组A:"<<endl;
    cout<<a<<endl;
    b=a;
    cout<<"将数组A赋给数组B:"<<endl;
    cout<<b<<endl;
}

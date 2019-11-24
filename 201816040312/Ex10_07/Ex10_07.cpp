#include<iostream>
#include<stdexcept>
#include"DoubleSubscriptedArray.h"

using namespace std;
int main()
{
    DoubleSubscriptedArray integers1(3,2);//构建一个3*2大小的对象
    DoubleSubscriptedArray integers2;//构建一个对象

    cout<<"Size of Array integers1 is "<<integers1.getsize()<<"\nArray after initialization:\n"<<integers1;//分别输出两个类的大小及各自的值
    cout<<"Size of Array integers2 is "<<integers2.getsize()<<"\nArray after initialization:\n"<<integers2;

    cout<<integers1(2,2);//输出下表为2，2的值
    cout<<"\nEnter 10 integers :"<<endl;//输入10个值赋给上述的两个类
    cin>>integers1>>integers2;
    cout<<"\nAfter input,the Arrays contain:\n"<<"integers1:\n"<<integers1<<"integers2:\n"<<integers2<<endl;//输出两个类的值

    cout<<"\nEvaluating:integers1!=integers2"<<endl;

    if(integers1!=integers2)//调用！=运算符
        cout<<"integers1 and integers2 are not equal"<<endl;
    DoubleSubscriptedArray integers3(integers1);
    cout<<"\nSize of Array integers3 is"<<integers3.getsize()<<"\nArray after initialization:\n"<<integers3<<endl;

    if(integers1==integers3)
        cout<<"integers1 and integers3 are equal"<<endl;
    cout<<"\nAssigning integers2 to integers1:"<<endl;
    integers1=integers2;//将integers2的值赋给integers1

    cout<<"integers1:\n"<<integers1<<"integers2:\n"<<integers2;
    cout<<"\nEvaluating:integers1==integers2"<<endl;

    if(integers1==integers2)
        cout<<"integers1 and integers2 are equal"<<endl;

}

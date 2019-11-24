#include <iostream>
#include<iomanip>
#include"DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray a1(3,5);
    DoubleSubscriptedArray a2;//声明两个对象
    cout<<"a1行数:"<<a1.getrow()<<"\na1列数："<<a1.getcolumn()<<"\na2行数："<<a2.getrow()<<"\na2列数："<<a2.getcolumn()<<endl;//输出a1和a2的信息
    cout<<"请输入a1的每个成员"<<endl;
    cin>>a1;//输入a1
    cout<<"遍历a1"<<endl;
    cout<<a1<<endl;//输出a1
    cout<<"令a2=a1"<<endl;
    a2=a1;//令a2=a1
    cout<<"遍历a2"<<endl;
    cout<<a2<<endl;//输出a2
    /*判断a1a2是否相等*/
    if(a2==a1)
        cout<<"a1=a2"<<endl;
    else
        cout<<"a1!=a2"<<endl;
    cout<<"a1(1,3):"<<a1(1,3)<<endl;//输出a1(1,3)
    cout<<"令a1(1,3)=a1(2,3),遍历a1"<<endl;//令a1(1,3)=a1(2,3),输出a1
    a1(1,3)=a1(2,3);
    cout<<a1<<endl;
    cout<<"用a1初始化a3,遍历a3"<<endl;//用a1初始化a3,遍历a3
    DoubleSubscriptedArray a3(a1);
    cout<<a3<<endl;
    return 0;
}//end main

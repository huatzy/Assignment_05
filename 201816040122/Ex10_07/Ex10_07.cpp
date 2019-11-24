#include <iostream>
#include <stdexcept>
#include <stdlib.h>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    int a,b;
    DoubleSubscriptedArray s;
    DoubleSubscriptedArray c(3,3);
    DoubleSubscriptedArray d;
    cout<<"初始数组A为："<<endl;
    cout<<c;
    //功能：数组的输入
    cout<<"请输入你要写入的行列数"<<endl;
    cin>>a>>b;
    s.setSize(a,b);
    cout<<"请输入你所写入的数据"<<a<<"行"<<b<<"列"<<endl;
    cin>>s;
    cout<<"您输入的数组B为："<<endl;
    cout<<s<<endl;;
    //功能：数组的查找
    cout<<"您需要查找第几行第几列的数据？"<<endl;
    cin>>a>>b;
    s.seekDoubleSubscriptedArray(a,b);
    system("pause");
    system("cls");
    //功能：重载运算符=
    cout<<"A数组："<<endl;
    cout<<c;
    cout<<"B数组："<<endl;
    cout<<s;
    cout<<"令A与B相等,则A数组变成："<<endl;
    c=s;
    cout<<c<<endl;
    system("pause");
    system("cls");
    //功能：数组的比较
    cout<<"B数组:"<<endl;
    cout<<s;
    cout<<"请输入你要写入的行列数"<<endl;
    cin>>a>>b;
    d.setSize(a,b);
    cout<<"请输入你所写入的数据"<<a<<"行"<<b<<"列"<<endl;
    cin>>d;
    cout<<"您输入的数组C为："<<endl;
    cout<<d<<endl;
    cout<<"令数组C与数组B比较"<<endl;
    if(s==d)
        cout<<"C equals B"<<endl;
    if(s!=d)
        cout<<"C is not equals B"<<endl;
}

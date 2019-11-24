#include<iostream>
#include<stdexcept>
#include<string>
#include"DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    int row1,column1,m,v;
    cout<<"请输入行数："<<" ";
    cin>>row1;
    cout<<"请输入列数: "<<" ";
    cin>>column1;
    DoubleSubscriptedArray a(row1,column1);
    row1=a.getRows();//assign the data
    column1=a.getColumns();//assign the data
    cout<<"请输入数据："<<endl;
    cin>>a;
    cout<<"所创建的数组为："<<endl;
    cout<<a<<endl;
    cout<<"请输入要访问的行数: "<<" ";
    cin>>m;
    cout<<"请输入要访问的列数: "<<" ";
    cin>>v;
    cout<<"这个元素为："<<a(m-1,v-1)<<endl;
    cout<<"请再次输入行数: "<<" ";
    cin>>row1;
    cout<<"请再次输入列数: "<<" ";
    cin>>column1;
    DoubleSubscriptedArray b(row1,column1);
    cout<<"输入这个数组的数据："<<endl;
    cin>>b;
    cout<<"所创建的这个数组为: "<<endl;
    cout<<b<<endl;
    if(a!=b)
    {
        cout<<"经比较，这两个数组不相等"<<endl;
    }
    if(a==b)
    {
        cout<<"经比较，这两个数组相等"<<endl;
    }
      return 0;
}

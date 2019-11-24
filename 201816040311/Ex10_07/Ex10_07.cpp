#include <vector>
#include "DoubleSubscriptedArray.h"
#include <iostream>

using namespace std;

int main()
{
    //构建对象a,b均为2*2的矩阵
    DoubleSubscriptedArray a(2,2),b(2,2);
    cout<<"-------------------"<<endl;
    cout <<"input A:";
    cin >>a;//输入a
    cout << a;//输出a
    cout <<"input B:";
    cin >>b;//输入b
    cout <<b;//输出b
    cout<<"\na(2,1) is:"<<a(2,1)<<endl;
    cout<<"\na(1,2) is:"<<a(1,2)<<endl;
    cout<<"Input a(2,1):";
    cin >>a(2,1);
    cout<<a;
    if(a==b)//判断a是否等于b
    {
        cout<<"a = b"<<endl;
    }
    else
    {
        cout<<"a != b"<<endl;
    }
    cout << "change a = b "<<endl;//令a等于b
    a=b;
    cout << a;
}

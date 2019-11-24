#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray d(3,3);

    cout<<"请输入9个整数以建立3*3数组d"<<endl<<endl;
    cin>>d;
    cout<<"d"<<endl<<d;
    cout<<"请输入一个整数修改第3行第3列的值"<<endl;
    cin>>d(2,2);
    cout<<"d"<<endl<<d;
    DoubleSubscriptedArray f(3,3);
    cout<<"请输入9个整数以建立3*3数组f"<<endl<<endl;
    cin>>f;
    cout<<"f"<<endl<<f;
    if(d==f)
        cout<<"d与t相等。"<<endl;
    else
        {cout<<"d与t不等！"<<endl;}
    system("pause");
    d=f;
    cout<<"将f赋值给d!"<<endl;
    cout<<"d"<<endl<<d;
    cout<<endl;
    cout<<"f"<<endl<<f;




    return 0;
}

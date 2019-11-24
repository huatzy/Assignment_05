#include<iostream>
#include<stdexcept>
#include"DoubleSubscriptedArray.h"

using namespace std;

int main()
{
    DoubleSubscriptedArray f1(3,5);
    DoubleSubscriptedArray f2(3,5);//定义两个三行五列的数组
    cin>>f1;
    cout<<"f1:\n"<<f1;
    cin>>f2;
    cout<<"f2:\n"<<f2;
    if(f1 != f2)
    {
        cout<<"f1 and f2 are not equal"<<endl;
    }
    if(f1 == f2)
    {
        cout<<"f1 and f2 are equal"<<endl;
    }
}

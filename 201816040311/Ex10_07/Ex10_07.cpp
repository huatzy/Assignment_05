#include <vector>
#include "DoubleSubscriptedArray.h"
#include <iostream>

using namespace std;

int main()
{
    //��������a,b��Ϊ2*2�ľ���
    DoubleSubscriptedArray a(2,2),b(2,2);
    cout<<"-------------------"<<endl;
    cout <<"input A:";
    cin >>a;//����a
    cout << a;//���a
    cout <<"input B:";
    cin >>b;//����b
    cout <<b;//���b
    cout<<"\na(2,1) is:"<<a(2,1)<<endl;
    cout<<"\na(1,2) is:"<<a(1,2)<<endl;
    cout<<"Input a(2,1):";
    cin >>a(2,1);
    cout<<a;
    if(a==b)//�ж�a�Ƿ����b
    {
        cout<<"a = b"<<endl;
    }
    else
    {
        cout<<"a != b"<<endl;
    }
    cout << "change a = b "<<endl;//��a����b
    a=b;
    cout << a;
}

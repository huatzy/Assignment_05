#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);
    cout<<"x��ֵΪ"<<x<<endl;
    cout<<"������x��ʵ�����鲿"<<endl;
    cin>>x;
    cout<<"x��ֵΪ"<<x<<endl;
    cout<<"y��ֵΪ"<<y<<endl;
    cout<<"z��ֵΪ"<<z<<endl;
    x=y+z;
    cout<<"y+z��x��ֵΪ"<<x<<endl;
    x=y-z;
    cout<<"y-z��x��ֵΪ"<<x<<endl;
    x=y*z;
    cout<<"y*z��x��ֵΪ"<<x<<endl;
    if(x==z)
        cout<<"x equals z"<<endl;
    if(x!=z)
        cout<<"x is not equal z"<<endl;
}

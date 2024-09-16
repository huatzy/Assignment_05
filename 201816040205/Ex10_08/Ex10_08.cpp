#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex a(0,0);
    Complex b(0,0);
    Complex c(0,0);
    cout<<"请输入复数a的实部和虚部"<<endl;
    cin>>a;
    cout<<"a="<<a;
    cout<<endl;
    cout<<"请输入复数a的实部和虚部"<<endl;
    cin>>b;
    cout<<"b="<<b;
    cout<<endl;
    cout<<"a,b是否相等？"<<endl;
    if(a==b)
        cout<<"yes."<<endl;
    else
        cout<<"no!"<<endl;
    cout<<"a*b=";
    c=a*b;
    cout<<c;

}

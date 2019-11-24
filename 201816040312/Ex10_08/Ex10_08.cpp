#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex x;//构造类的对象x
    Complex y(4.3,8.2);//分别构造类的对象y,z,q
    Complex z(3.3,1.1);
    Complex q(4.3,8.2);

    cout<<"x:";//分别输出x,y,z,q的值
    cout<<x;
    cout<<"\ny:";
    cout<<y;
    cout<<"\nz:";
    cout<<z;
    cout<<"\nq:";
    cout<<q;

    if(y==z)//调用==运算符
        cout<<"\n"<<"y=z"<<endl;
    if(x!=y)
        cout<<"\n"<<"y!=z"<<endl;
    if(y==q)
        cout<<"\n"<<"y=q"<<endl;
    if(y!=q)
        cout<<"\n"<<"y!=q"<<endl;

    x=y+z;//调用=和+运算符
    cout<<"\nx=y+z:"<<endl;
    cout<<x;
    cout<<"=";
    cout<<y;
    cout<<"+";
    cout<<z;

    x=y-z;//调用=和，-运算符
    cout<<"\n\nx=y-z:"<<endl;
    cout<<x;
    cout<<"=";
    cout<<y;
    cout<<"-";
    cout<<z;

    cout<<"\n"<<"x=y*z"<<endl;
    x=y*z;调用*和=运算符
    cout<<x<<endl;
    cout<<"\n";
    Complex p;
    cout<<"请输入复数p:";
    cin>>p;
    cout<<"p的值为:"<<p;
}

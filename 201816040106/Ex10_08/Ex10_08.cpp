#include"Complex.h"
#include<iostream>
using namespace std;
int main()
{
    Complex x;
    Complex y(1.0,2.0);
    Complex z(2.0,3.0);
    cout<<"x: "; x.print();
    cout<<"y: "; y.print();
    cout<<"z: "; z.print();
    cout<<endl;

    x=y+z;
    cout<<"x: "; x.print();
    cout<<"y: "; y.print();
    cout<<"z: "; z.print();
    cout<<endl;

    x=y-z;
    cout<<"x: "; x.print();
    cout<<"y: "; y.print();
    cout<<"z: "; z.print();
    cout<<endl;

    x=y*z;
    cout<<"x: "; x.print();
    cout<<"y: "; y.print();
    cout<<"z: "; z.print();
    cout<<endl;

    Complex x1,x2;
    cin>>x1;
    cout<<"x1: "<<x1<<endl;
    cin>>x2;
    cout<<"x2: "<<x2<<endl;;
    if(x1==x2)  cout<<"x1 == x2"<<endl;
    if(x1!=x2)  cout<<"x1 != x2"<<endl;
    return 0;
}

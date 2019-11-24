#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);
    cout<<"x="<<x;
    cout<<endl<<"y="<<y;
    cout<<endl<<"z="<<z;
    x=y+z;
    cout<<"\n\nx=y+z:"<<endl<<x;
    cout<<"=";
    cout<<y;
    cout<<"+";
    cout<<z;
    x=y-z;
    cout<<"\n\nx=y-z:"<<endl<<x;
    cout<<"="<<y;
    cout<<"-"<<z;
    cout<<endl;
    if(y==z)
    {
        cout<<"y is equal of z"<<endl;
    }
    else
        cout<<"y is not equal of z"<<endl;
    x=y*z;
    cout<<"x=y*z:"<<x;
    cout<<"="<<y<<"*";
    cout<<z<<endl;
    cout<<"ÇëÊäÈëyºÍz:";
    cin>>y;
    cin>>z;
    cout<<endl;
    x=y*z;
    cout<<"x=y*z:"<<x;
    cout<<"="<<y<<"*";
    cout<<z<<endl;


    return 0;
}

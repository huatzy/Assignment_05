#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);
    cout<<"x的值为"<<x<<endl;
    cout<<"请输入x的实部与虚部"<<endl;
    cin>>x;
    cout<<"x的值为"<<x<<endl;
    cout<<"y的值为"<<y<<endl;
    cout<<"z的值为"<<z<<endl;
    x=y+z;
    cout<<"y+z后x的值为"<<x<<endl;
    x=y-z;
    cout<<"y-z后x的值为"<<x<<endl;
    x=y*z;
    cout<<"y*z后x的值为"<<x<<endl;
    if(x==z)
        cout<<"x equals z"<<endl;
    if(x!=z)
        cout<<"x is not equal z"<<endl;
}

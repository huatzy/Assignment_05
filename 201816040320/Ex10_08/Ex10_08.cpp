#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
    cout<<"y是否等于z"<<endl;
    y==z ? cout<<"y等于z"<<endl:cout<<"y不等于z"<<endl;
    cout<<"y = ";
    cin>>y;
    cout<<"z = ";
    cin>>z;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
    cout<<"x = y * z"<<endl;
    x=y*z;
    cout<<"x = "<<x<<endl;
}

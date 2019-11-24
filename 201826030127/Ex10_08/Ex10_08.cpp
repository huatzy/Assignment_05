#include <iostream>
using namespace std;
#include"complex.h"
int main()
{
    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);

    cout<<"x:";
    cout<<x<<endl;
    cout<<"y:";
    cout<<y<<endl;
    cout<<"z:";
    cout<<z<<endl;
    x=y+z;
    cout<<x<<"="<<y<<"+"<<z;
    cout<<endl;
    x=y-z;
    cout<<x<<"="<<y<<"-"<<z;

    return 0;
}

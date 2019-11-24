#include <iostream>
#include"complex.h"
using namespace std;
int main()
{
    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);

    cout<<"x:";
    x.print();
    cout<<"y:";
    y.print();
    cout<<"z:";
    z.print();
    x=y+z;
    cout<<x<<"="<<y<<"+"<<z;
    cout<<endl;
    x=y-z;
    cout<<x<<"="<<y<<"-"<<z;

    return 0;
}

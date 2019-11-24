#include <iostream>
#include"Complex.h"
using namespace std;
int main()
{
    Complex x;
    Complex y(4.3, 8.2);
    Complex z(3.3, 1.1);

    x=y+z;
    cout<<"x=y+z:" << endl;
    cout<<x<<"="<<y<<"+"<<z << endl;
    x=y-z;
    cout<<"x=y-z:" << endl;
    cout<<x<<"="<<y<<"-"<<z << endl;

    x=y*z;
    cout<<"x=y*z:" << endl;
    cout<<x<<"="<<y<<"*"<<z<< endl << endl;
    if(y==z)
        cout<<"y==z"<<endl;
    if(y!=z)
     cout<<"y!=z"<<endl;


}//end main

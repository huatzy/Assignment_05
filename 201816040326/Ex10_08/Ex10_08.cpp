#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x,y(1,2),z(2,3);
    cout<<"x:"<<x<<endl<<endl<<"y:"<<y<<endl<<endl<<"z:"<<z<<endl<<endl;
    x=y+z;
    cout <<"x= y + z:"<<endl;
    cout << x<<" = "<< y<<" + "<< z<<endl<<endl;
    x=y-z;
    cout <<"x= y - z:"<<endl;
    cout << x<<" = "<< y<<" - "<< z<<endl<<endl;
    x=y*z;
    cout <<"x= y * z:"<<endl;
    cout << x<<" = "<< y<<" * "<< z<<endl<<endl;

}

#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{

    DoubleSubscriptedArray a(10,5),b(1,2);

    a(1,2) = 100;
    if(a != b) cout<<"a != b"<<endl;

    if(a == b) cout<<"a == b"<<endl;
    cout<<"print a\n"<<a<<endl;
    cout<<"print b\n"<<b<<endl;

    b = a;
    cout<<"b copy a"<<endl;
    if(a != b) cout<<"a != b"<<endl;

    if(a == b) cout<<"a == b"<<endl;
    cout<<"print a\n"<<a<<endl;
    cout<<"print b\n"<<b<<endl;

    return 0;
}

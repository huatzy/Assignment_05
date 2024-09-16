#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    int p;
    DoubleSubscriptedArray a(2,2),b(2,2),temp(2,2),d(2,2);
    cin>>a;
    cout<<"the a is"<<endl<<a<<endl;
    cout<<"a[1][1] is";
    p=a(1,1);
    cout<<p;
    cin>>b;
    cout<<"the b is"<<endl<<b<<endl;
    cout <<"judge if a==b"<<endl;
    if (a==b)
    {
        cout <<"yes,a==b"<<endl;
    }
    else
    {
        cout <<"no,a!=b"<<endl;
    }
    cout <<"judge if a!=b"<<endl;
    if (a!=b)
    {
        cout <<"yes,a!=b"<<endl;
    }
    else
    {
        cout <<"no,a==b"<<endl;
    }
    temp=a;
    cout <<temp;
}

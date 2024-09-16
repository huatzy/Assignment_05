#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray a;
    DoubleSubscriptedArray b(3,3);
    DoubleSubscriptedArray c(3,3);
    cin>>b;
    a=b;
    cout<<a<<b;
    cin>>c;
    if(b==c)
        cout<<"b equals c"<<endl;
    if(b!=c)
        cout<<"b is not equals c"<<endl;
}

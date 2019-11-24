#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray a1(2,2);
    DoubleSubscriptedArray a2(2,3);
    DoubleSubscriptedArray a3;
    cout<<"请为数组a1,a2赋值共10个值：";
    cin>>a1>>a2;
    cout<<"将a1赋给a3:"<<endl<<"a3:";
    a3=a1;
    cout<<endl;
    cout<<a3<<endl;
    if(a1==a2)
        cout<<"a1 is equal of a2"<<endl;
    else
        cout<<"a1 is not equal of a2"<<endl;
        cout<<"a1(2,2) is:"<<a1(2,2);
    return 0;
}
//1 2 3 4 5 6 7 8 9 10

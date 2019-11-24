#include"DoubleSubScriptedArray.cpp"
#include<iostream>
using namespace std;
int main()
{
    DoubleSubScriptedArray a(1,1);
    DoubleSubscriptedArray b(2,2);
    cin>>a>>b;
    cout<<a<<endl;
    cout<<b;
    DoubleSubscriptedArray c;
    c=a;
    cout<<c<<endl;
}

#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;


int main()
{
    DoubleSubscriptedArray s1(2,2);
    DoubleSubscriptedArray s2;
    cin>>s1>>s2;//input two two-dimensional array
    if(s1!=s2)
        cout<<"s1 and s2 are not equal"<<endl;
    if(s1==s2)
        cout<<"s1 and s2 are equal"<<endl;
    cout<<s1;
    cout<<s2;
    s1=s2;
    cout<<s1<<s2<<endl;
    cout<<s1(1,2);//output the value of the corresponding subscript
    s1(2,1)=521;//assign a value to the corresponding subscript
    cout<<s1<<endl;
}

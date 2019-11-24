#include <iostream>
#include"complex.h"
using namespace std;

int main()
{
    complex o(2.2,5.5),t,e(5.6,7.9),f;
    cout<<" 请输入一个complex number :(x,y)\n";
    cin>>f;
    cout<<"e:"<<e<<"\n\nt\n"<<t<<"o:"<<o<<endl;
    t=e*o;
    t=o+e;
    t=e-o;
    cout<<"\nt=o+e\n"<<t<<"="<<o<<"*"<<e<<"\n";
    return 0;
}

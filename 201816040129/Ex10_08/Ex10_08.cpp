// Lab 4: ComplexTest.cpp
#include <iostream>
using namespace std;

#include "Complex.h"

int main()//之前的实验模板
{
   Complex a;
   Complex b;
   Complex c;
   cout<<"Please output b:"<<" ";
   cin>>b;
   cout<<"b:"<<"("<<b<<")"<<endl;
   cout<<"Please output c:"<<" ";
   cin>>c;
   cout<<"c:"<<"("<<c<<")"<<endl;
   a=b+c;//addition
   cout<<a<<endl;
   a=b-c;//subtract
   cout<<a<<endl;
   a=b*c;//mutiply
   cout<<a<<endl;
   if(b==c)
    cout<<"equal"<<endl;
   if(b!=c)
     cout<<"not equal"<<endl;

} // end main



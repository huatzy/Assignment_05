#include <iostream>
#include"DoubleSubscriptedArray.h"
#include<iostream>


using namespace std;

int main()
{
   DoubleSubscriptedArray integersk(5,6);
   DoubleSubscriptedArray integersv;

      cout<<"size of DoubleSubscriptedArray integersv is"<<integersv.getrowssize()<<
   "*"<<integersv.getcolumnssize()<<"\n doublesubcriparray after initialzation"<<integersv;


   cout<<"size of DoubleSubscriptedArray integersk is"<<integersk.getrowssize()<<
   "*"<<integersk.getcolumnssize()<<"\n doublesubcriparray after initialzation"<<integersv;
   cout<<"\n Enter 20 integers:"<<endl;
   cin>>integersk>>integersv;
   cout<<"\n after input.doublesubcriptedarray contain:"<<"integersn:\n"<<integersv
   <<"integer1:\n"<<integersk<<endl;
   cout<<"integersk!=integersn"<<endl;
   if(integersk==integersv)
    cout<<"integersk==integersv"<<endl;
    cout<<"integersk(3,3)is"<<integersk(3,3);
    cout<<"\n assigning 99 to integersk(3,3)"<<endl;
    integersk(3,3)=99;
    cout<<"integerk:\n"<<integersk;
    cout<<"assigning 86 to integersv(18,19)"<<endl;
    integersv(18,19)=86;
    return 0;
  }

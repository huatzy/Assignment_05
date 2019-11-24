#include<bits/stdc++.h>
using namespace std;

#include "DoubleSubscriptedArray.h"

int main()
{
   int x, y;
   //give two number to define length and weigt
   cout<<"give two number to define length and weigth " <<endl ;
   cin >>x>>y ;
   DoubleSubscriptedArray a(x,y) ;
   //number to define number in array
   cout<<"give me "<<x*y<<" number to define number in array"<<endl ;
   cin >> a ;
   //print number in a
   cout << "print number in a"<<endl ;
   cout<< a;
}


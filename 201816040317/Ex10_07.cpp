#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;

int main()
{
  DoubleSubscriptedArray a( 4,5 );
    DoubleSubscriptedArray b;
     cout <<a;
     cout <<b;
     cin>>a;
     b=a;
     cout<<a<<endl;
     cout<<b<<endl;
}

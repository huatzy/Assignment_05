#include <iostream>
#include"DoubleScriptedArray.h"
#include<array>
using namespace std;
int main()
{
   int r,c;
   Array a;
   cout<<"Please row and colum"<<endl;
   cin>>r>>c;
   cout<<"Please enter elements"<<endl;
   cin>>a;
   cout<<"After intialized "<<a;
   cout<<endl;
   cout<<"Please enter other row and culum for another array:"<<endl;
   cout<<"Please enter row and colum:"
   cin>>row>>colum;
   Array b (row,colu);
   cout<<"Please enter elements"<<endl;
   cin>>b;
   if(a==b)
    cout<<"a==b";
   a=b;
   cout<<"After a was intialsized with b"<<endl;
   cout<<a;
    cout<<"a[2][3]="<<a(2,3)<<endl;
      return 0;
}

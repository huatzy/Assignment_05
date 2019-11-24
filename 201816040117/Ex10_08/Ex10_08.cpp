#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

#include "Complex.h"
int main()
{
    Complex a( 1, 7 ), b( 9, 2 ), c,d,e; // create three Complex objects

   cout<<a; // output object a
   cout << " + ";
   cout<<b; // output object b
   cout << " = ";
   c = a+b; //
   cout<<c; // output object c

   cout << '\n';
   a.setComplexNumber( 10, 1 ); // reset realPart and imaginaryPart
   b.setComplexNumber( 11, 5 ); // reset realPart and imaginaryPart
   cout<<a; // output object a
   cout << " - ";
   cout<<b; // output object b
   cout << " = ";
   c = a-b; //
   cout<<c<<endl; // output object c
   cout<<a; // output object a
   cout << " * ";
   cout<<b; // output object b
   cout << " = ";
   c = a*b; //
   cout<<c;
   cout << endl;
   cout<<"please input d and e:"<<endl;//prompt
   cin>>d>>e;//input d and e
   cout<<endl;
   cout<<"d:"<<d<<"  "<<"e:"<<e<<endl;//output d and e
   d!=e?cout<<"d!=e "<<" called function != \n":
       cout<<"d==e "<<"called function operator !=\n";//judge d and e by operator !=
   d==e?cout<<"d==e "<<" called function == \n":
       cout<<"d!=e "<<"called function operator ==\n";//judge d and e by operator ==
}

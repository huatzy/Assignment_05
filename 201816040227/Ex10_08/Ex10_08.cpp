#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
   Complex c(0,0),a( 10, 7 ), b( 9, 2 ); // create three Complex objects

   c=a+b;
   cout<<c; // output object a
   cout <<"=";
   cout<<a; // output object b
   cout <<"+";

  cout<<b; // output object c

   cout << '\n';
   //a.setComplexNumber( 10, 1 ); // reset realPart and
   //b.setComplexNumber( 11, 5 ); // and imaginaryPart
   c=a-b;
   cout<<c; // output object a
   cout << " = ";
   cout<<a; // output object b
   cout << " - ";
   //c = a.subtract( b ); // invoke add function and assign to object c
   cout<<b; // output object c
   cout << endl;
} // end main



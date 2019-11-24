// Lab 4: ComplexTest.cpp
#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
   Complex a, b(4.3,8.2), c(3.3,1.1); // create three Complex objects
   cin>>a;                            //input a
   cout<<"\nx: "<<a<<endl;
   cout<<"y: "<<b<<endl;
   cout<<"z: "<<c<<endl<<endl;
   a = b+c; // invoke add function and assign to object a

   cout<<"x = y + z:\n"<<a<< " = "<<b<<"+"<<c<<endl<<endl;// output object c

   a = b-c; // invoke Subtract function and assign to object a
   cout<<"x = y - z:\n"<<a<< " = "<<b<<"-"<<c<<endl<<endl;// output object c

   a = b*c; // invoke Multiply function and assign to object a
   cout<<"x = y * z:\n"<<a<< " = "<<b<<"*"<<c<<endl<<endl;// output object c

   //Compare two complex numbers for equality
   cout<<"Determine if two complex numbers are equal\n";
   cout<<((b==c)?"These two complex numbers are equal":"These two complex numbers are not equal")<<endl<<endl;

   cout<<"Determine if two complex numbers are not equal\n";
   cout<<((b!=c)?"These two complex numbers are not equal":"These two complex numbers are equal")<<endl;



} // end main



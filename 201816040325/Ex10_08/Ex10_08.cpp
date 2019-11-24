// Fig. 10.16: fig10 16.cpp
// Complex class test program.
#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
      Complex x;
      Complex y( 4.3, 8.2 );
      Complex z( 3.3, 1.1 );

      cout  << "x: " ;
      cout<<x;
      cout <<"\ny: ";
      cout<<y;
      cout << "\nz: ";
      cout<<z;
      cout<<endl<<endl;

      if(y==z)
        cout<<"y is equal to z"<<endl;
      else
        cout<<"y is not equal to z"<<endl;
      x=y+z;

      cout << "\n\nx =y + z:"<< endl;
      cout<<x;
      cout <<" = ";
      cout<<y;
      cout <<" + ";
      cout<<z;

      x=y-z;
      cout <<"\n\nx = y - z:"<<endl;
      cout<<x;
      cout << " = ";
      cout<<y;
      cout <<" - ";
      cout<<z;

      x=y*z;
      cout <<"\n\nx = y * z:"<<endl;
      cout<<x;
      cout << " = ";
      cout<<y;
      cout <<" * ";
      cout<<z;
      cout <<endl;
}

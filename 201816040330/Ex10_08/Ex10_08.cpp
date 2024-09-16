#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{

    Complex y(7.8,9.8);
    Complex x(8.0,9.6);

    Complex z;


    z=x*y;
    cout<<"\n\nz=y*x:"<<endl;
    cout<<z<<endl<<endl<<endl;

    if ( x == y )
      cout << "y is equal x" << endl;//adjust

    if ( y != x )
      cout << "y is not equal to x" << endl;//adjust


}

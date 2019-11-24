#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);
    x = y * z;
    cout<<"x=y+z"<<endl;
    cout<<"y= "<<y<<endl;
    cout<<"z= "<<z<<endl;
    cout<<"x= "<<x<<endl;
    cout<<y;
    cout << ( ( y == z ) ? "  == " : "  != " );
    cout<<z<<endl;
    cout << " according to the overloaded == operator\n";

   // test overloaded inequality operator
   cout<<x;
   cout << ( ( x != z ) ? "  != " : "  == " );
   cout<<z<<endl;
   cout << " according to the overloaded != operator" << endl;
    return 0;
}

#include <iostream>
using namespace std;

#include "DoubleSubscriptedArray.h"

int main()
{
   String string1, string2( "The date is" );
   String string3( " August 1, 1993" );

   // test overloaded operators
   cout << "string1 = string2 + string3\n";
   /* Write a statement to concatenate string2 and string3,
      and assign the result to string1 */
   string1 = string2+string3;
   cout << "\"" << string1 << "\" = \"" << string2 << "\" + \""
      << string3 << "\"" << endl;
}

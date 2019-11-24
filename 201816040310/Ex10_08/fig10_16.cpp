// Fig. 10.16: fig10_16.cpp
// Complex class test program.
#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
   Complex x, y, z; 
   // Complex y(4.3, 8.2);
   // Complex z(3.3, 1.1);
   // input y and z
   cout << "Please input  y.\nSuch as , (1,2) input: 1 2 " << endl;
   cin >> y;
   cout << "Please input  z.\nSuch as , (1,2) input: 1 2" << endl;
   cin >> z;

   // show x ,y and z
   cout << "x: ";
   cout << x;
   cout << "\ny: ";
   cout << y;
   cout << "\nz: ";
   cout << z << endl;

   //check equal 
   if (y == z)
      cout << "\ny == z" << endl;
   else
      cout << "\ny != z" << endl;

   // test add
   x = y + z;
   cout << "\n\nx = y + z:" << endl;
   cout << x;
   cout << " = ";
   cout << y;
   cout << " + ";
   cout << z;

   //test minus
   x = y - z;
   cout << "\n\nx = y - z:" << endl;
   cout << x;
   cout << " = ";
   cout << y;
   cout << " - ";
   cout << z;
   cout << endl;

   //test mul
   x = y * z;
   cout << "\nx = y * z:" << endl;
   cout << x;
   cout << " = ";
   cout << y;
   cout << " * ";
   cout << z;
   cout << endl;

} // end main

/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/

// Fig. 10.15: Complex.cpp
// Complex class member-function definitions.
#include <iostream>
#include "Complex.h" // Complex class definition
using namespace std;

// Constructor
Complex::Complex(double realPart, double imaginaryPart)
    : real(realPart),
      imaginary(imaginaryPart)
{
   // empty body
} // end Complex constructor

// addition operator
Complex Complex::operator+(const Complex &operand2) const
{
   return Complex(real + operand2.real,
                  imaginary + operand2.imaginary);
} // end function operator+

// subtraction operator
Complex Complex::operator-(const Complex &operand2) const
{
   return Complex(real - operand2.real,
                  imaginary - operand2.imaginary);
} // end function operator-


Complex Complex::operator*(const Complex &op2) const
{
   Complex tem;
   tem.real = real * op2.real - imaginary * op2.imaginary;
   tem.imaginary = imaginary * op2.real + real * op2.imaginary;
   return tem;
}

//check equal
bool Complex::operator==(const Complex &op2) const
{
   return (real == op2.real) && (imaginary == op2.imaginary);
}

bool Complex::operator!=(const Complex &op2) const
{
   return !(*this == op2);
}


// overload input and output operator
ostream &operator<<(ostream &out, const Complex &complex)
{
   out << '(' << complex.real << ", " << complex.imaginary << ')';
   return out;
}
istream &operator>>(istream &in, Complex &complex)
{
   in >> complex.real >> complex.imaginary;
   return in;
}

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

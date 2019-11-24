
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex
{
     friend ostream &operator<<(ostream &, const Complex & );
    friend istream &operator>>(istream &, Complex &);
public:
   Complex (double,double);/* Declare a constructor that has one parameter for each data member */
   Complex opertor+(const Complex &);
   Complex opertor-(const Complex &);

   void setComplexNumber(double,double);/* Declare a set method for the part number */
   bool operator==(const Complex &) const;
    bool operator!=( const Complex &right ) const;

private:
   double realPart;/* Declare a dounle data member for the Complex number */
   double imaginaryPart;/* Declare a double data member for the Complex number */
   double ComplexNumber;

}; // end class Invoice

#endif

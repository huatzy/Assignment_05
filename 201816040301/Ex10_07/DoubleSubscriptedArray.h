#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED



#endif // RECTANGLE_H_INCLUDED
class Rectangle

{

public:

   Rectangle( double length=1,double width=1);// constructor initializes balance

   void setLength(double);

   void setWidth(double); // add an amount to the account balance

   double getLength();

   double getWidth();

   double getPerimeter();

   double getArea();

  // return the account balance

private:

   double length; // data member that stores the balance

   double width;

}; // end class Account

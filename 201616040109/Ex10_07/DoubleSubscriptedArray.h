#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H
#include <iostream>
using namespace std;

class DoubleSubscriptedArray
{
   friend ostream &operator<<( ostream &, const DoubleSubscriptedArray& );
   friend istream &operator>>(istream &,DoubleSubscriptedArray &);
public:
   explicit DoubleSubscriptedArray( int = 3,int = 3 ); //default constructor
   DoubleSubscriptedArray( const DoubleSubscriptedArray & ); //copy constructor
   ~DoubleSubscriptedArray();//destructor
   size_t getRowSize() const;//return rowSize
   size_t getColumnSize() const;
   const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//assignment operator
   bool operator==( const DoubleSubscriptedArray & ) const;//equality operator

   //inequality operator:return opposite of == operator
   bool operator!=( const DoubleSubscriptedArray &right ) const
   {
       return !(*this == right);//invokes DoubleSubscriptedArray::operator==
   }//end function operator!=

   int &operator()(int,int );
   int &operator()( int,int )const;
private:
    size_t rowSize;
    size_t columnSize;
    int **ptr;
}; // end class DoubleSubscriptedArray


#endif // DOUBLESUBSCRIPTEDARRAY_H

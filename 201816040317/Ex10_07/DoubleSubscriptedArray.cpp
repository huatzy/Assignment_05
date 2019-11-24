#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h" // DoubleSubscriptedArray class definition
using namespace std;

// default constructor for class DoubleSubscriptedArray definition (default size 10)
DoubleSubscriptedArray::DoubleSubscriptedArray( int arrayRow, int arrayColumn )
    : row(  arrayRow  ),column( arrayColumn  ),ptr ( new int [ row * column ] )
{
    for ( size_t i = 0; i < getSize(); i++)
        ptr[i] = 0; // set pointer-based array element
} // end DoubleSubscriptedArray default constructor

// copy constructor for class DoubleSubscriptedArray;
// must receive a reference to a DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray( const DoubleSubscriptedArray &a)
    : row( a.row ), column( a.column ),
      ptr( new int [ row * column ] )
{
    for ( size_t i = 0; i < getSize(); i++ )
        ptr[i] = a.ptr[i]; // copy into object
} // end DoubleSubscriptedArray copy constructor

// destructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr; // release pointer-based array space
} // end destructor

//return number of a elements of DoubleSubscriptedArray
size_t DoubleSubscriptedArray::getSize() const
{
    return row * column; // number of elements in DoubleSubscriptedArray
} // end function getSize

DoubleSubscriptedArray &DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray &r )
{
      for ( size_t i = 0; i < getSize(); i++ )
        {
            ptr[i] = r.ptr[i]; // copy array into object
        }
        return *this;
}
bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &r ) const
{
     for ( size_t i = 0; i < getSize(); i++ )
     {
         if(ptr[i]!=r.ptr[i])
         {
             return false;
         }
     }
        return true;

}
bool DoubleSubscriptedArray::operator !=( const DoubleSubscriptedArray &r ) const
{
    for(size_t i=0;i<getSize();i++)
     {
         if(ptr[i]!=r.ptr[i])
         {
             return false;
         }
     }
    return true;
}

ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a )
{
    // output private ptr-based array
    for ( size_t i = 0; i < a.getSize(); i++ )
    {
        output << setw(3) << a.ptr[i];

        if ( (i+1)% a.column == 0 )
            output << endl;
    }

    return output;
}

istream &operator>>( istream &input, DoubleSubscriptedArray &a )
{
    for ( size_t i = 0; i < a.getSize(); ++i )
    {
        input >> a.ptr[i];
    }

    return input; // enables cin >> x >> y;
} // end function

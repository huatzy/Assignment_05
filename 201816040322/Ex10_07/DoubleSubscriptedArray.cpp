// Assignment_05: DoubleSubscriptedArray.cpp
// DoubleSubscriptedArray class member and friend function definitions.
#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h" // DoubleSubscriptedArray class definition
using namespace std;

// default constructor for class DoubleSubscriptedArray definition (default size 10)
DoubleSubscriptedArray::DoubleSubscriptedArray( int arrayRow, int arrayColumn )
    : row( arrayRow > 0 ? arrayRow : throw invalid_argument( "Array row size must be greater than 0" ) ),
      column( arrayColumn > 0 ? arrayColumn : throw invalid_argument( "Array column size must be greater than 0" ) ),
      ptr ( new int [ row * column ] )
{
    for ( size_t i = 0; i < getSize(); ++i )
        ptr[i] = 0; // set pointer-based array element
} // end DoubleSubscriptedArray default constructor

// copy constructor for class DoubleSubscriptedArray;
// must receive a reference to a DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray( const DoubleSubscriptedArray &arrayToCopy)
    : row( arrayToCopy.row ), column( arrayToCopy.column ),
      ptr( new int [ row * column ] )
{
    for ( size_t i = 0; i < getSize(); ++i )
        ptr[i] = arrayToCopy.ptr[i]; // copy into object
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

// overload assignment operator
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray &rignt )
{
    if ( &rignt != this ) // avoid self-assignment
    {
        // for DoubleSubscriptedArray of different sizes, deallocate original
        // left-size DoubleSubscriptedArray, then allocate new left-size DoubleSubscriptedArray
        if ( getSize() != rignt.getSize() )
        {
            delete [] ptr;
            row = rignt.row;
            column = rignt.column;
            ptr = new int [ getSize() ];
        } // end inner if

        for ( size_t i = 0; i < getSize(); ++i )
        {
            ptr[i] = rignt.ptr[i]; // copy array into object
        }
    } // end outer if

    return *this; // enable x = y = z, for example
} // end function operator=

// determine if two DoubleSubscriptedArray are equal and
// return true, otherwise return false
bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right) const
{
    if ( getSize() != right.getSize() )
        return false; // arrays of different number of elements

    for ( size_t i = 0; i < getSize(); ++i )
        if ( ptr[i] != right.ptr[i] )
            return false; // DoubleSubscriptedArray content are not equal

    return true; // DoubleSubscriptedArrays are equal
} // end function operator==

// overload bracket operator for non-const objects;
// refer return creates a modifiable lvalue
int &DoubleSubscriptedArray::operator()( int arrayRow, int arrayColumn )
{
    // check for subscript out-of-range error
    if ( arrayRow < 0 || arrayRow > row )
        throw out_of_range( "Row out of range" );
    if ( arrayColumn < 0 || arrayColumn > column )
        throw out_of_range( "Column out of range" );

    return ptr[ ( arrayRow - 1 ) * column + arrayColumn - 1 ]; // reference return
} // end function operator()

// overload bracket operator for const objects;
// refer return creates a modifiable rvalue
int DoubleSubscriptedArray::operator()( int arrayRow, int arrayColumn ) const
{
    // check for subscript out-of-range error
    if ( arrayRow < 0 || arrayRow > row )
        throw out_of_range( "Row out of range" );
    if ( arrayColumn < 0 || arrayColumn > column )
        throw out_of_range( "Column out of range" );

    return ptr[ ( arrayRow - 1 ) * column + arrayColumn - 1 ]; // returns copy of this element
} // end function operator()

// overload output operator for class DoubleSubscriptedArray
ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a )
{
    // output private ptr-based array
    for ( size_t i = 0; i < a.getSize(); ++i )
    {
        output << setw(12) << a.ptr[i];

        if ( ( i + 1) % a.column == 0 ) // row numbers per of output
            output << endl;
    }

    return output; // enable cout << x << y;
} // end function operator<<

// overload input operator for class DoubleSubscriptedArray
// inputs value for entire DoubleSubscriptedArray
istream &operator>>( istream &input, DoubleSubscriptedArray &a )
{
    for ( size_t i = 0; i < a.getSize(); ++i )
    {
        input >> a.ptr[i];
    }

    return input; // enables cin >> x >> y;
} // end function

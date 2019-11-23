// Assignment_05: Ex10_07.cpp
// DoubleSubscriptedArray class test program
#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;

int main()
{
    DoubleSubscriptedArray integers1( 3, 4 ); // 12-element DoubleSubscriptedArray
    DoubleSubscriptedArray integers2; // 10-element DoubleSubscriptedArray by default

    // print integers1 size and contents
    cout << "Size of DoubleSubscriptedArray integers1 is "
        << integers1.getSize()
        << "\nDoubleSubscriptedArray after initialization:\n" << integers1;

    // print integers2 size and contents
    cout << "Size of DoubleSubscriptedArray integers1 is "
        << integers2.getSize()
        << "\nDoubleSubscriptedArray after initialization:\n" << integers2;

    // input and print integers1 and integers2
    cout << "\nEnter 22 integers:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nAfter input, the DoubleSubscriptedArrays contain:\n"
        << "integers1:\n" << integers1
        << "integers2:\n" << integers2;

    // use overloaded inequality (!=) operator
    cout << "\nEvaluating: integers1 != integer2" << endl;

    if ( integers1 != integers2 )
        cout << "integers1 and integers2 are not equal" << endl;

    // create DoubleSubscriptedArray integers3 using integers1 as an
    // initializer; print size and contents
    DoubleSubscriptedArray integers3( integers1 ); // invokes copy constructor

    cout << "\nSize of DoubleSubscriptedArray integers3 is "
        << integers3.getSize()
        << "\nDoubleSubscriptedArray after initialization:\n" << integers3;

    // use overload assignment (=) operator
    cout << "\nAssignment integers2 to integers1:" << endl;
    integers1 = integers2; // note target DoubleSubscriptedArray is smaller

    cout << "integers1:\n" << integers1;
    cout << "integers2:\n" << integers2;

    // use overloaded equality (==) operator
    cout << "\nEvaluating: integers1 == integer2" << endl;

    if ( integers1 == integers2 )
        cout << "integers1 and integers2 are equal" << endl;

    // use overload bracket operator to create rvalue
    cout << "\nintegers1[2][2] is " << integers1( 2, 2 );

    // use overload bracket operator to create lvalue
    cout << "\n\nAssignment 1000 to integers1[2][2]" << endl;
    integers1( 2, 2 ) = 1000;
    cout << "integers1:\n" << integers1;

    // attempt to use out-of-range subscript
    try
    {
        cout << "\nAttempt to assign 1000 to integers1[3][5]" << endl;
        integers1( 3, 5 ) = 1000; // ERROR: subscript out of range
    } // end try
    catch ( out_of_range &ex)
    {
        cout << "An exception occurred: " << ex.what() << endl;
    } // end catch
} //end main

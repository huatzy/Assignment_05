//Array class test program.
#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;

int main()
{
    DoubleSubscriptedArray integers1( 3,4 );
    DoubleSubscriptedArray integers2;
    //print integers1 size and contents
    cout << "size of integers1 is:"<< integers1.getSize()<<"\n"<< "integers1:\n"<< integers1;
    cout <<"\n" ;
    //print integers2 size and contents
    cout << "size of integers2 is:"<< integers2.getSize()<<"\n"<< "integers2:\n"<< integers2;

    cout << "\nEnter 22 integers:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nintegers1:\n" << integers1
        << "\nintegers2:\n" << integers2;

    if ( integers1 != integers2 )
        cout << "integers1 and integers2 are not equal" << endl;

    cout << "\nAssignment integers2 to integers1:" << endl;
    integers1 = integers2;

    cout << "\nintegers1:\n" << integers1;
    cout << "\nintegers2:\n" << integers2;
    //use the = operator
    if ( integers1 == integers2 )
        cout << "integers1 and integers2 are equal" << endl;

    cout << "\nintegers1[3][2] is " << integers1( 3, 2 );

    cout << "\n\nAssignment 1000 to integers1[3][2]" << endl;
    integers1( 3, 2 ) = 1000;
    cout << "integers1:\n" << integers1;

    try
    {
        cout << "\nAttempt to assign 1000 to integers1[3][5]" << endl;
        integers1( 7,2 ) = 1000;
    }
    catch ( out_of_range &ex)
    {
        cout << "An exception occurred: " << ex.what() << endl;
    }
}

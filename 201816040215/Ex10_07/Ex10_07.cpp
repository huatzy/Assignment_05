#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray chessBorard( 3 , 5 );//chessBorard DoubleSubscriptedArray
    DoubleSubscriptedArray integers1();//DoubleSubscriptedArray by default
    //print chessBorard rows , columns and contents
    cout << "rows of chessBorard is:"
         << chessBorard.getRows()
         << "columns of chessBorara is:"
         << chessBorard.getColumns()
         << "\nchessBorard after initiaolization:\n" << chessBorard;
    //print integers1 rows , columns and contents
    cout << "rows of integers1 is:"
         << chessBorard.getRows()
         << "columns of integers1 is:"
         << chessBorard.getColumns()
         << "\nintegers after initiaolization:\n" << integers1;
    //input and print chessBorard and integer1
    cin >> chessBorard >> integers1;

    if( chessBorard != integers1 )
        cout << "chessBorard and integers1 is not equal" << endl;

    //create DoubleSubscriptedArray integers2 using chessBorard an
    //initializer;print rows , columns and contents
    DoubleSubscriptedArray integers2( chessBorard );
    cout << "rows of integers2 is:"
         << integers2.getRows()
         << "columns of integers2 is:"
         << integers2.getColumns()
         << "\nDoubleSubscriptedArray after initiaolization:\n" << integers2;
    //use overloaded assignment (=) operator
    cout << "\nAssigning integers1 to chessBorard" << endl;
    chessBorard = integers1;
    cout << "\nchessBorard:\n" << chessBorard;
    cout << "\nintegers1:\n" << integers1;
    cout << "\nEvaluating: chessBorard == integers1" << endl;
    //use overloaded subscript operator to create lvalue
    if( chessBorard == integers1 )
        cout << "integer1 and chessBorard are equal" << endl;

    cout << "\nchessBorard[5] is " << integer[5];

    cout << "\n\nAssigning 1000 to chessborard[5]" << endl;
    chessBorard[ 5 , 10 ] = 1000;
    cout << "chessBorard:\n" << chessBorard;
    //attempt to use out_of_range subscipt
    try
    {
        cout << "\nAttempt to assign 1000 is to chessBorard[15]" << endl;
        chessBorard[ 5 ,10 ] = 1000;//
    }//end try
    catch ( out_of_range &ex )
    {
        cout << "An exception occurred: " << ex.what() << endl;
    }//end catch
}//end main

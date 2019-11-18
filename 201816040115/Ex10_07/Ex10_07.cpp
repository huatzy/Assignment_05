//Ex10_07.cpp

#include"DoubleSubscriptedArray.h"

int main()
{
    DoubleSubscriptedArray doubleArray0;    //2 rows and 2 columns DoubleSubscriptedArray by default
    DoubleSubscriptedArray doubleArray1(4,3);   //construct 3 rows and 4 columns  DoubleSubscriptedArray

    //print doubleArray0 size and contents
    cout << "Size of DoubleSubscriptedArray doubleArray0 is "
        << doubleArray0.getSize() << "\nDoubleSubscriptedArray after initialization :\n"
        << doubleArray0 ;

        //print doubleArray1 size and contents
    cout << "Size of DoubleSubscriptedArray doubleArray1 is "
        << doubleArray1.getSize() << "\nDoubleSubscriptedArray after initialization :\n"
        << doubleArray1 ;
    //input and print doubleArray0 and doubleArray1
    cout << "\nEnter 16 number :" << endl;
    cin >> doubleArray0 >> doubleArray1;
    cout << "\nAfter input, the DoubleSubscriptedArray contain:\n"
        << "doubleArray0:\n" << doubleArray0
        <<"doubleArray1:\n" << doubleArray1;

    // use overloaded inequality (!=) operator
    cout << "\nEvaluating: doubleArray0!=doubleArray1" << endl;
    if(doubleArray0!=doubleArray1)
        cout << "doubleArray0 and doubleArray1 are not equal" << endl;
    //create DoubleSubscriptedArray doubleArray2 using doubleArray1 as an
    //initializer; print size and contents
    DoubleSubscriptedArray doubleArray2(doubleArray1);  //invokes copy constructor

    cout << "\nSize of DoubleSubscriptedArray doubleArray2 is "
        << doubleArray2.getSize() << "\nDoubleSubscriptedArray after initialization :\n"
        << doubleArray2 ;

    //use overloaded assignment (=) operator
    cout << "\nAssigning doubleArray1 to doubleArray0 :" << endl;
    doubleArray0=doubleArray1;

    cout << "doubleArray0:\n" << doubleArray0
        << "doubleArray1:\n" << doubleArray1;

    //use overloaded equality (==) operator
    cout << "\nEvaluating: doubleArray0==doubleArray1" << endl;

    if(doubleArray0==doubleArray1)
        cout << "doubleArray0 and doubleArray1 are equal" << endl;

    //use overloaded subscript operator to create rvalue
    cout << "\ndoubleArray0(2,2) is " << doubleArray0(2,2);

    //use overloaded subscript operator to create lvalue
    cout << "\n\nAssigning 1000 to doubleArray0(2,2) " << endl;
    doubleArray0(2,2)=1000;
    cout << "doubleArray0:\n" << doubleArray0;

    //attempt to use out-of-range subscript
    try
    {
        cout << "\nAttempt to assign 1000 to doubleArray0(5,5)" << endl;
        doubleArray0(5,5)=1000; //ERROR: subscript out of range
    }   //end try
    catch(out_of_range &ex)
    {
        cout << "An exception occurred:" << ex.what() << endl;
    }   //end catch

}//end main

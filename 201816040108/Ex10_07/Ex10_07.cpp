//Ex10_07.cpp
//DoubleSubscriptedArray test program
#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;

int main()
{
    DoubleSubscriptedArray integers1(3,3);
    DoubleSubscriptedArray integers2;
    cout<<"Size of DoubleSubscriptedArray integers1 is "<<integers1.getSize()
        <<"\nDoubleSubscriptedArray after initialization:\n"<<integers1;
    cout<<"\nSize of DoubleSubscriptedArray integers2 is "<<integers2.getSize()
        <<"\nDoubleSubscriptedArray after initialization:\n"<<integers2;
    cout<<"\nEnter 10 integers "<<endl;
    cin>>integers1>>integers2;

    cout<<"\nAfter input,the DoubleSubscriptedArray contain:\n"
        <<"integers1:\n"<<integers1
        <<"integers2:\n"<<integers2;

    if(integers1!=integers2)
        cout<<"integers1 and integers2 are not equal"<<endl;
    try
    {
        cout << "\nAttempt to assign 1000 to integers1(11,1)" << endl;
        integers1(11,1)=1000; //ERROR: subscript out of range
    }   //end try
    catch(out_of_range &ex)
    {
        cout << "An exception occurred:" << ex.what() << endl;
    }   //end catch
}

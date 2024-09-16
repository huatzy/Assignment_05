//整体差不多都是模仿10.10，10.11和10.9的书上的array实例，仅改动了数据成员和个别的地方

#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;

int main()
{
    DoubleSubscriptedArray integers1( 3, 4 ); // 12-element DoubleSubscriptedArray
    DoubleSubscriptedArray integers2; // 10-element DoubleSubscriptedArray by default

    cout<<integers1.getSize()<<endl;
    cout<<integers2.getSize()<<endl;

    cout << "\nDoubleSubscriptedArray after initialization:\n" << integers1;

    cout << "\nDoubleSubscriptedArray after initialization:\n" << integers2;


    cout << "\nEnter 22 integers:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nAfter input, the DoubleSubscriptedArrays contain:\n"<< "integers1:\n" << integers1<< "integers2:\n" << integers2;

    // use overloaded inequality (!=) operator
    cout << "\nEvaluating: integers1 != integer2" << endl;

    if ( integers1 != integers2 )
        cout << "integers1 and integers2 are not equal" << endl;

    // create DoubleSubscriptedArray integers3 using integers1 as an
    // initializer; print size and contents
    DoubleSubscriptedArray integers3( integers1 ); // invokes copy constructor

    cout<< "\nDoubleSubscriptedArray after initialization:\n" << integers3;

    cout << "\nAssignment integers2 to integers1:" << endl;
    integers1 = integers2; // note target DoubleSubscriptedArray is smaller

    cout << "integers1:\n" << integers1;
    cout << "integers2:\n" << integers2;

    // use overloaded equality (==) operator
    cout << "\                            nEvaluating: integers1 == integer2" << endl;

    if ( integers1 == integers2 )
        cout << "integers1 and integers2 are equal" << endl;


}

//整体大部分都是模仿10.10，10.11和10.9的书上的array实例，仅改动了数据成员和个别的地方

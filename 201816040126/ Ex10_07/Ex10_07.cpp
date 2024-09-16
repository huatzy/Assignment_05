#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;

int main()
{
    DoubleSubscriptedArray integers1(3,2);//set integer1
    DoubleSubscriptedArray integers2;//set integer2,the default is 2 rows and 2 columns.

    cout << "The row size of DoubleSubscriptedArray integers1 is : " << integers1.getRowSize() << endl;
    cout << "The column size of DoubleSubscriptedArray integers1 is : " << integers1.getColumnSize()
    << "\nThe DoubleSubscriptedArray integer1 is : \n" << integers1;
    //display the row size,column size and the integer1

    cout << "\nThe row size of DoubleSubscriptedArray integers2 is : " << integers2.getRowSize() << endl;
    cout << "The Column size of DoubleSubscriptedArray integers2 is : " << integers2.getColumnSize()
    << "\nThe DoubleSubscriptedArray integer2 is : \n" << integers2;
    //display the row size,column size and the integer2


    cout << "\nPlease enter 16 integers: "<<endl;
    cin >> integers1 >> integers2;
    //set number from integer1 to integer2

    cout << "\nAfter input , the DoubleSubscriptedArray integers1 is : \n" << integers1
    << "The integers2 is : \n" << integers2;
    //display the new integers2

    if(integers1!=integers2)
        cout << "\nThe integers1 and integers2 are not equal" << endl;
    //judge if they are not equal

    cout << "\n\nPrint integers1 to integers3 : " << endl;
    DoubleSubscriptedArray integers3(integers1);
    //print integer1 to integer3

    cout << "\nThe row size of DoubleSubscriptedArray integers1 is : " << integers3.getRowSize() << endl;
    cout << "The column size of DoubleSubscriptedArray integers1 is : " << integers3.getColumnSize()
    << "\nThe DoubleSubscriptedArray integers3 is: \n" << integers3;
    //display the row size ,column size and the integer3

    cout << "\nAssigning integers2 to integers1: "<<endl;
    integers1 = integers2;

    cout << "integers1: \n" << integers1
    << "\nThe new integers2 is : \n" << integers2;

    //cout<<"\nEvaluating: integers1 == integers2"<<endl;
    if(integers1 == integers2)
        cout << "\nThe integers1 and integers2 are equal" << endl;
    //judge if they are equal

    cout << "\nThe integers1(1,1) is : " << integers1(1,1);

    cout << "\n\nAssigning 100 to integers1(1,1)" << endl;
    integers1(1,1)=1000;
    cout << "\nintegers1: \n" << integers1;
    //set integer1(1,1)

    try
    {
        cout <<"\nAttempt to asssign 100 to integers1(5,6)"<<endl;
        integers1(5,6)=1000;
    }
    catch( out_of_range &ex )
    {
        cout << "An exception occurred:" << ex.what() << endl;
    }
    return 0;//judge the range,these codes come from book
}

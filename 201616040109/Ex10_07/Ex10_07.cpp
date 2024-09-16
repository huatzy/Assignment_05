#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray integers1(2,3);
    DoubleSubscriptedArray integers2;
    cout <<"Row size of DoubleSubscriptedArray integers1 is "<<integers1.getRowSize()<<endl;
    cout <<"Column size of DoubleSubscriptedArray integers1 is "<<integers1.getColumnSize() <<"\nDoubleSubscriptedArray after initialization:\n"<<integers1;

    cout <<"Row size of DoubleSubscriptedArray integers2 is "<<integers2.getRowSize()<<endl;
    cout <<"Column size of DoubleSubscriptedArray integers2 is "<<integers2.getColumnSize() <<"\nDoubleSubscriptedArray after initialization:\n"<<integers2;
    cout <<"\nEnter 16 integers:"<<endl;
    cin >> integers1>>integers2;

    cout <<"\nAfter input,the DoubleSubscriptedArray contain:\n"<<integers1<<"integers2:\n"<<integers2;
    cout <<"\nEvaluating: integers1 != integers2"<<endl;
    if(integers1!=integers2)
        cout<<"integers1 and integers2 are not equal"<<endl;
    DoubleSubscriptedArray integers3(integers1);
    cout <<"Row size of DoubleSubscriptedArray integers3 is "<<integers3.getRowSize()<<endl;
    cout <<"Column size of DoubleSubscriptedArray integers3 is "<<integers3.getColumnSize() <<"\nDoubleSubscriptedArray after initialization:\n"<<integers3;
    cout <<"Assigning integers2 to integers1:"<<endl;
    integers1=integers2;
    cout<<"integers11:\n"<<integers1<<"integers2:\n"<<integers2;
    cout<<"\nEvaluating: integers1 == integers2"<<endl;
    if(integers1==integers2)
        cout<<"integers1 and integers2 are equal"<<endl;
    cout<<"\nintegers1(1,1) is "<<integers1(1,1);
    cout<<"\n\nAssigning 100 to integers1(1,1)"<<endl;
    integers1(1,1)=1000;
    cout<<"integers1:\n"<<integers1;
    try
    {
        cout <<"\nAttempt to asssign 100 to integers1(5,6)"<<endl;
        integers1(5,6)=1000;
    }
    catch(out_of_range &ex)
    {
        cout <<"An exception occurred:"<<ex.what()<<endl;
    }
    return 0;
}

//Ex10_07.cpp
//DoubleSubscriptedArray test program
#include <iostream>
#include "DoubleSubscriptedArray.h"

using namespace std;

int main()
{
    DoubleSubscriptedArray integers1(3,3);//nine-element DoubleSubscriptedArray
    DoubleSubscriptedArray integers2;//1-element DoubleSubscriptedArray by default

    //print integers1 size and contents
    cout<<"Size of DoubleSubscriptedArray integers1 is "<<integers1.getSize()
        <<"\nDoubleSubscriptedArray after initialization:\n"<<integers1;
    //print integers2 size and contents
    cout<<"\nSize of DoubleSubscriptedArray integers2 is "<<integers2.getSize()
        <<"\nDoubleSubscriptedArray after initialization:\n"<<integers2;
    //input and print integers1 and integers2
    cout<<"\nEnter 10 integers "<<endl;
    cin>>integers1>>integers2;

    cout<<"\nAfter input,the DoubleSubscriptedArray contain:\n"
        <<"integers1:\n"<<integers1
        <<"integers2:\n"<<integers2;
    //use overloaded inequality (!=) operator
    cout<<"\nEvaluating: integers1 != integers2"<<endl;
    if(integers1!=integers2)
        cout<<"integers1 and integers2 are not equal"<<endl;

    DoubleSubscriptedArray integers3(integers1);//invokes copy constructor
    cout<<"\nSize of DoubleSubscriptedArray integers3 is "<<integers3.getSize()
        <<"\nDoubleSubscriptedArray after initialization :\n"<<integers3;
    //use overloaded assignment (=) operator
    cout<<"\nAssignment integers1 to integers2:"<<endl;
    integers2=integers1;
    cout<<"integers1 :\n"<<integers1
        <<"integers2 :\n"<<integers2;
    //use overloaded equality (==) operator
    cout<<"\nEvaluating: integers1==integers2"<<endl;
    if(integers1==integers2)
        cout<<"integers1 and integers2 are equal"<<endl;
    //use overloaded subscript operator to create rvalue
    cout<<"\n\nAssignment 1000 to integers1(2,1)"<<endl;
    integers1(2,1)=1000;
    cout<<"integers1:\n"<<integers1;
}//end main

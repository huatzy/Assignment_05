//Ex10_07.cpp
#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray object(4,5);//Construct an array object of four rows and five columns
    //cin>>object;//enter 20 number
    cout<<object;//Outputs an array in row and column format
    cout<<"Compare the element (1,2) to the element(2,3)"<<endl
        <<object.toString(object(1,2)==object(2,3))<<":by the == overload function"<<endl//use the == overload function to compare the two number
        <<object.toString(object(1,2)!=object(2,3))<<":by the != overload function"<<endl<<endl;//use the != overload function to compare the two number
     cout<<"swap the element (1,2) and the element(2,3)"<<endl;
     cout<<"Compare the element (1,2) to the element(2,3)"<<endl
        <<object.toString(object(1,2)==object(2,3))<<":by the == overload function"<<endl//use the == overload function to compare the two number
        <<object.toString(object(1,2)!=object(2,3))<<":by the != overload function"<<endl<<endl;//use the != overload function to compare the two number

    DoubleSubscriptedArray object2(6,4);//Construct an array object of four rows and five columns
    object2=object;//use = function assign object2 by object
    cout<<object2;//Outputs an array in row and column format
    cout<<endl<<"after change the element(1,2) by expression\"object2(1,2)=object2(2,2)\":"<<endl;
    object2(1,2)=object2(2,2);//change the value of element(1,2) by () overload function
    cout<<object2;//cout the object2 by << overload function
    return 0;
}

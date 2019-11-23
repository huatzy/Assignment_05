#include <iostream>
#include<stdexcept>
#include"DoubleSubscriptedArray.h"

using namespace std;

int main()
{
    DoubleSubscriptedArray p1(3,4);//12 elements DoubleSubscriptedArray
    DoubleSubscriptedArray p2;//100 elements DoubleSubscriptedArray

    //print p1 size and contents
    cout<<"Size of DoubleSubscriptedArray p1 is "
        <<p1.getsize()
        <<"\nDoubleSubscriptedArray after initialization :\n"<<p1;
    //print p2 size and contents
    cout<<"\nSize of p2 is "<<p2.getsize()
        <<"\nDoubleSubscriptedArray after initialization :\n"<<p2;
    //input p1 and p2
    cout<<"\nEnter 16 integers : \n";
    cin>>p1>>p2;
    //output p1 and p2 after input
    cout<<"\nAfter input ,p1 and p2 contain:\n"
         <<"p1:\n"<<p1
         <<"p2:\n"<<p2;
    //use overload inequality operator
    if(p1!=p2)
        cout<<"p1 and p2 are not equal!\n";
    else
        cout<<"p1 and p2 are equal!\n";
    //create DoubleSubscriptedArray p3 ,using assignment =
    DoubleSubscriptedArray p3;
    p3=p1;
    cout<<"\nOutput p3 after initialization :\n";
    cout<<p3;
    //use overload subscript operator to create rvalue
    cout<<"p1(2,3) is:\n"
    <<p1(2,3);
    //use overload subscript operator to create lvalue
    cout<<"\n\nAssignment 99 to p1(2,3)"<<endl;
    p1(2,3)=99;
    cout<<"\np1(2,3) is:"<<p1(2,3);
    return 0;
}

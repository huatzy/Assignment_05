#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;
int main()
{
    DoubleSubscriptedArray integers1(1,3);
    DoubleSubscriptedArray integers2;

    cout<<"size of DoubleSubscriptedArray integers1 is : "<<integers1.getsize()
         <<"\nDoubleSubscriptedArray integers1 is:\n"<<integers1;

    cout<<"size of DoubleSubscriptedArray integers2 is : "<<integers2.getsize()
         <<"\nDoubleSubscriptedArray integers2 is:\n"<<integers2;
    cout<<"\nEnter 12 integers:"<<endl;
    cin>>integers1>>integers2;

    cout<<"after input,the integers1 is :\n"<<integers1;
    cout<<"\nafter input,the integers2 is :\n"<<integers2;

    if(integers1!=integers2)
        cout<<"\nintegers1 != integers2\n";
    if(integers1==integers2)
        cout<<"\nintegers1 == integers2\n";

    DoubleSubscriptedArray integers3(integers1);
    cout<<"size of DoubleSubscriptedArray integers3 is : "<<integers3.getsize()
         <<"\nDoubleSubscriptedArray integers3 is:\n"<<integers3;

    cout<<"\nAssigning integers2 to integers1 :"<<endl;
    integers1=integers2;
    cout<<"size of DoubleSubscriptedArray integers2 is : "<<integers2.getsize()
         <<"\nDoubleSubscriptedArray integers2 is:\n"<<integers2;
    cout<<"size of DoubleSubscriptedArray integers1 is : "<<integers1.getsize()
         <<"\nDoubleSubscriptedArray integers1 is:\n"<<integers1;

    if(integers1==integers2)
        cout<<"\nintegers1 == integers2"<<endl;
    if(integers1!=integers2)
        cout<<"\nintegers1 != integers2"<<endl;

    cout<<"integers1(0,2) is "<<integers1(0,2);

    cout<<"Assigning 1000 to integer(0,2) "<<endl;
    integers3(0,2)=1000;
    cout<<"integers3 is :\n"<<integers3;
    return 0;
}

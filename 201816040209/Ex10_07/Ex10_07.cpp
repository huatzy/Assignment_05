#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    int a=0,b=0;

    //Create and initialize an object 1
    cout<<"Please enter the number of rows and columns of the first array to be created"<<endl;
    cin>>a>>b;
    DoubleSubscriptedArray doublesubscriptedarray1(a,b);

    //Create and initialize an object 2
    cout<<"Please enter the number of rows and columns of the second array to be created"<<endl;
    cin>>a>>b;
    DoubleSubscriptedArray doublesubscriptedarray2(a,b);

    cout<<"Please input doublesubscriptedarray1"<<endl;//input object 1
    cin>>doublesubscriptedarray1;
    cout<<"doublesubscriptedarray1 is :\n";
    cout<<doublesubscriptedarray1;

    cout<<"Please input doublesubscriptedarray2"<<endl;//input object 2
    cin>>doublesubscriptedarray2;
    cout<<"doublesubscriptedarray2 is :\n";
    cout<<doublesubscriptedarray2;

    //Access the elements in object 1
    cout<<"Please enter the location where you want to access the first array elements"<<endl;
    cin>>a>>b;
    cout<<"the first array elements is: "<<doublesubscriptedarray1(a,b)<<endl<<endl;

    //Access the elements in object 2
    cout<<"Please enter the location where you want to access the second array elements"<<endl;
    cin>>a>>b;
    cout<<"the second array elements is: "<<doublesubscriptedarray2(a,b)<<endl<<endl;

    //Compare two objects
    cout<<"Whether the array is equal"<<endl;
    cout<<((doublesubscriptedarray1==doublesubscriptedarray2)?"Array is equal":"Array is not equal")<<endl;

    cout<<"Whether the array is not equal"<<endl;
    cout<<((doublesubscriptedarray1!=doublesubscriptedarray2)?"Array is not equal":"Array is equal")<<endl<<endl;

    //Assign object 1 to object 2
    cout<<"doublesubscriptedarray1 = doublesubscriptedarray2"<<endl;
    doublesubscriptedarray1=doublesubscriptedarray2;
    cout<<"doublesubscriptedarray1 is :\n";
    cout<<doublesubscriptedarray1;
    cout<<"doublesubscriptedarray2 is :\n"<<endl;
    cout<<doublesubscriptedarray2;

    //Compare two objects
    cout<<"Whether the two array is equal"<<endl;
    cout<<((doublesubscriptedarray1==doublesubscriptedarray2)?"Array is equal":"Array is not equal")<<endl;
    cout<<"Whether the array is not equal"<<endl;
    cout<<((doublesubscriptedarray1!=doublesubscriptedarray2)?"Array is not equal":"Array is equal")<<endl<<endl;

}


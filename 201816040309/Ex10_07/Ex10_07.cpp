#include <iostream>
#include "DoubleSubscriptedArray.h"
int main()
{
    int x,y;
    cout<<"Please input x,y as the Array's x,y"<<endl;
    cin>>x>>y;
    DoubleSubscriptedArray Array(x,y);
    cout<<"please input " <<x*y<< "integers as you Array's element"<<endl;
    cin>>Array;
    cout<<"Please input x,y as the Array1's x,y"<<endl;
    cin>>x>>y;
    DoubleSubscriptedArray Array1(x,y);
    cout<<"please input " <<x*y<< "integers as you Array1's element"<<endl;
    cin>>Array1;
    if(Array!=Array1)
    {
        cout<<"Array and Array1 are not equal"<<endl;
    }
    else
        cout<<"a and b are equal;
    cout<<"Assigning b to a"<<endl;\
    Array=Array1;
    cout<<"a[0][0] is "<<Array(0,0)<<endl;
    cout<<"Assigning 100 to Array[0][0]"<<endl;
    Array(0,0)=100;
    cout<<"Array is:"<<endl<<Array;
    cout<<"Array1 is:"<<endl<<Array1;
}


}

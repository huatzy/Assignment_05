#include <iostream>
#include<stdexcept>
#include"DoubleScriptedArray.h"

using namespace std;

int main()
{
    DoubleScriptedArray array(3,4);

    cout<<"Please enter a two-dimensional array of ";
    cout<<array.getRow()<<" rows and "<<array.getColumn()<<" columns.";
    cout<<endl;
    cin>>array;
    system("cls");
    cout<<endl;

    cout<<"The elements of the two-dimensional array are:"<<endl;
    cout<<array;

    system("pause");
    int m,n;
    cout<<"Please enter the subscript of the element you want to access:"<<endl;
    cin>>m;
    cin>>n;
    cout<<endl;
    cout<<"The element is:"<<array(m,n)<<endl;


}

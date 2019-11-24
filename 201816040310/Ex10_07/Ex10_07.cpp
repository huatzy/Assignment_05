#include "DoubleSubscriptedArray.h"
#include <iostream>
using namespace std;
int main()
{
    DoubleSubscriptedArray a(2, 2), b; //declare DoubleSubscriptedArray a and b
	
    cout<<"Please input a DoubleSubscriptedArray a "<<a.shape()<<endl; 
    cin>>a;
	cout<<"DoubleSubscriptedArray a "<<a.shape()<<endl;
    cout<<a;
	cout<<"DoubleSubscriptedArray b "<<b.shape()<<endl;
    cout<<b;
	
	cout<<"a == b ?  "<<(a==b?"true":"false")<<endl; // check a is equal to b
	
	b=a; // assign a to b 
	cout<<"a == b ?  "<<(a==b?"true":"false")<<endl; // check again
	
    cin >> b(1, 1); // change a(1,1) element]
	cout<<"DoubleSubscriptedArray b "<<b.shape()<<endl;
    cout << b; // print a 
}
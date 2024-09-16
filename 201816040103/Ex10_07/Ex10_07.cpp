#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main() 
{
	DoubleSubscriptedArray integers1(2,3);
	DoubleSubscriptedArray integers2(2,2);
	cin>>integers1>>integers2;
	cout<<"\nAfter input,the DoubleSubscriptedArray contain:\n"
		<<"integers1 is:\n"<<integers1
		<<"integers2 is:\n"<<integers2;
	if(integers1 != integers2)
		cout<<"integers1 and integers2 are not equal"<<endl;
	DoubleSubscriptedArray integers3(integers1);
	cout<<"integers3 is:\n"<<integers3<<endl;
	cout<<"Assigning integers2 to integers1:"<<endl;
	integers2=integers1;
	cout<<"integers1 is:"<<endl;
	cout<<integers1<<endl;
	cout<<"integers2 is:"<<endl;
	cout<<integers2<<endl;
	if(integers1 == integers2)
		cout<<"integers1 and integers2 is equal"<<endl;
}

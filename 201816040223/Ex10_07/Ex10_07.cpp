#include<iostream>
#include<stdexcept>
#include"DoubleSubscriptedArray.h"
using namespace std;
int main()
{
    DoubleSubscriptedArray chessBorard(3, 3);
	cout << "Please enter nine Numbers\n";
	cin>>chessBorard;
	cout<<chessBorard;
	cout<<chessBorard(2,2);
}

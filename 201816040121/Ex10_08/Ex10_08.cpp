//Ex10_07::ComplexProTest.cpp
#include <iostream>
#include <iomanip>
#include "ComplexPro.h"
using namespace std;
int main()
{
	ComplexPro x, y(4.3, 8.2), z(3.3, 1.1);//define two objects
	cout << "Please input value of x" << endl;
	cin >> x;//use overloaded input operator
	cout << "Product of x and y is :";
	cout << (x * y)<< endl;//use overloaded product operator and ontput operator
	cout << "Product of x and z is :";
	cout <<( x * z )<< endl;//use overloaded product operator and ontput operator
	
	if (x == y)//use overloaded equal operator
		cout << "x == y";
	if (x != y)//use overloaded inequal operator
		cout << "x != y";
	return 0;
}

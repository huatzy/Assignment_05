//Ex10_7:DoubleSubscriptedArrayTest.cpp
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Brackets.h"
using namespace std;
int main()
{
	DoubleSubscriptedArray integers1(2, 2);
	DoubleSubscriptedArray integers2;

	//print integers1 size and contents
	cout << "Size of DoubleSubscriptedArray integers1 is:"
		<< integers1.getSize()
		<< "\nDoubleSubscriptedArray after initialization:\n" << integers1;
	
	//print integers2 size and contents
	cout << "Size of DoubleSubscriptedArray integers2 is:"
		<< integers2.getSize()
		<< "\nDoubleSubscriptedArray after initialization:\n" << integers2;

	//input and print integers1 and integers2
	cout << "\nEnter 29 integers:" << endl;
	cin >> integers1 >> integers2;
	cout << "\nAfter input, the DoubleSubscriptedArrays contain:\n"
		<< "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	//use overloaded inequality (!=) operator
	cout << "\nEvaluating: integers1 != integers2 are not equal" << endl;
	if (integers1 != integers2)
		cout << "integers1 and integers2 are not equal" << endl;

	//create DoubleSubscriptedArray integers3 using integers1 as an
	//initializer:print size and contents
	DoubleSubscriptedArray integers3(integers1);

	cout << "\nSize of DoubleSubscriptedArray integers3 is"
		<< integers3.getSize()
		<< "\nDoubleSubscriptedArray after initialization:\n" << integers3;

	//use overloaded assignment (=) operator
	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2;

	cout << "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	//use overloaded equality (==) operator
	cout << "\nEvaluating: integers1 == integers2" << endl;
	if (integers1 == integers2)
		cout << "integers1 and integers2 are euqal" << endl;

	//use overloaded subscript operator to create rvalue
	cout << "\nintegers1(2, 10) is" << integers1(2, 5);

	//use overloaded subscript operator to create lvalue
	cout << "\nAssigning 1000 to integers1(2, 10)" << endl;
	integers1(2, 5) = 1000;
	cout << "integers1:\n" << integers1;

	//attempt to use out-of-range subscript
	try
	{
		cout << "\nAttempt to assign 1000 to integers1(5, 6)" << endl;
		integers1(5, 6) = 1000;
	}
	catch (out_of_range & ex)
	{
		cout << "An exception occurred:" << ex.what() << endl;
	}

	return 0;
}

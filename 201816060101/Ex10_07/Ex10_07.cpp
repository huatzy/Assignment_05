#include "DoubleSubscriptedArray.h"
#include <iostream>
using namespace std;

int main() {
	int r, c;
	cout << "Please enter rows and columns of the array: ";
	cin >> r >> c;
	DoubleSubscriptedArray d(r, c);

	cout << "\nChange the element of row 1, column 1 to 5: \n";
	d(1, 1) = 5;

	cout << "The elements in row 1, column 1 are: ";
	cout << d(1, 1) << "\n";
	DoubleSubscriptedArray e(2, 2);
	cout << "\nArrays C and D" << (d == e ? " is" : " isn't") << " equal\n";
	cout << "\nArray D is:\n" << d;
	return 0;
}

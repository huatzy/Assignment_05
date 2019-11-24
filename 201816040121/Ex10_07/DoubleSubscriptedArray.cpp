//Ex10_07:DoubleSubscriptedArray.cpp
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Brackets.h"
using namespace std;
//default constructor for class DoubleSubscriptedArray(default size 25)
DoubleSubscriptedArray::DoubleSubscriptedArray(int a, int b)
{
	if (a >= 0 && a <= 5 && b >= 0 && b <= 5)
		size = a * b;
	else
		throw invalid_argument(" SubScriptedArray size is out of range! ");
	ptr = new int[size];
	for (size_t i = 0; i < size; ++i)
		ptr[i] = 0;
}
//copy constructor for class DoubleSubscriptedArray
//must receive a reference to an DoubleSubscriptedArray
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &arrayToCopy)
{
	x = arrayToCopy.x;
	y = arrayToCopy.y;
	size = arrayToCopy.size;
	ptr = new int[size];
	for (size_t i = 0; i < size; ++i)
		ptr[i] = arrayToCopy.ptr[i];
}
//destructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
	delete[] ptr;
}
//return number of element of DoubleSubscriptedArray
size_t DoubleSubscriptedArray::getSize() const
{
	return size;
}
//const return avoids:(a1 = a2) = a3
const DoubleSubscriptedArray& DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray& right)
{
	if (&right != this)
	{
		if (size != right.size)
		{
			delete[] ptr;
			size= right.size;
			x = right.x;
			y = right.y;
			ptr = new int[size];
		}
		for (size_t i = 0; i < size; ++i)
			ptr[i] = right.ptr[i];
	}
	return *this;
}
//determine if two DoubleSubscriptedArrays are equal and return true, otherwise return false
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray& right) const
{
	if (size != right.size)
		return false;

	for (size_t i = 0; i < size; ++i)
		if (ptr[i] != right.ptr[i])
			return false;

	return true;
}
//determine if two DoubleSubscriptedArrays are inequal and return true, otherwise return false
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray& right) const
{
	if (size != right.size)
		return true;
	for (size_t i = 0; i < size; ++i)
		if (ptr[i] != right.ptr[i])
			return true;

	return false;
}
//overloaded subscript operator for non-const Arrays reference return creates a modifiable lvalue
int& DoubleSubscriptedArray::operator()(int a, int b)
{
	if (a<0||a > 5 || b < 0 || b>5)
		throw out_of_range("Subscript out of range");
	size_t t = a * b;
	return ptr[t];
}
//overloaded subscript operator for const Arrays reference return creates an rvalue
int DoubleSubscriptedArray::operator()(int a, int b) const
{
	if (a < 0 || a > 5 || b < 0 || b>5)
		throw out_of_range("Subscript out of range");
	size_t t = a * b;
	return ptr[t];
}
//overloaded input operator for class DoubleSubscriptedArray inputs values for entire Array
istream& operator>>(istream& input, DoubleSubscriptedArray& a)
{
	for (size_t i = 0; i < a.size; ++i)
		input >> a.ptr[i];

	return input;
}
//overloaded output operator for class DoubleSubscriptedArray
ostream& operator<<(ostream& output, const DoubleSubscriptedArray& a)
{
	for (size_t i = 0; i < a.size; ++i)
	{
		output << setw(12) << a.ptr[i];
		if ((i + 1) % 5 == 0)
			output << endl;
	}
	if (a.size % 5 != 0)
		output << endl;
	return output;
}


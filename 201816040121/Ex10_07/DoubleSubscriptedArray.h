//Ex10_07:DoubleSubscriptedArray.h
#include <iostream>
using namespace std;
#ifndef BRACKS_H
#define BRACKS_H
//class Bracks definition
class DoubleSubscriptedArray
{
	friend ostream& operator<<(ostream&, const DoubleSubscriptedArray&);
	friend istream& operator>>(istream&, DoubleSubscriptedArray&);
public:
	explicit DoubleSubscriptedArray(int = 5, int = 5);//default constructor
	DoubleSubscriptedArray(const DoubleSubscriptedArray&);//copy constructor
	~DoubleSubscriptedArray();//destructor
	size_t getSize() const;//retnrn size

	const DoubleSubscriptedArray& operator=(const DoubleSubscriptedArray&);//assignment operator
	bool operator==(const DoubleSubscriptedArray&) const;//equality operator

	bool operator!=(const DoubleSubscriptedArray&) const;//inequality operator
	int& operator()(int, int);//subscript operator for non-const objects returns modifiable lvalue
	int operator()(int, int) const;//subscript operator for const objects returns rvalue

private:
	int x;//x value
	int y;//y value
	size_t size;//pointer-based array size
	int* ptr;//pointer to first element of pointer-based array
};
#endif

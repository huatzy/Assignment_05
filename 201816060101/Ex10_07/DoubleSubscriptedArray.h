#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H

#include <iostream>

using namespace std;

class DoubleSubscriptedArray {
public:
	DoubleSubscriptedArray(const int r, const int &c);
	int operator()(const int &i, const int &j) const;
	int &operator()(const int &i, const int &j);
	bool operator==(const DoubleSubscriptedArray &b) const;
	bool operator!=(const DoubleSubscriptedArray &b) const;
	DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &b);
	friend ostream &operator<<(ostream &out, DoubleSubscriptedArray &a);
private:
	int *data, r, c;
};

#endif

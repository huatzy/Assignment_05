#include "DoubleSubscriptedArray.h"
#include <cstring>

DoubleSubscriptedArray::DoubleSubscriptedArray(const int r, const int &c)
{
	data = new int[r * c];
	this->r = r;
	this->c = c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			data[i * c + j] = 0;
		}
	}
}

int DoubleSubscriptedArray::operator()(const int & i, const int & j) const
{
	if (i > r || j > c) return -1;
	return data[(i - 1) * c + j - 1];
}

int & DoubleSubscriptedArray::operator()(const int & i, const int & j)
{
	return data[(i - 1) * c + j - 1];
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray & b) const
{
	if (c != b.c || r != b.r) return 0;
	for (int i = 0; i < r * c; i++) {
		if (data[i] != b.data[i]) return 0;
	}
	return 1;
}

bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray & b) const
{
	return !(*this == b);
}

DoubleSubscriptedArray & DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray & b)
{
	delete data;
	r = b.r;
	c = b.c;
	data = new int[r * c];
	for (int i = 0; i < r * c; i++) {
		data[i] = b.data[i];
	}
	return *this;
}

ostream & operator<<(ostream & out, DoubleSubscriptedArray & a)
{
	for (int i = 0; i < a.r; i++) {
		for (int j = 0; j < a.c; j++) {
			out << a.data[i * a.c + j] << " ";
		}
		out << "\n";
	}
	return out;
}

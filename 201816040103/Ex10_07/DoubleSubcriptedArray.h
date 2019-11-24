#ifndef DoubleSubscriptedArray_H
#define DoubleSubscriptedArray_H
#include <iostream>
using namespace std;
class DoubleSubscriptedArray
{
	friend std::ostream &operator<<( std::ostream &,DoubleSubscriptedArray & );
	friend std::istream &operator>>( std::istream &,DoubleSubscriptedArray & );
public:
	explicit DoubleSubscriptedArray(int,int);
	DoubleSubscriptedArray(const DoubleSubscriptedArray &);
	~DoubleSubscriptedArray();
	size_t getSize() const; 
	int &operator()(int,int);
	int &operator()(int,int) const;
	const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
	bool operator==(const DoubleSubscriptedArray &)const;
	bool operator!=(const DoubleSubscriptedArray &)const;
private:
	int rows,columns;
	size_t size;
	int *ptr;
};
#endif

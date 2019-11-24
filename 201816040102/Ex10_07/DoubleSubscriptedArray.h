#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDE
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDE
#include <iostream>
using namespace std;
class DoubleSubscriptedArray
{  
	friend istream &operator>>( istream & , DoubleSubscriptedArray & ); 
	friend ostream &operator<<( ostream & , const DoubleSubscriptedArray & );
public:
	explicit DoubleSubscriptedArray(int ,int);
	void setrows(int);
	int getrows();
	void setcolumns(int);
	int getcolumns();
	bool operator==(const DoubleSubscriptedArray &) const;
	DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &) const; 
	bool operator!=(const DoubleSubscriptedArray &) const;
    int &operator ()(int,int);
	int operator ()(int,int) const;
private:
	int row;
	int column;
	int *p;
}; 

#endif

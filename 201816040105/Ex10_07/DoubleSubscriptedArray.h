#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H

#include <iostream>

class DoubleSubscriptedArray
{
	friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
	friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);
	
	public:
		explicit DoubleSubscriptedArray(int=10,int=10);
		DoubleSubscriptedArray (const DoubleSubscriptedArray &);
		~DoubleSubscriptedArray ();
		size_t getSize() const;
		
		const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
		bool &operator==(const DoubleSubscriptedArray &) const;
		bool &operator!=(const DoubleSubscriptedArray &right) const
		{
			return ! (*this==right);
		}
		
		int &operator()(int,int);
		int operator()(int,int) const;
	
	private:
		int rows;
		int columns;
		int *prt;
};
#endif

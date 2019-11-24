#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include <iostream>

using namespace std;

class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &, const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &, DoubleSubscriptedArray &);

public:
     DoubleSubscriptedArray (int =3, int=5);
     DoubleSubscriptedArray(const DoubleSubscriptedArray &);
     ~DoubleSubscriptedArray();
     size_t getSize() const;//计算二维数组长度
     const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
     bool operator == (const DoubleSubscriptedArray &)const;
     bool operator != (const DoubleSubscriptedArray &right )const
     {
         return ! (*this == right);
     }
     int &operator[](int);
     int operator[](int)const;
private:
     size_t size;
     int *ptr;
};// end class DoubleSubscriptedArray
#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

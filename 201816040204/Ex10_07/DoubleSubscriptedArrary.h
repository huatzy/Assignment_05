#include <iostream>
#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

class DoubleSubscriptedArray
{
    friend std::ostream &operator << (std::ostream &, const DoubleSubscriptedArray &);
    friend std::istream &operator >> (std::ostream &, DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray(int=1 , int=1 );
    int operator& (int, int);
    int operator& (int , int) const;
    bool operator == (const DoubleSubscriptedArray &) const;
    bool operator != (const DoubleSubscriptedArray &) const;
    const DoubleSubscriptedArray &operator = ( const DoubleSubscriptedArray & );
private:
    int h;
    int l;
    int *w;
};

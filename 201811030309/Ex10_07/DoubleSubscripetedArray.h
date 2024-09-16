#ifndef DOUBLESUBSCRIPETEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPETEDARRAY_H_INCLUDED

#include <iostream>
using namespace std;

class DoubleSubscripetedArray
{
    friend ostream &operator<<(ostream &, const DoubleSubscripetedArray &);
    friend istream &operator>>(istream &, DoubleSubscripetedArray &);
public:
    DoubleSubscripetedArray(int=3, int=3);
    int &operator()(int, int);
    //const &int operator()(int, int);
    bool operator==(const DoubleSubscripetedArray&) const;
    bool operator!=(const DoubleSubscripetedArray&) const;
    const DoubleSubscripetedArray &operator=(const DoubleSubscripetedArray &);
private:
    int x, y;
    int *p;
};

#endif // DOUBLESUBSCRIPETEDARRAY_H_INCLUDED

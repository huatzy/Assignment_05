#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include <iostream>
using namespace std;

class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream&,DoubleSubscriptedArray&);
    friend istream &operator>>(istream&,DoubleSubscriptedArray&);
    public:
    DoubleSubscriptedArray(int,int);
    bool operator==(DoubleSubscriptedArray&);
    bool operator!=(DoubleSubscriptedArray&);
    void operator=(DoubleSubscriptedArray&);
    int& operator()(int, int);
    const int& operator()(size_t, size_t);
    int* getA();
    int  getM();
    int  getN();

    private:
    int* A;
    int  M, N;



};


#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include<iostream>
#include"DoubleSubscriptedArray.h"
using namespace std;

class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &,DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray( int , int );
    ~DoubleSubscriptedArray();
    int getColumn();
    int getRow();
    int &operator()( int , int );
    int operator()( int , int )const;
    bool operator==(DoubleSubscriptedArray &)const;
    bool operator!=(DoubleSubscriptedArray &)const;
    DoubleSubscriptedArray &operator=(DoubleSubscriptedArray &);
private:
    int row;
    int column;
    int *ptr;
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

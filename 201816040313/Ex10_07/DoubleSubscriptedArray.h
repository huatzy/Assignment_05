#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include <iostream>
#include <cstddef>
class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray & );//overload output
    friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray & );//overload input

public:
    DoubleSubscriptedArray(int=3,int=5);//constructor
    DoubleSubscriptedArray(const DoubleSubscriptedArray &);//copy constructor
    ~DoubleSubscriptedArray();//destructor
    int &operator()(int=0,int=0);//overload (),as a modifiable left value
    int &operator()(int=0,int=0)const;//overload (),as the right value
    int getrows()const;//return rows
    int getcolumns()const;//return columns
    bool operator==(const DoubleSubscriptedArray &)const;//overload ==
    bool operator!=(const DoubleSubscriptedArray &)const;//overload !=
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//overload =

private:
    int rows;
    int columns;
    int *chessBorard;
};


#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

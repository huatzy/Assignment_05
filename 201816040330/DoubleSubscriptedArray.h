//整体差不多都是模仿10.10，10.11和10.9的书上的array实例，仅改动了数据成员和个别的地方

#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include <iostream>

using namespace std;

class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &,DoubleSubscriptedArray &);
public:
    explicit DoubleSubscriptedArray(int=2,int=5);//default constructor
    DoubleSubscriptedArray(const DoubleSubscriptedArray &);//copy constructor

    size_t getSize()const;//return size


    int  &operator()(int,int);
    int operator()(int,int)const;
    bool operator==(const DoubleSubscriptedArray &)const;//equality operator
    bool operator!=(const DoubleSubscriptedArray &)const;

    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//assignment operator
private:
    size_t row;
    size_t column;
    int *ptr;


};//end class DoubleSubscriptedArray

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
//整体差不多都是模仿10.10，10.11和10.9的书上的array实例，仅改动了数据成员和个别的地方

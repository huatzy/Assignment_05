#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include<iostream>>
using std::istream;
using std::ostream;

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &,DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray(int=9,int=9);//default constructor
    DoubleSubscriptedArray(const DoubleSubscriptedArray &);
    ~DoubleSubscriptedArray();//destructor
    int getcolumnssize()const;
    int getrowssize()const;
     DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
    bool operator==(const DoubleSubscriptedArray &)const;
    bool operator!=(const DoubleSubscriptedArray &right)const
    {
        return!(*this==right);
    }
    int &operator()(int,int);
    int operator()(int,int)const;

private:
    int rows;
    int columns;
    int *ptr;
};

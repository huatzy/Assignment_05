#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include<iostream>
class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
    friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);
public:
    explicit DoubleSubscriptedArray(int =3,int=5);// conversion/default constructor
    DoubleSubscriptedArray(const DoubleSubscriptedArray &);// conversion constructor
    int getRows()const;
    int getColumns()const;
    bool operator==(DoubleSubscriptedArray &);//Judge whether two numbers are equal
    bool operator!=(DoubleSubscriptedArray &);//Judge whether two numbers are not equal
    int &operator()(int=0,int=0);
    int &operator()(int=0,int=0)const;
private:
    int rows;
    int columns;
    int *ptr;
};


#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

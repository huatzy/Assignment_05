//DoubleSubscriptedArray.h
#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include <iostream>
class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
    friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray(const int & rowParameter=1,const int & columnParameter=1);//defualt constructor
    int & operator()(const int & rowParameter=0,const int &columnParameter=0);
    const int & operator()(const int& rowParameter=0,const int & columnParameter=0)const;
    bool operator==(const DoubleSubscriptedArray &);
    bool operator!=(const DoubleSubscriptedArray &);
    DoubleSubscriptedArray & operator=(const DoubleSubscriptedArray &);
    std::string toString(const int &)const;

private:
    int *ptr;
    int row;
    int column;

};


#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

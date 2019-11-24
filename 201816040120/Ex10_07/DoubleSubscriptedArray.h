#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include<iostream>
class DoubleSubscriptedArray
{
    friend std::ostream& operator<<(std::ostream & , const DoubleSubscriptedArray &);
    friend std::istream& operator>>(std::istream & , DoubleSubscriptedArray &);
public:
    explicit DoubleSubscriptedArray(int ,int);
    int operator()(int , int);//return modifiable lvalue;
    int operator()(int , int) const;// return rvalue;
    const DoubleSubscriptedArray &operator= (const DoubleSubscriptedArray &);
    bool  operator!= (const DoubleSubscriptedArray &)const;
    bool  operator== (const DoubleSubscriptedArray &)const;

private:
    size_t row;
    size_t column;
    int *ptr;
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

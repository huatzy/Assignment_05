#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H

#include <iostream>
using namespace std;
class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &,DoubleSubscriptedArray &);
public:
    explicit DoubleSubscriptedArray(int =3,int =3);
    DoubleSubscriptedArray(const DoubleSubscriptedArray &);
    ~DoubleSubscriptedArray();
    size_t getsize() const;

    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
    bool operator==(const DoubleSubscriptedArray &)const;
    bool operator!=(const DoubleSubscriptedArray &right)const
    {
        return ! (*this==right);
    }

    int &operator()(int ,int );
    int operator()(int ,int )const;

private:
    size_t row;
    size_t column;
    size_t size;
    int *ptr;
};
#endif

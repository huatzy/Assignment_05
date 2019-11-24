#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

#include <iostream>
using namespace std;
class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &,DoubleSubscriptedArray &);

public:
    explicit DoubleSubscriptedArray(int =3,int =5);
    ~DoubleSubscriptedArray();
    size_t getSize() const;
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
    bool operator==(const DoubleSubscriptedArray &) const;

    bool operator!=(const DoubleSubscriptedArray &right) const
    {
        return !(*this == right);
    }
    int &operator()(int ,int);
    int operator()(int ,int) const;
private:
    size_t sizeL,sizeH;
    int *ptr;
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

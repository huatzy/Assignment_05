#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include<iostream>
class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
    friend std::istream &operator>>(istream &,DoubleSubscriptedArray &);
public:
    explicit DoubleSubscriptedArray(int=10);
    DoubleSubscriptedArray(const DoubleSubscriptedArray &);
    ~DoubleSubscriptedArray();
    size_t getSize() const;

    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
    bool operator==(const DoubleSubscriptedArray &)const;

    bool operator!=(const DoubleSubscriptedArray &right )const;
    {
        return !(*this==right);
    }

    int &operator[](int);

    int operator[](int)const;

private:
    size_t size;
    int *ptr;
};


#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

#ifndef DOUBLESUBSCRIPPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPPTEDARRAY_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &,DoubleSubscriptedArray &);
public:
    explicit DoubleSubscriptedArray(int = 10,int =10);
    DoubleSubscriptedArray( const DoubleSubscriptedArray & );
    ~DoubleSubscriptedArray();
    size_t getSize() const;

    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray & );
    bool operator==( const DoubleSubscriptedArray &) const;

    bool operator!=( const DoubleSubscriptedArray &right ) const
    {
        return ! ( *this == right );
    }
//÷ÿ‘ÿ[]
    int &operator[](int );

    int operator[](int )const;
//÷ÿ‘ÿ£®£©
    int &operator()(int, int);

    int operator()(int,int)const;

private:
    int wid;
    int len;
    size_t size;
    int *ptr;
};


#endif // DOUBLESUBSCRIPPTEDARRAY_H_INCLUDED

#ifndef DoubleSubscriptedArray_H
#define DoubleSubscriptedArray_H
#include <iostream>
#include <array>
using namespace std;
class DoubleSubscriptedArray
{
    friend std::ostream &operator<<( std::ostream &, const DoubleSubscriptedArray &);
    friend std::istream &operator>>(std::istream &, DoubleSubscriptedArray &);

public:
    DoubleSubscriptedArray(int,int);
    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray &);
    bool  operator==( const DoubleSubscriptedArray &right) const;
    int operator( )(int,int);
    int & operator( )(int ,int) const;
    bool operator !=(const DoubleSubscriptedArray &right)
    {
        return !(*this==right);
    }

private:
    int x;
    int y;
    int *ptr;
};
#endif

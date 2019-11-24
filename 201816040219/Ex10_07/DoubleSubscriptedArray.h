#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H

#include <iostream>
#include <vector>
using namespace std;

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(std::ostream &, const DoubleSubscriptedArray &);
    friend std::istream &operator>>(std::istream &, DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray(int = 0, int = 0);
    bool operator==(const DoubleSubscriptedArray &) const;  // operator==
    bool operator!=(const DoubleSubscriptedArray &) const;  //operator!=
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//operator=
    int &operator()(int r, int c);//row and column

private:
    int row, column;
    vector < int > a;
};
#endif

//
//  DoubleSubscriptedArray.h
//  Ex10_07
//
//  Created by misonomayubw on 2019/11/24.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H

#include <iostream>
#include <vector>
using namespace std;

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(ostream &, const DoubleSubscriptedArray &);
    friend std::istream &operator>>(istream &, DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray(int = 0, int = 0);
    bool operator==(const DoubleSubscriptedArray &) const;
    bool operator!=(const DoubleSubscriptedArray &right)const
     {
         return ! (*this==right);
     }
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
    int &operator()(int r, int c);

private:
    int row, column;
    vector < int > v;
};
#endif // DOUBLESUBSCRIPTEDARRAY_H


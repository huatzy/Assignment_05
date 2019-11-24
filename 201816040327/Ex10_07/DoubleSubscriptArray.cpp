//
//  DoubleSubscriptedArray.cpp
//  Ex10_07
//
//  Created by misonomayubw on 2019/11/24.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include <iostream>
#include<iomanip>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int r, int c)
    :row(r), column(c)
{
    int i;
    for(i = 0; i < row*column; ++i)
        v.push_back(0);
}

int &DoubleSubscriptedArray::operator()(int r, int c)
{
    return this->v[r*c+c+1];
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &d) const
{
int flag=0;
if(column!=r.column||row!=r.row)
    return false;
else
{
    for(int i=0;i<row;++i)
        for(int j=0;j<column;++j)
    {
        if(p[i][j]!=r.p[i][j])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return false;
    else
        return true;
}


bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &d) const
{
    if(*this == d)
        return false;
    else
        return true;
}

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &d)
{
    this->v = d.v;  //数组赋值
    return *this;
}

ostream &operator<<( ostream &output, const DoubleSubscriptedArray &d)
{
    for(size_t i=0;i<r.size;i++)
    {
        output<<setw(12)<<r.ptr[i];
        if((i+1)%4==0)
            cout<<endl;
    }
    if(r.size%r.column!=0)
        output<<endl;
    return output;
}

istream &operator>>( istream &input, DoubleSubscriptedArray &d)
{
    for(size_t i=0;i<r.size;i++)
         input>>r.ptr[i];

     return input;
}

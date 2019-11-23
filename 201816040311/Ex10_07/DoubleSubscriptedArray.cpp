#include <vector>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;

//默认构造函数
DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)
{
    rows=a;
    columns=b;
    for(int i=0;i<rows*columns;i++)
    {
        darray.push_back(0);
    }
}

//重载（）运算符，实现左值调用
int & DoubleSubscriptedArray::operator()(int a, int b)
{
    return darray[(a-1)*columns+b-1];
}

//重载（）运算符，实现右值调用
int & DoubleSubscriptedArray::operator()(int a, int b) const
{
    int c;
    c=darray[(a-1)*columns+b-1];
    return c;
}
//重载<<运算符,实现按要求输出
ostream &operator <<(ostream &output,const DoubleSubscriptedArray &a)
{
    output<<"------------------"<<endl;
    for(int i=0;i<a.rows;i++)
    {
        for(int j=0;j<a.columns;j++)
        {
            int k=i*a.columns+j;
            output<<setw(4)<<a.darray[k];
        }
        output<<endl;
    }
    output<<"------------------"<<endl;
    return output;
}
//重载>>运算符，实现按要求输入
istream &operator >>(istream &input,DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.rows*a.columns;i++)
    {
        input >> a.darray[i];
    }
    return input;
}
//重载==运算符
bool DoubleSubscriptedArray::operator==(DoubleSubscriptedArray &right)
{
    if((columns==right.columns)&&(rows==right.rows))
    {
        for(int i=0;i<right.columns*right.rows;i++)
        {
            if(darray[i]!=right.darray[i])
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}
//重载！=运算符，引用==运算符
bool DoubleSubscriptedArray::operator!=(DoubleSubscriptedArray &right)
{
    if(*this==right)
    {
        return false;
    }
    else
    {
        return true;
    }
}
//重载=运算符
DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(DoubleSubscriptedArray &right)
{
    if(&right != this)
    {
        rows=right.rows;
        columns=right.columns;
        darray=right.darray;
    }

    return *this;
}

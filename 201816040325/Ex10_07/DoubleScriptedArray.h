#ifndef DOUBLESCRIPTEDARRAY_H_INCLUDED
#define DOUBLESCRIPTEDARRAY_H_INCLUDED


#include <iostream>

using namespace std;

class DoubleScriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleScriptedArray &);
    friend istream &operator>>(istream &,const DoubleScriptedArray &);
public:
    DoubleScriptedArray(int ,int );
//    DoublescriptedArray(const DoublescriptedArray & );
    ~DoubleScriptedArray();

    size_t getRow();
    size_t getColumn();
    int &operator()(int r,int c) const;
    int &operator()(int r,int c);
    bool operator==(const DoubleScriptedArray & ) const;
    bool operator!=(const DoubleScriptedArray & ) const;
    const DoubleScriptedArray &operator=(const DoubleScriptedArray &);
private:
    int row;//行数
    int column;//列数
    int *ptr;//prt指向二维数组第一个元素
};
#endif // DOUBLESCRIPTEDARRAY_H_INCLUDED

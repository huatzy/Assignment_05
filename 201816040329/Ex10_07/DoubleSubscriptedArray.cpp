#include<iostream>
#include<iomanip>
#include<cstdlib>
#include"DoubleSubscriptedArray.h"
using namespace std;
using std::setw;
using std::exit;
using std::cerr;




DoubleSubscriptedArray::DoubleSubscriptedArray(int kr,int  kc)
{
    rows=(kr>0?kr:9);
    columns=(kc>0?kc:9);
    ptr=new int[rows*columns];

    for(int i=0;i<rows*columns;i++)
        ptr[i]=0;
}

DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &arraytocopy)

{
    ptr=new int[rows*columns];
    for(int i=0;i<rows*columns;i++)
    {
        ptr[i]=arraytocopy.ptr[i];
    }
}
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}
int DoubleSubscriptedArray::getcolumnssize()const
{
    return columns;
}
int DoubleSubscriptedArray::getrowssize()const
{
    return rows;
}

 DoubleSubscriptedArray DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &right)
{
    if(&right!=this&&rows*columns!=right.rows*right.columns)
    {
        delete [] ptr;
        rows=right.rows;
        columns=right.columns;
        ptr=new int[rows*columns];
    }
    for(int i=0;i<rows*columns;i++)
    {
        ptr[i]=right.ptr[i];
    }
    return *this;
}
int DoubleSubscriptedArray:operator()(int r,int c)const
{
    if((r<0&&r>=rows)&&(c<0&&c>=columns))
    {
        cout<<"\n error::1 or 2 subscreips out of range"<<endl;
        exit(1);
    }
    return ptr[c+(r*columns)];
}
int DoubleSubscriptedArray:operator()(int r,int c)
{
    if((r<0&&r>=rows)&&(c<0&&c>=columns))
    {
        cout<<"\n error::1 or 2 subscreips out of range"<<endl;
        exit(1);
    }
    return ptr[c+(r*columns)];
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &d)
{
    for(int i=0;i<d;i++)
    {
        for(int i1=0;i1<d.columns;i1++)
            output<<d.ptr[(i*d.columns)+i1]<<output<<endl;

    }
    return output;
}
istream &operator(istream &input,DoubleSubscriptedArray &d)
{
    for(int i=0;o<d.rows*columns;i++)
        input>>d.ptr[i];
    return input;
}

#include <iostream>
#include<iomanip>
#include<stdexcept>
#include"DoubleScriptedArray.h"

using namespace std;

DoubleScriptedArray::DoubleScriptedArray(int rAccount,int cAccount)
{
   if(rAccount*cAccount>0)//判断二维数组的大小大于0
   {

       row=rAccount;//初始化行数
       column=cAccount;//初始化列数
       ptr=new int[row*column];//为ptr分配空间
       for(size_t i=0;i<row*column;i++)
       {
           ptr[i]=0;//初始化数组的值为0
       }
   }
   else
   {
       throw invalid_argument("Array size must be greater than 0");
   }
}

DoubleScriptedArray::~DoubleScriptedArray()
{
    delete [] ptr;
}

size_t DoubleScriptedArray::getRow()
{
    return row;
}

size_t DoubleScriptedArray::getColumn()
{
    return column;
}

int &DoubleScriptedArray::operator()(int r,int c) const//重载（）
{
    for(size_t i=0;i<row*column;i++)
    {
        if( ((r-1)*column+(c-1)) == i)//(r-1)*column+(c-1)为第r排第c列的元素在数组中所对应的下标
        {
            return ptr[i];
        }
    }
    throw invalid_argument("Can't find this element.");
}

int &DoubleScriptedArray::operator()(int r,int c)
{
    for(size_t i=0;i<row*column;i++)
    {
        if( ((r-1)*column+(c-1)) == i)
        {
            return ptr[i];
        }
    }
}

bool DoubleScriptedArray::operator==(const DoubleScriptedArray &a) const
{
    for(size_t i=0;i<row*column;i++)//元素之间一个一个进行匹配
    {
        if(ptr[i]!=a.ptr[i])//若有一个元素不匹配，则说明不相等
            return 0;
    }

    return 1;
}

bool DoubleScriptedArray::operator!=(const DoubleScriptedArray &a) const
{
    if(*this==a)
        return 0;
    else
        return 1;
}

const DoubleScriptedArray &DoubleScriptedArray::operator=(const DoubleScriptedArray &a)
{
    if(*this!=a)//avoid self-assignment
    {
        /*for Array of different sizes,deallocate original
        left-side Array,then allocate new left-side Array*/
        if(row*column!=a.row*a.column)
        {
            delete [] ptr;//release space

            row=a.row;//resize this object
            column=a.column;
            ptr=new int[row*column];//create space for Array copy
        }
        for(size_t i=0;i<row*column;i++)
            ptr[i]=a.ptr[i];//copy array into object
    }

    return *this;
}

istream &operator>>(istream &input,const DoubleScriptedArray & a)
{
    for(size_t i=0;i<a.row*a.column;i++)
    {
        input>>a.ptr[i];//输入数组中的每一个元素
    }

    return input;
}

ostream &operator<<(ostream &output,const DoubleScriptedArray &a)
{
    for(size_t i=0;i<a.row*a.column;i++)
    {
        output<<setw(6)<<a.ptr[i];//输出数组中的每一个元素
        if((i+1)%a.column==0)//输出了column列的时候，就进行换行
        {
            output<<endl;
        }
    }
    return output;
}

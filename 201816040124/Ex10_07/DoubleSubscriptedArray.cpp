#include<iostream>
#include<iomanip>
#include"DoubleSubscriptedArray.h"
using namespace std;
DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)//构造函数初始化数据成员
{
  setrow(a);
  setcolumn(b);
  size_t i,j;
  ptr=new int[row*column];
  for(i=0;i<row;i++)
  {
      for(j=0;j<column;j++)
      {
          ptr[i*column+j]=0;
      }
  }
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)//复制构造函数用已有对象初始化数据成员
{
    size_t i,j;
    for(i=0;i<a.getrow();i++)
    {
      for(j=0;j<a.getcolumn();j++)
      {
         output<<setw(10)<<a.ptr[i*a.getcolumn()+j];
      }
      output<<endl;
    }
    return output;
}
istream &operator>>(istream &input,const DoubleSubscriptedArray &a)//重载>>
{
    size_t i,j;
    for(i=0;i<a.getrow();i++)
    {
      for(j=0;j<a.getcolumn();j++)
      {
         input>>a.ptr[i*a.getcolumn()+j];
      }
    }
    return input;
}

DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &right)//重载<<
{
    row=right.row;
    column=right.column;
    ptr=new int[row*column];
    size_t i,j;
    for(i=0;i<row;i++)
  {
      for(j=0;j<column;j++)
      {
          ptr[i*column+j]=right.ptr[i*column+j];
      }
  }
}
size_t DoubleSubscriptedArray::getrow()const//row的get函数
{
    return row;
}
size_t DoubleSubscriptedArray::getcolumn()const//column的get函数
{
    return column;
}
void DoubleSubscriptedArray::setrow(int a)//row的set函数
{
    if(a>0)
        row=a;
    else
        cout<<"行数必须大于0"<<endl;
}
void DoubleSubscriptedArray::setcolumn(int a)//column的set函数
{
    if(a>0)
        column=a;
    else
        cout<<"列数必须大于0"<<endl;
}
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)//重载=
{
    size_t i,j;
    if(&right!=this)
    {
        if((row*column)!=(right.row*right.column))
        {
            delete [] ptr;
            row=right.row;
            column=right.column;
            ptr=new int[row*column];
        }
    }
    for(i=0;i<row;i++)
    {
      for(j=0;j<column;j++)
      {
          ptr[i*column+j]=right.ptr[i*column+j];
      }
    }
    return *this;
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)//重载==
{
    int flag=1;
    size_t i,j;
    if(row!=right.row||column!=right.column)
        return false;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(ptr[i*column+j]!=right.ptr[i*column+j])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==0)
        return false;
    else
        true;
}
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &right)//重载!=
{
    return !(*this==right);
}
int &DoubleSubscriptedArray::operator()(int a,int b)//重载()
{
    if(a<0||b<0||a>row||b>column)
        cout<<"越界"<<endl;
    return ptr[a*column+b];
}
int &DoubleSubscriptedArray::operator()(int a,int b)const//重载()
{
    if(a<0||b<0||a>row||b>column)
        cout<<"越界"<<endl;
    return ptr[a*column+b];
}

#include <vector>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;

//Ĭ�Ϲ��캯��
DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)
{
    rows=a;
    columns=b;
    for(int i=0;i<rows*columns;i++)
    {
        darray.push_back(0);
    }
}

//���أ����������ʵ����ֵ����
int & DoubleSubscriptedArray::operator()(int a, int b)
{
    return darray[(a-1)*columns+b-1];
}

//���أ����������ʵ����ֵ����
int & DoubleSubscriptedArray::operator()(int a, int b) const
{
    int c;
    c=darray[(a-1)*columns+b-1];
    return c;
}
//����<<�����,ʵ�ְ�Ҫ�����
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
//����>>�������ʵ�ְ�Ҫ������
istream &operator >>(istream &input,DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.rows*a.columns;i++)
    {
        input >> a.darray[i];
    }
    return input;
}
//����==�����
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
//���أ�=�����������==�����
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
//����=�����
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

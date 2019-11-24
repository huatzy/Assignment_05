#include"DoubleSubscriptedArray.h"
using namespace std;
#include<iostream>
#include<string.h>
DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b) //初始化a,b大小数组
{
    i=a;j=b;
    int p,q;
    for(p=0;p<a;p++)
    {
        for(q=0;q<b;q++)
        {
            ar[p*b+q]=q;
        }
    }
}
int DoubleSubscriptedArray::operator()(const int a,int b)const  //重载（）,输出第a行第b列数，作为右值
{
    if((a<=this->i)&&(b<=this->j))
        cout<<"数组第"<<a<<"行"<<"第"<<b<<"列的数为："<<ar[(a-1)*j+b-1];
    else
        cout<<"输入错误（输入查询数字大于行或列）";
    return ar[(a-1)*j+b-1];
}
int &DoubleSubscriptedArray::operator()(const int a,int b)  //重载（）,输出第a行第b列数，作为左值
{
    if((a<=this->i)&&(b<=this->j))
        cout<<"数组第"<<a<<"行"<<"第"<<b<<"列的数为："<<ar[(a-1)*j+b-1]<<"\n";
    else
        cout<<"输入错误（输入查询数字大于行或列）";
    return ar[(a-1)*j+b-1];
}
DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(DoubleSubscriptedArray &ar1)  //重载=，复制对象数据
{
    int p,q;
    ar1.i=i;ar1.j=j;
    for(p=0;p<i;p++)
    {
        for(q=0;q<j;q++)
        {
            ar[p*ar1.j+q]=ar1.ar[p*j+q];
        }
    }
    return *this;
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &ar1) const    //重载==，判定两数组是否相同
{
    int m,n;
    for(m=0;m<this->i;m++)
    {
        for(n=0;n<this->j;n++)
        {
            if(ar[m*j+n]!=ar1.ar[m*j+n])
                return 0;
        }
    }
    return 1;
}
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &ar1) const    //重载！=，判定两数组是否不同
{
    int m,n;
    for(m=0;m<this->i;m++)
    {
        for(n=0;n<this->j;n++)
        {
            if(ar[m*j+n]!=ar1.ar[m*j+n])
                return 1;
        }
    }
    return 0;
}
ostream &operator<<(std::ostream &output,const DoubleSubscriptedArray &ar2) //重载输出流
{
    for(int x=0;x<ar2.i;x++)
    {
        for(int y=0;y<ar2.j;y++)
        {
            output<<ar2.ar[x*ar2.j+y]<<" ";
        }
        output<<endl;
    }
    return output;
}
istream &operator>>(std::istream &input,DoubleSubscriptedArray &ar2)    //重载插入流
{
    for(int x=0;x<ar2.i;x++)
        for(int y=0;y<ar2.j;y++)
            input>>ar2.ar[x*ar2.j+y];
    return input;
}

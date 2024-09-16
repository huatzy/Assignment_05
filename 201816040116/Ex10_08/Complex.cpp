#include<iostream>
using namespace std;
#include"Complex.h"
Complex::Complex(double r,double i) //构造复数
{
    real=r;
    imaginary=i;
}
Complex Complex::operator*(Complex &aa) //计算两复数相称乘
{
    Complex temp;
    temp.real=real*aa.real-imaginary*aa.imaginary;      //计算实部
    temp.imaginary=real*aa.imaginary+imaginary*aa.real; //计算虚部
    return temp;
}
bool Complex::operator==(const Complex &aa) //判定两复数是否相同
{
    if(real==aa.real&&imaginary==aa.imaginary)
        return  1;
    else
        return 0;
}
bool Complex::operator!=(const Complex &aa)  //判定两复数是否不同
{
    if(real==aa.real&&imaginary==aa.imaginary)
        return  0;
    else
        return 1;
}
istream& operator>>(std::istream &input,Complex &aa)    //重载插入流
{
    input>>aa.real;
    input>>aa.imaginary;
    return input;
}
ostream& operator<<(std::ostream &output,const Complex &aa) //重载提取流
{
    cout<<"("<<aa.real<<","<<aa.imaginary<<")"<<endl;
    return output;
}

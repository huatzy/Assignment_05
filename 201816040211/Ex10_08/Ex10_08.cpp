#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex x;
    Complex y(4.3, 8.2);
    Complex z(3.3, 1.1);
    cout << "x: ";
    cout<< x;
    cout<<"y: ";
    cout<< y;
    cout<<"z: ";
    cout<< z;
    x=y+z;
    cout<<"\n\nx = y + z:" << endl;// 加法的运算
    cout<<x;
    cout<<" = ";
    cout<<y;
    cout<<" + ";
    cout<<z;
    x=y-z;
    cout<<"\n\nx = y - z:" << endl;//减法的运算
    cout<<x;
    cout<<" = ";
    cout<<y;
    cout<<" - ";
    cout<<z;
    x=y*z;
    cout<<"\n\nx = Y * z:"<< endl;//计算复数的相乘
    cout<<x;
    cout<<" = ";
    cout<<y;
    cout<<" * ";
    cout<<z;
    cout<<"\n"<<endl;
    cout<<y;
    cout << ( ( y == z ) ? "  == " : "  != " );//判别两个复数是否相等
    cout<<z<<"  ";
    cout << " according to the overloaded == operator\n";
    cout<<y;
    cout << ( ( y != z ) ? "  != " : "  == " );//判别两个复数是否不等
    cout<<z<<"  ";
    cout << " according to the overloaded != operator\n";
    cout<<endl;

}// end main

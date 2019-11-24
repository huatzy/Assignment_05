#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);
//输出
    cout << "x: ";
    cout <<x;
    cout << "\ny: ";
    cout <<y;
    cout << "\nz: ";
    cout <<z;
//加法
    x=y+z;
    cout<<"\n\nx=y+z:"<<endl;
    cout <<x;
    cout<<" = ";
    cout <<y;
    cout<<" + ";
    cout <<z;
//减法
    x=y-z;
    cout<<"\n\nx=y-z:"<<endl;
    cout <<x;
    cout<<" = ";
    cout <<y;
    cout<<" - ";
    cout <<z;
//乘法
    x=y*z;
    cout << "\n\nx = y * z:" << endl;
    cout << x;
    cout << " = ";
    cout << y;
    cout << " + ";
    cout << z;
//赋值
    cout << "\n\nplease write down the real and the imaginary of x\n";
    cin >> x;
    cout << "x: ";
    cout << x;
    return 0;
}

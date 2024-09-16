#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex x;
    Complex y;
    Complex z;

    cout << "请分别输入 x 和 y ：\n";
    cin >> x;//input x
    cin >> y;//input y

    if( x == y)//judge them if are equal
    {
        cout << "\nx and y are equal.\n";
    }
    if( x != y)//judge them if are not equal
        {
        cout << "\nx and y are not equal.\n";
    }
    cout << "\n\n计算 x + y 的结果：\n";
    z = x + y;//x + y
    cout << z;

    z = x - y;//x - y
    cout << "\n\n计算 x - y 的结果：\n";
    cout << z;

    z = x * y;//x * y
    cout << "\n\n计算 x * y 的结果：\n";
    cout << z;

    return 0;
}

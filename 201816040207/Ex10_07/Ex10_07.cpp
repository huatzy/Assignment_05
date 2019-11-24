#include <iostream>
#include"Array.h"
using namespace std;

int main()
{
    Array a(6),b(5);
    cout << a <<endl;
    cout << b <<endl;
    cout <<a(2,3)<<endl;//输出第六个数
    cout <<b(4)<<endl;//输出下标为4的数

    return 0;
}

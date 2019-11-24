#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray chessBorard(3,2);
    DoubleSubscriptedArray a(3,3);
    cout <<a;
	cout << "请输入6个数据\n";
	cin>>chessBorard;
	cout<<chessBorard;
	cout<<chessBorard(3,1);

    return 0;
}

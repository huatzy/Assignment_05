#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex complex1(4.3,8.2);
	Complex complex2(3.3,1.1);
	Complex complex3,complex4;
	cout<<complex1<<endl<<complex2<<endl;
	complex3 = complex1 * complex2;
	cout << "\ncomplex1与complex2相乘的结果为：";
	cout << "complex3 = "<<complex3<<endl<<"请输入complex4的数值:";
	cin>>complex4;
	cout<<"complex4的数值为："<<complex4<<endl;
	if (complex3 == complex4)
	{
		cout << "\n复数相等";
	}
	if (complex3 != complex4)
	{
		cout << "\n复数不相等";
	}
    return 0 ;
}

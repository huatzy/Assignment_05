#include <iostream>
using namespace std;
#include "DoubleSubscriptedArray.h"

int main() 
{
	DoubleSubscriptedArray  a1(3,4);
	DoubleSubscriptedArray  a2(3,4);
	cout<<a1;//输出数组a1
	cout<<a2;//输出数组a2
	a2=a1;//将数组a1赋值给a2
	cout<<a2<<endl;//输出修改后的a2 
	
	 
}

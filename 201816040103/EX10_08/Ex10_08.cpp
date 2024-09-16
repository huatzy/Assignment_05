#include <iostream>
#include <stdexcept>
#include "Complex.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	Complex x;
	Complex y(4.3,8.2);
	Complex z(3.3,1.1);
	x=y+z;
	cout<<"y+z="<<x<<endl;
	x=y-z;
	cout<<"y-z="<<x<<endl;
	x=y*z;
	cout<<"y*z="<<x<<endl;
	cout<<"y";
	cout<<( (y==z) ? "==":"!=" );
	cout<<"z";
	
}

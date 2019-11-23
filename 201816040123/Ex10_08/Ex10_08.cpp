#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex a;
    Complex b(2.5,3);
    Complex c;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl<<endl;

    cout<<"输入c:";
    cin>>c;
    a=b*c;
    cout<<" a = b * c"<<endl;
    cout<<a<<" = "<<b<<" * "<<c<<endl<<endl;

    a=b+c;
    cout<<" a = b + c"<<endl;
    cout<<a<<" = "<<b<<" + "<<c<<endl<<endl;

    a=b-c;
    cout<<" a = b - c"<<endl;
    cout<<a<<" = "<<b<<" - "<<c<<endl<<endl;

    if (b==c)
	{
		cout << "b == c"<<endl;
	}
	else
        cout << "b != c"<<endl;
}

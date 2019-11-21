//Fig. 10.16:fig10_16.cpp
//Complex class test program.
#include<iostream>
#include"Complex.h"

using namespace std;

int main()
{
    Complex x(0,0);
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);
    cout<<"x:"<<"(0,0)"<<endl;
    cout<<"y:"<<"(4.3,8.2)"<<endl;
    cout<<"z:"<<"(3.3,1.1)"<<endl;
    x = y + z;
    cout<<"\nx = y + z:"<<endl;
    cout<<x<<" = "<<y<<" + "<<z<<endl;
    x = y - z;
    cout<<"\nx = y - z:"<<endl;
    cout<<x<<" = "<<y<<" - "<<z<<endl;
    x = y * z;
    cout<<"\nx = y * z:"<<endl;
    cout<<x<<" = "<<y<<" * "<<z<<endl;
    return 0;
    /*Complex x(0,0);
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);

    cout<<"x:";
    //cin>>x;
    cout<<"x:";
    cout<<"\ny:";
    //cin>>y;
    cout<<"\ny";
    cout<<"\nz:";
    //cin>>z;
    cout<<"\nz:";

    x = y + z;
    cout<<"\n\nx = y + z:"<<endl;
    //cin>>x;
    //x.print();
    cout<<"=";
    //cin>>y;
    //y.print();
    cout<<"+";
    //cin>>z;
    //z.print();

    x = y - z;
    cout<<"\n\nx= y - z:"<<endl;
    //cin>>x;
    //x.print();
    cout<<"=";
    //y.print();
    //cin>>y;
    cout<<"-";
    //z.print();
    //cin>>z;
    cout<<endl;
    */
}//end main

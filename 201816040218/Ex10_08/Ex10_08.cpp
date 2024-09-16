#include <iostream>
#include "Complex.h"
using namespace std;


int main()
{
    Complex x;
    Complex y(4.3, 8.2);
    Complex z(3.3, 1.1);

    cout<< "x: ";
    //x.print();
    cout<<x;
    cout<< "\ny: ";
    //y.print();
    cout<<y;
    cout<< "\nz: ";
    //z.print();
    cout<<z;

    x=y+z;
    cout <<"\n\nx=y+z: "<<endl;
    //x.print();
    cout<<x;
    cout<< " = ";
    //y.print();
    cout<<y;
    cout<< " + ";
    //z.print();
    cout<<z;

    x=y-z;
    cout <<"\n\nx=y-z: "<<endl;
    //x.print();
    cout<<x;
    cout<< " = ";
    //y.print();
    cout<<y;
    cout<< " - ";
    //z.print();
    cout<<z;
    cout<<endl;

    x=y*z;
    cout<< "\n\nx=y*z: "<<endl;
    cout<<x<< " = "<<y<< " + "<<z<<endl;
    cout << "\n";

    if(y==z)
        cout<<y<< " == "<<z;
    if(y!=z)
        cout<<y<< " != "<<z;



}

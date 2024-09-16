#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;
    Complex y(4.3, 8.2);
    Complex z(3.3, 1.1);

    cout << "x: "<<x<<endl;
    cout << "y: "<<y<<endl;
    cout << "z: "<<z<<endl;

    cout << "\nplease enter the real and imaginary of x\n";
    cin >> x;
    cout << "x: ";
    cout << x;

    if(x == y){
        cout<<"\nx is the same as y";
    }else if(x != y){
         cout << "\ny is not the same as z";
    }
    x = y + z;
    cout << "\n\nx = y + z:" << endl;
    cout << x;
    cout << " = ";
    cout << y;
    cout << " + ";
    cout << z;

    x = y - z;
    cout << "\n\nx = y - z:" << endl;
    cout << x;
    cout << " = ";
    cout << y;
    cout << " - ";
    cout << z;

    x = y * z;
    cout << "\n\nx = y * z:" << endl;
    cout << x;
    cout << " = ";
    cout << y;
    cout << " + ";
    cout << z<<endl;

}

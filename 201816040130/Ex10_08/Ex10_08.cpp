#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x = (0,0); //create a object x
    Complex y; //create a object y
    Complex z; //create a object z
    cout << "y: ";
    cin >> y;
    cout << "\nz: ";
    cin >> z;
    cout << "\nx = y * z:" << endl;
    x = y * z; // y * z
    cout << x << "=" << y << "*" << z << "\n";
    cout << ((y == z)? "==" : "!=\n");
    cout << ((y != z)? "!=" : "==\n");
    return 0;
}

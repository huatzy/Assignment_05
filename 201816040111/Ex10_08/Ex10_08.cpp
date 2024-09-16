#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x,y,z;//Create three complex objects x, y, z
    cout << "Enter the real and imaginary parts of complex x : ";
    cin >> x;//Enter complex x
    cout << "Enter the real and imaginary parts of complex y : ";
    cin >> y;//Enter complex y
    cout << "Enter the real and imaginary parts of complex z : ";
    cin >> z;//Enter complex z
    /*First judge whether x and y are equal*/
    cout << "\n\nDetermine whether the complex x and y are equal" << endl;
    if ( x == y )
        cout << "Complex x is equal to y\n\n";
    else
        cout << "Complex x is not equal to y\n\n";

    cout << "Determine whether the complex y and z are equal" << endl;
    if ( y == z )
        cout << "Complex y is equal to z\n\n";
    else
        cout << "Complex y is not equal to z\n\n";

    cout << "Determine whether the complex x and z are equal" << endl;
    if ( x != z )
        cout << "Complex x is not equal to z\n"<<endl;
    else
        cout << "Complex x is equal to z\n"<<endl;
    /*Output x, y, z in the form of a complex number*/
    cout << "x: ";
    cout << x;
    cout << "\ny: ";
    cout << y;
    cout << "\nz: ";
    cout << z;
    //Adding operation
    x = y + z;
    cout << "\n\nx = y + z:" << endl;
    cout << x;
    cout << "=";
    cout << y;
    cout << "+";
    cout << z;
    //Subtraction
    x = y - z;
    cout << "\n\nx = y - z:" << endl;
    cout << x;
    cout << "=";
    cout << y;
    cout << "-";
    cout << z;
    //Multiply
    x = y * z;
    cout << "\n\nx = y * z:" << endl;
    cout << x;
    cout << "=";
    cout << y;
    cout << "*";
    cout << z;
    //Because of the change in the value of x, it is judged again whether the three complex numbers are equal.
    cout << "\n\nDetermine whether the complex x and y are equal" << endl;
    if ( x == y )
        cout << "Complex x is equal to y\n\n";
    else
        cout << "Complex x is not equal to y\n\n";

    cout << "Determine whether the complex y and z are equal" << endl;
    if ( y == z )
        cout << "Complex y is equal to z\n\n";
    else
        cout << "Complex y is not equal to z\n\n";

    cout << "Determine whether the complex x and z are equal" << endl;
    if ( x != z )
        cout << "Complex x is not equal to z\n"<<endl;
    else
        cout << "Complex x is equal to z\n"<<endl;

    return 0;

}

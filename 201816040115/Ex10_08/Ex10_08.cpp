//Ex10_08.cpp
//Complex class test program.
#include"Complex.h"

int main()
{
    Complex x, y, z;
    cout << "Please input two Complex objects, Input format:(real,imaginary)" << endl;
    cout << "y: ";
    cin >> y ;
    cout << "z: ";
    getchar();
    cin >> z;
    cout << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    x = y + z;
    cout << "\n\nx = y + z:" << endl;
    cout << x << " = " << y << " + " << z;

    x = y - z;
    cout << "\n\nx = y - z:" << endl;
    cout << x << " = " << y << " - " << z;

    x = y * z;
    cout << "\n\nx = y * z:" << endl;
    cout << x << " = " << y << " * " << z << endl;

    Complex a(4.3,8.2), b(4.2,8.3);
    cout << "y: " << y <<endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "\nEvaluating: a==y" << endl;
    if(a==y)
        cout << "a and y are equal" << endl;
    cout << "\nEvaluating: b!=y" << endl;
    if(b!=y)
        cout << "b and y are not equal" << endl;


}

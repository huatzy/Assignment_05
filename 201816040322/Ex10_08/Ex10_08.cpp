// Assignment_05: Ex10_08.cpp
// Complex class test program
#include <iostream>
#include "Complex.h" // Complex class definition

using namespace std;

int main()
{
    Complex x;
    Complex y( 4.3, 8.2 );
    Complex z( 3.3, 1.1 );
    Complex t( 3.3, 1.1 );

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    cout << "t: " << t << endl;

    x = y + z;
    cout << "\n\nx = y + z: " << endl;
    cout << x << " = " << y << " + " << z << endl;

    x = y - z;
    cout << "\n\nx = y - z: " << endl;
    cout << x << " = " << y << " - " << z << endl;

    x = y * z;
    cout << "\n\nx = y * z: " << endl;
    cout << x << " = " << y << " * " << z << endl;

    // use overloaded inequality (!=) operator
    cout << "\nEvaluating: y != z" << endl;

    if ( y != z )
        cout << "y and z are not equal" << endl;

    // use overloaded equality (==) operator
    cout << "\nEvaluating: y == t" << endl;

    if ( z == t )
        cout << "z and t are equal" << endl;

    cout << "\nPlease enter a complex number, for example(3.1, 4.4):\n";
    cin >> x;

    cout << "x: " << x << endl;
} // end main

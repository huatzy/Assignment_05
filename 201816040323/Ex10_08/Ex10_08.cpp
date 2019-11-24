#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex x;
    Complex y( 5.5, 6.6 );
    Complex z( 7.7, 8.8 );
    Complex t( 9.9, 1.1 );

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

    cout << "\nEvaluating: y != z" << endl;

    if ( y != z )
        cout << "y and z are not equal" << endl;

    cout << "\nEvaluating: y == t" << endl;

    if ( z == t )
        cout << "z and t are equal" << endl;

    cout << "\nPlease enter a complex number, for example(3.1, 4.4):\n";
    cin >> x;

    cout << "x: " << x << endl;
}

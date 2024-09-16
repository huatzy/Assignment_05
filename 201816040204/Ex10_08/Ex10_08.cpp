#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;
    Complex y( 4.3, 8.2 );
    Complex z( 3.3, 1.1 );

    cout<<"Please enter the complex x: ";
    cin>>x;
    cout<<"x : "<<x<<endl;

    x = y + z;
    cout<<"\nx = y + z:\n"<<x<<" = "<<y<<" + "<<z<<endl;

    x = y - z;
    cout<<"\nx = y - z:\n"<<x<<" = "<<y<<" - "<<z<<endl;

    x = y * z;
    cout<<"\nx = y * z:\n"<<x<<" = "<<y<<" * "<<z<<endl;

    if(y == z)
        cout << "y is equal to z. "<< "(according to the overloaded == operator)"<<endl;
    else
        cout << "y is not equal to z. " )<<"(according to the overloaded == operator)"<<endl;
    if(y != z)
        cout << "y is equal to z. "<< "(according to the overloaded == operator)"<<endl;
    else
        cout << "y is not equal to z. " )<<"(according to the overloaded == operator)"<<endl;


    return 0;
}

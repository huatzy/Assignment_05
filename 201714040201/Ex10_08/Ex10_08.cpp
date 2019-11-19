//Ex10_08.cpp
//Complex class test program
#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    //define Complex class the object
    Complex x;
    Complex y( 4.3 , 8.2 );
    Complex z( 3.3 , 1.1 );
    Complex w;
    //implement subtraction function
    x=y-z;
    cout<<"x = y - z"<<endl;
    cout<<x<<" = "<<y<<" - "<<z<<endl;
    //implement addition function
    x=y+z;
    cout<<"x = y + z"<<endl;
    cout<<x<<" = "<<y<<" + "<<z<<endl;
    //implement input function
    //input format eg:( 1.0 , 1.0 )
    cin>>w;
    cout<<w<<endl;
    //implement the comparison function
    if(x==w)
        cout<<"x==w"<<endl;
    if(x!=w)
        cout<<"x!=w"<<endl;
    //implement multiplication function
    x=y*z;
    cout<<"x = y * z"<<endl;
    cout<<x<<" = "<<y<<" * "<<z<<endl;
    return 0;
}//end main

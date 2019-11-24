#include<iostream>
using namespace std;

#include "Complex.h"

int main()
{
    //Initialize complex class
    Complex x ;
    Complex y(4.3 , 8.2);
    Complex z(3.3 , 1.1);
    //Print what we got
    cout << "x:"<<x<<endl;
    cout<< "y:" <<y<<endl;
    cout<< "z:" <<z<<endl;
    //Perform a complex subtraction
    x = y-z ;
    cout << y << "-" << z << "=" <<x <<endl;
    //Perform a complex addition
    x = y+z ;
    cout << y << "+" << z << "=" <<x <<endl;
    //Perform a complex multiplication
    x = y*z ;
    cout << y << "*" << z << "=" <<x <<endl;
    //judge if complex y and z are equal
    if(y==z)
    {
        cout<<"Complex y and z are equal"<<endl ;
    }
    else
    {
        cout<<"Complex y and z are not equal"<<endl ;
    }
    //Executing an assignment statement
    x = y;
    cout<<"give x value that same as y"<<endl ;
    //judge if they are same now
    if(x == y)
    {
        cout<<"Complex x and y are equal"<<endl ;
    }
}


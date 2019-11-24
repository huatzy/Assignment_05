//
//  main.cpp
//  Ex10_08
//
//  Created by misonomayubw on 2019/11/24.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include <iostream>
#include "Complex.h"
#include <iomanip>
#include <stdexcept>

using namespace std;


int main()
{
    Complex x;
    Complex y( 1.6 , 2.5);
    Complex z( 7.3 , 5.4 );

    cout<<x<<y<<z<<endl;

    //input x
    cin>>x;
    cout<<"x :"<<x<<endl;

    x=y+z;
    cout<<x<<" = "<< y <<" + "<<z;

    x=y-z;
    cout<<x<<" = "<< y <<" - "<<z;

    x=y*z;
    cout<<x<<" = "<< y <<" * "<<z<<endl;

    if (y==z)
     {
         cout << "y == z"<<endl;
     }
     else
         cout << "y != z"<<endl;


    return 0;




}

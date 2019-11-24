//
//  main.cpp
//  Ex10_07
//
//  Created by misonomayubw on 2019/11/24.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include <iostream>
//#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    //define 3 arrays
    
    DoubleSubscriptedArray n1;
    DoubleSubscriptedArray n2;
    DoubleSubscriptedArray n3;
    
    cout << n1.getsize() << n1;
    
    cin >> n1;
    
    cout << n2.getsize() << n2;
    
    cin >> n2;

    //judge if n1 and n2 are equal
    
    if(n1 == n2)
    {
        cout << "this two arrays are equal" << endl;
    }
    else
    {
        cout << "this two arrays are not equal" << endl;
    }

    cout << n1(1, 1) << n3 << endl;
    
    n3 = n1;
    
    cout << n3 << endl;

    //judge if n1 and n3 are equal
    
    if(n1 == n3)
    {
        cout << "this two arrays are equal" << endl;
    }
    else
    {
        cout << "this two arrays are not equal" << endl;
    }
     
}


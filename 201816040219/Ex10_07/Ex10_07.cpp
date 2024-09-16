#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray d1(2, 2);
    DoubleSubscriptedArray d2(2, 2);
    DoubleSubscriptedArray d3(2, 2);
    cin >> d1 >> d2;
    if(d1 == d2)
        cout << endl << "d1 is the same as d2" << endl ;
    else
        cout << endl << "d1 is not the same as d2" << endl;
    cout << "The second row of the second row of d1 is " << endl;
    cout << d1(2, 2) << endl;
    cout << "d3:" << endl;
    cout << d3 << endl;
    d3 = d1;
    cout << "d3 is after d1 is assigned" << endl;
    cout << d3 << endl;
    if(d1 != d3)
        cout << "d1 is not the same as d3" << endl;
    else
        cout << "d1 is the same as d3" << endl;

}

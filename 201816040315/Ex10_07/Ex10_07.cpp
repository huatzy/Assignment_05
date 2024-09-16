//Ex10_07.cpp
#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray rect(10,10);//declare
    cout<<rect(3,3)<<endl;//output (3,3)
    rect(3,3)=52;//assignment (3,3)
    cout<<rect(3,3)<<endl;//output again (3,3)
    cout<<rect(4,6)<<endl;
    rect(4,6)=77;
    cout<<rect(4,6)<<endl;
    return 0;
}

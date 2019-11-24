#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;

int main()
{
    DoubleSubscriptedArray a(3,3);
    cout<<a(1,1)<<endl;
    a(1,1) = 1;
    cout<<a(1,1)<<endl;
    return 0;
}

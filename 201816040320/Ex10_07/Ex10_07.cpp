#include <iostream>
#include "DoubleSubscriptedArray.h"

using namespace std;

int main()
{
    DoubleSubscriptedArray a(3,5);
    for(int i=0;i<3;++i)
    {
        for(int j=1;j<=5;++j)
            a(i,j)=i*j+j;
    }
    cout<<a;

}

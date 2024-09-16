#include "DoubleSubscriptedArray.h"

int main()
{
    DoubleSubscriptedArray dsa(18,3,6);
    cin>>dsa;
    cout <<dsa(3,1)<<endl;
    cout <<dsa<<endl;
}

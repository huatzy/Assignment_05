#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;
int main()
{
    DoubleSubscriptedArray DoubleSubscriptedArray1(3,5);//construct DoubleSubscriptedArray1
    DoubleSubscriptedArray DoubleSubscriptedArray2;//construct DoubleSubscriptedArray2
    cout<<"DoubleSubscriptedArray1:\n"<<DoubleSubscriptedArray1<<endl;//output DoubleSubscriptedArray1
    cout<<"DoubleSubscriptedArray2:\n"<<DoubleSubscriptedArray2<<endl;//output DoubleSubscriptedArray2
    cout<<"input DoubleSubscriptedArray1 and assign DoubleSubscriptedArray2 to DoubleSubscriptedArray1:"<<endl;//prompt
    cin>>DoubleSubscriptedArray1;//input DoubleSubscriptedArray1
    DoubleSubscriptedArray2=DoubleSubscriptedArray1;//assign DoubleSubscriptedArray2 to DoubleSubscriptedArray1
    cout<<"DoubleSubscriptedArray1:\n"<<DoubleSubscriptedArray1<<endl;//output DoubleSubscriptedArray1 again
    cout<<"DoubleSubscriptedArray2:\n"<<DoubleSubscriptedArray2<<endl;//output DoubleSubscriptedArray2 again
    DoubleSubscriptedArray1(0,0)=99;//assign DoubleSubscriptedArray(0,0) to 99
    cout<<"assign DoubleSubscriptedArray1(0,0) to 99\n";//prompt
    cout<<"DoubleSubscriptedArray1:\n"<<DoubleSubscriptedArray1<<endl;//input DoubleSubscriptedArray1 again
    DoubleSubscriptedArray1==DoubleSubscriptedArray2?cout<<"DoubleSubscriptedArray1==DoubleSubscriptedArray2  "<<"called function operator =="<<endl:
        cout<<"DoubleSubscriptedArray1!=DoubleSubscriptedArray2  "<<"called function operator =="<<endl;//judge if DoubleSubscriptedArray1 and DoubleSubscriptedArray 2 are equal by operator ==
    DoubleSubscriptedArray1!=DoubleSubscriptedArray2?cout<<"DoubleSubscriptedArray1!=DoubleSubscriptedArray2  "<<"called function operator !="<<endl:
        cout<<"DoubleSubscriptedArray1==DoubleSubscriptedArray2  "<<"called function operator !="<<endl;//judge if DoubleSubscriptedArray1 and DoubleSubscriptedArray 2 are equal by operator !=
    DoubleSubscriptedArray DoubleSubscriptedArray3(DoubleSubscriptedArray1);//construct DoubleSubscriptedArray3 by copy constructor
    DoubleSubscriptedArray1==DoubleSubscriptedArray3?cout<<"DoubleSubscriptedArray1==DoubleSubscriptedArray3 "<<"called function operator =="<<endl:
        cout<<"DoubleSubscriptedArray1!=DoubleSubscriptedArray3 "<<"called function operator =="<<endl;//judge if DoubleSubscriptedArray1 and DoubleSubscriptedArray 3 are equal by operator ==
    DoubleSubscriptedArray1!=DoubleSubscriptedArray3?cout<<"DoubleSubscriptedArray1!=DoubleSubscriptedArray3 "<<"called function operator !="<<endl:
        cout<<"DoubleSubscriptedArray1==DoubleSubscriptedArray3 "<<"called function operator !="<<endl;//judge if DoubleSubscriptedArray1 and DoubleSubscriptedArray 3 are equal by operator !=
}

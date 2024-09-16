// Assignment_05: Ex10_07.cpp
// DoubleSubscriptedArray class test program
#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
#include <cstdlib>

using namespace std;

int main()
{
    DoubleSubscriptedArray integers1( 5, 5 );
    DoubleSubscriptedArray integers2( 4, 6 );
    cout << "\nEnter 6 integers:" << endl;
    cout<<"复制 粘贴 以下数字\n"<<"231 65 45 98 56 35 32 56 4516 965 6451 652 65 652 65 641 65 98 419 65 126 56 6 459 129\n" ;
    cin >> integers1;
    cout << "\nEnter 4 integers:" << endl;
    cout<<"复制 粘贴 以下数字\n"<<"89 546 532 65 5461 351 156 65 156 651 96854 156 156 321 15623 654 1265 156 123 651 156 156 156 3251 \n" ;
    cin >> integers2 ;

    cout << "integers1:\n" << integers1<< "integers2:\n" << integers2;
    if ( integers1 != integers2 )
        cout << "integers1 and integers2 are not equal" << endl;
        size_t a, b ;
        cout<<"integers1(a,b):" ;
        cin>>a>>b ;
        if (a>integers1.getrow()||b>integers1.getcolumn())
        {
            cout<<"data wrong" ;
            exit(0) ;
        }
        cout<<"integers1"<<"("<<a<<","<<b<<")"<<integers1(a,b)<<"\n" ;
        cout<<"integers2(a,b):" ;
        cin>>a>>b ;
        if (a>integers2.getrow()||b>integers2.getcolumn())
        {
            cout<<"data wrong" ;
            exit(0) ;
        }
        cout<<"integers2"<<"("<<a<<","<<b<<")"<<integers2(a,b) ;
}

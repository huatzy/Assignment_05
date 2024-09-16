#include<iostream>
#include<stdexcept>
#include"DoubleSubscriptedArray.h"
using namespace std;

int main()
{
     DoubleSubscriptedArray chessBoard1(5);
    DoubleSubscriptedArray chessBoard2;

    cout<<"Size of DoubleSubscriptedArray chessBoard1 is: "<<chessBoard1.getSize()<<"\nArray after initialization:\n"<<chessBoard1;
    cout<<"Size of DoubleSubscriptedArray chessBoard2 is: "<<chessBoard1.getSize()<<"\nArray after initialization:\n"<<chessBoard2;

    cout<<"\nEnter "<<chessBoard1.getSize()<<" chessBoard: " <<endl;
    cin>>chessBoard1;
    cout<<"\nAfter input, the DoubleSubscriptedArray contain:\n"<<"chessBoard1:\n"<<chessBoard1;


    cout<<"\nEnter "<<chessBoard2.getSize()<<" chessBoard: " <<endl;
    //cin>>chessBoard2;
    cout<<"\nAfter input, the DoubleSubscriptedArray contain:\n"<<"chessBoard2:\n"<<chessBoard2;

    if(chessBoard1!= chessBoard2)
        cout<<"chessBoard1 and chessBoard2 are not equal";
    DoubleSubscriptedArray chessBoard3(chessBoard1);
    cout<<"\nSize of DoubleSubscriptedArray chessBoard3 is: "<<chessBoard3.getSize()<<"\nDoubleSubscriptedArray after initialization:\n"<<chessBoard3;

    cout<<"\nAssigning chessBoard2 to chessBoard1:"<<endl;
    chessBoard1=chessBoard2;
    cout<<"chessBoard1:\n"<<chessBoard1
        <<"chessBoard2:\n"<<chessBoard2;
    if(chessBoard1==chessBoard2)
        cout<<"chessBoard1 and chessBoard2 are  equal";

    cout<<"\nchessBoard1(1,4) is "<<chessBoard1(1,4);
    chessBoard1(1,4)=1000;
    cout<<"\n\nAssigning 1000 to chessBoard1(1,4)"<<endl;
    cout<<"chessBoard1:\n"<<chessBoard1;

    /*try
    {
        cout<<"\nAttempt to assign 1000 to integers1(4,5)"<<endl;
        integers1(4,5)=1000;
    }
    catch (out_of_rang &ex)
    {
        cout<<"An exception occurred: "<<ex.what()<<endl;
    }*/

}

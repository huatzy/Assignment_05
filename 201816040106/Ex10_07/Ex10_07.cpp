#include"DoubleSubScriptedArray.h"
#include<iostream>
using namespace std;
int main(){
    DoubleSubScriptedArray chessBoard(2,3);
    cin>>chessBoard;
    cout<<chessBoard<<endl;
    int n,m;
    cin>>n>>m;
    int val=chessBoard(n,m);
    cout<<val<<endl;
    int x;
    cin>>x;
    chessBoard(n,m)=x;
    cout<<chessBoard(n,m)<<endl;
    cout<<chessBoard<<endl;
    return 0;
}
//11 12 13 14 15 16

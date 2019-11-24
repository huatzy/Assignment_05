#include<iostream>
#include<string.h>
#include"DoubleSubscriptedArray.h"
using namespace std;
int main()
{
    int m,n,x,y;
    cout<<"请输入第一个数组行列：\n";
    cin>>m>>n;
    DoubleSubscriptedArray chessBoard(m,n);
    cout<<"请输入第一个数组内容：\n";
    cin>>chessBoard;
    cout<<chessBoard;
    cout<<"创造数组arr并使其与第一个相等\n";
    DoubleSubscriptedArray arr(m,n);
    arr=chessBoard; //复制ChessBoard数据给arr；
    cout<<arr;
    if(chessBoard==arr) //判定两数组是否相同
        cout<<"arr is equal to chessBoard\n";
    else
        cout<<"arr is not equal to chessBoard\n";
    if(chessBoard!=arr) //判定两数组是否不同
        cout<<"arr is not equal to chessBoard\n";
    else
        cout<<"arr is equal to chessBoard\n";
    cout<<"请输入所要查询数组行列序:\n";
    cin>>x>>y;  //输入所要查询数字行列序
    chessBoard(x,y);
    cout<<"\n输出ChessBoard\n";
    cout<<chessBoard;
    cout<<"\n输出arr\n";
    cout<<arr;
    return  0;
}

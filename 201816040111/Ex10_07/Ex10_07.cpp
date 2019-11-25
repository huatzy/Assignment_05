#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray chessBoard( 3 , 5 );//Define a two-dimensional array of three rows and five columns
    cin >> chessBoard ;//Enter fifteen numbers to arrange two-dimensional arrays
    cout << chessBoard ;//Output two-dimensional array
    cout << endl;

    cout << "Compare coordinates (1, 3) with 3 : " << endl;
    if ( chessBoard(1,3) == 3 )//If the value is 3
        cout << "It is equal"<<endl;
        else
            cout << "It is not equal" <<endl;

    cout << "Compare coordinates (1, 3) with coordinates (2, 4) : "<<endl;
    if ( chessBoard(1,3) == chessBoard(2,4) )
        cout << "It is equal" <<endl;
        else
            cout << "It is not equal" <<endl;

    chessBoard(3,3) = chessBoard(2,1);//Assign the value of (2,1) to (3,3)
    cout << "Change the value of coordinates (3, 3) to (2,1)" << endl;
    cout << "(3,3) = " <<chessBoard(3,3)<<endl;

    chessBoard(3,5) = 1024;//Assign the value of 1024 to (3,5)
    cout << "Change the value of coordinates (3, 3) to 1024" << endl;
    cout << "(3,5) = " <<chessBoard(3,5)<<endl;

    cout << chessBoard;//Output two-dimensional array again after changing all values
    cout << "Compare (1,1) and (4,4) values for equality" << endl;
    if ( chessBoard(1,1) != chessBoard(4,4) )
        cout << "It is not equal" << endl;
    else
        cout << "It is equal" << endl;

    return 0;
}

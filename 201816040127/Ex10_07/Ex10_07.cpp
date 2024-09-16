#include <iostream>

using namespace std;

#include "DoubleSubscriptedArray.h"//本篇根据书上的改编，如有雷同纯属意外。

int main()

{
    int row, column;

    cout  << "Please enter the number of rows and columns of the array you want to create: "<<endl;
    cin >> row >> column;

    DoubleSubscriptedArray array1(row, column);

    cout  << "Size of DoubleSubscripted is: "<< array1.getRows()  << array1.getColumns()<< "\nDoubleSubscriptedArray after initialization :\n "<<array1;

    cout << array1;

    cout << "After the assignment, the array is: " << endl;

    cout << array1;

    cout << "Please enter the number of rows and columns of the another array you want to create:" << endl;

    cin >> row >> column;

    DoubleSubscriptedArray array2(row,column);

    cout << "Please assign values to the elements in this array: " << endl;

    cin >> array2;


    if( array1 == array2)

        cout << "\narray1 and array2 are  equal"  << endl;

    if( array1 != array2)

        cout << "\n array1 and array2 are not equal" << endl;

    cout<<"Now automatically create an array equal to the first array: "<<endl;

    DoubleSubscriptedArray array3(array1);

    cout << array3;

    cout << "\nCopy the second array to the third : " << endl;

    array3 = array2;

    cout << array3;

    if( array3 == array2)

        cout << "\narray3 and array2 are  equal" << endl;

    if( array3 != array2)

        cout << "\narray3 and array2 are not equal" << endl;

    cout << "\narray1[3][5] is " << array1(3,5);

    cout << "\nAssigning 1000 to array1[3][5]" << endl;

    array1(3,5) = 1000;

    cout << array1;

    cout << "\nAssigning 1000 to array1[13][15]" << endl;

    array1(13,15) = 1000;
    cout << array1;

return 0;

}

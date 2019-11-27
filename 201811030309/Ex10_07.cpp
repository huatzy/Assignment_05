#include <iostream>
#include "DoubleSubscripetedArray.h"

using namespace std;

int main()
{
    DoubleSubscripetedArray array1;
    DoubleSubscripetedArray array2(4,4);
    cin >> array1;

    cout << array1 <<endl;

    cin >> array2;

    cout << array2 <<endl;

    cout << array1(2,3) << " " << array2(2,3) <<endl;

    if(array1(2,3)==array2(2,3))
        cout << "they are equal\n";
    else
        cout << "they are not equal\n";
    cout << "\n\n" << "before using the =: " <<endl;
    cout << array1 <<endl;
    array1=array2;
    cout << "\n\n" << "after using the =: " <<endl;
    cout << array1 <<endl;
}

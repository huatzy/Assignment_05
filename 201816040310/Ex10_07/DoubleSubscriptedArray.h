#include <string>
using namespace std;
class DoubleSubscriptedArray
{
public:
    friend ostream &operator<<(ostream &, const DoubleSubscriptedArray &); // overload operator << to print DoubleSubscriptedArray
    friend istream &operator>>(istream &, DoubleSubscriptedArray &); // overload operator >> to input DoubleSubscriptedArray
    DoubleSubscriptedArray(int row = 0, int col = 0); // constructor with Array's row and col
    int &operator()(int, int); // return reference of an element of Array
    const int &operator()(int, int) const; // return a const reference of an element of Array
    bool operator==(const DoubleSubscriptedArray & ) const; // is equal
    bool operator!=(const DoubleSubscriptedArray &) const; // is not equal
    DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &); // a copy function use overload = 
    string shape() const; // return DoubleSubscriptedArray's shape (Such as:"shape: 3 * 4")
private:
    int *ptr; // a pointer of this object's data block
    int row, col;
};

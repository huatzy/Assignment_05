#ifndef DOUBLESUBSCRIPTEDARRAY_H
#include <iostream>
using namespace std;

class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &, const DoubleSubscriptedArray & );
    friend istream &operator>>(istream &, DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray(int = 10);//default constructor

    DoubleSubscriptedArray(const DoubleSubscriptedArray&);//copy constructor
    ~DoubleSubscriptedArray();
    size_t getSize() const;//return size

    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//assignment operator
    DoubleSubscriptedArray &operator()(const DoubleSubscriptedArray &);//equality operator
    bool operator==(const DoubleSubscriptedArray &) const;
    bool operator!=( const DoubleSubscriptedArray &right ) const
    {
        return !( *this == right);
    }

    int &operator()(int, int);//subscript operator for non-const objects returns modifiable lvalue
    int operator()(int, int) const;//subscript operator for const objects returns rvalue


private:
    size_t size;//pointer-based array size
    int *ptr;//pointer to first element of pointer-based array
    int rc;

};//end class DoubleSubscriptedArray
#endif

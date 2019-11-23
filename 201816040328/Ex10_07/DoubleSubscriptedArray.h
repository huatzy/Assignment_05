#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
using namespace std;
class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &,DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray (int =2,int=2);//default constructor
    DoubleSubscriptedArray(const DoubleSubscriptedArray &);//copy constructor
    int getsize() const;//return size

    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//assignment operator
    bool operator==(const DoubleSubscriptedArray &);//equality operator
    bool operator!=(const DoubleSubscriptedArray &);//inequality operator

    //subscript operator for non-const objects returns lvalue
    int &operator()(int ,int );

    //subscript operator for const objects return rvalue
    int operator()(int ,int )const;

    //void print();

private:
    int size;//the size of DoubleSubscriptedArray
    int *ptr;//pointer to first element of pointer-based array
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

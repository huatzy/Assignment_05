//DoubleSubscriptedArray.h
//DoubleSubscriptedArray class definition
#ifndef DOUBLESUBSCRIPTEFARRAY_H
#define DOUBLESUBSCRIPTEFARRAY_H

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
    friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);
public:
    explicit DoubleSubscriptedArray(int=1 ,int=1 );//default construction
    DoubleSubscriptedArray (const DoubleSubscriptedArray &);//copy constructor
    ~DoubleSubscriptedArray();//destructor
    size_t getSize()const;//return size

    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//assignment operator
    bool operator==(const DoubleSubscriptedArray &)const;//equality operator
    bool operator!=(const DoubleSubscriptedArray &)const;//inequality operator

    //subscript operator for non-const objects returns modifiable lvalue
    int &operator()(int,int);

    //subscript operator for const objects returns rvalue
    int operator()(int,int)const;

private:
    int *ptr;//pointer to first element of pointer-based array
    size_t line;
    size_t row;
    size_t size; //pointer_based array size
};
#endif // DOUBLESUBSCRIPTEFARRAY_H

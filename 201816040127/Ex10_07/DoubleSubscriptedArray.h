#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

#include<iostream>
class DoubleSubscriptedArray//本篇根据书上的改编，如有雷同纯属意外。
{
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
    friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);
public:
    explicit DoubleSubscriptedArray(int=0,int=0);//default constructor
    DoubleSubscriptedArray(const DoubleSubscriptedArray &);//copy constructor

    ~DoubleSubscriptedArray();

    int getRows() const;

    int getColumns() const;

     const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//assignment operator

     bool operator==( const DoubleSubscriptedArray & ) const;//equality operator

     bool operator!=( const DoubleSubscriptedArray &right ) const
     {
          return !( *this == right );//invokes DoubleSubscriptedArray::operator==
     }

     int &operator()(int , int );//subscript operator for non-const objects returns modifiable lvalue

     int operator()(int , int ) const;//subscript operator for const returns rvalue


private:
     int rows;
     int columns;
     int *ptr;
};//end class DoubleSubscriptedArray


#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

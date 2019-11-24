#include <iostream>

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &); //declare the function to operator<<
    friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);  //declare the function to operator>>
public:
    DoubleSubscriptedArray(int,int); //declare a constructor for DoubleSubscriptedArray
    ~DoubleSubscriptedArray(); //declare a destructor for DoubleSubscriptedArray
    size_t getSize()const; //declare the function to getSize
    int operator()(int)const; //declare the function for operator()
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
    bool operator==(const DoubleSubscriptedArray &)const;
    bool operator!=(const DoubleSubscriptedArray &);
private:
    size_t size; //data member size
    int row;
    int col;
    int *ptr;
};

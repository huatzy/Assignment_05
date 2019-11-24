#ifndef DOUBLESUBSCRIPTED_H
#define DOUBLESUBSCRIPTED_H

#include <iostream>
#include <vector>
using namespace std;

class DoubleSubscriptedArray
{
//Overloaded input and output operators
friend istream &operator>>(istream &,DoubleSubscriptedArray &);
friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);

public:
    explicit DoubleSubscriptedArray(int=3,int=5);//constructor

    int &operator()(int,int);//Overloaded bracket operator
    const int &operator()(size_t,size_t);
    //Overloaded assignment operator
    DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
    //Overload comparison operator
    bool operator==(const DoubleSubscriptedArray &);
    bool operator!=(const DoubleSubscriptedArray &);

    //get function
    int getRows();
    int getColumns();
    vector<int> &getSum();

private:
    vector<int> a;
    int rows;
    int columns;
    int length;//the length of array
};





#endif

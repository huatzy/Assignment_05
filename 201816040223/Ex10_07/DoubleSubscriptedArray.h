
#include<iostream>
using namespace std;
class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream & ,const DoubleSubscriptedArray &);
     friend ostream &operator<<(ostream & ,const DoubleSubscriptedArray &);
 public:
    explicit DoubleSubscriptedArray(int=10,int=10);
    size_t getSize()const;
    int  operator[](int,int)const;
    int &operator[](int,int);
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray&);
    bool operator==(const DoubleSubscriptedArray &)const;
    bool operator!=(const DoubleSubscriptedArray &)const;
 private:
    int x;
    int y;
    int *ptr;
};

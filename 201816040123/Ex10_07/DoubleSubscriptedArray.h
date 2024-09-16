#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
using namespace std;
class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &, DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray( int=1, int=1);
    void setRow(int);
    void setColumn(int);
    int getRow() const;
    int getColumn() const;
    int &operator()(int , int);
    int operator()(int , int) const;
    bool operator==(const DoubleSubscriptedArray &) const;
    bool operator!=(const DoubleSubscriptedArray &) const;
    DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
private:
    int row;
    int column;
    //int size;
    int **p;
};
#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

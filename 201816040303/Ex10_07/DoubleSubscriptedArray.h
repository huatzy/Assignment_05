#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
class DoubleSubscriptedArray
{
private:
    int row;
    int column;
    int **ptr;
public:
    DoubleSubscriptedArray(int r = 0,int c = 1);
    int & chessBorard(int,int);
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

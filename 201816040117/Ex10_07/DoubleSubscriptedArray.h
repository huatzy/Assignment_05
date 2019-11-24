#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
    friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray(int=1,int=1);//constructor
    DoubleSubscriptedArray(const DoubleSubscriptedArray &);//copy constructor
    size_t getRowSize()const;//return row
    size_t getColumnSize()const;//return column
    int &operator()(unsigned int,unsigned int);//function operator ()
    int operator()(unsigned int,unsigned int)const;//function operator ()
    bool operator==(const DoubleSubscriptedArray &)const;//function operator ==
    bool operator!=(const DoubleSubscriptedArray &right)const
    {
        return !(*this==right);
    }//function operator !=
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//function operator =

private:
    size_t row;//row of class
    size_t column;//column of class
    int *ptr;
};


#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

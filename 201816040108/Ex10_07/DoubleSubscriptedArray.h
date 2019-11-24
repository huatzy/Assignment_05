#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
    friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);
public:
    explicit DoubleSubscriptedArray(int=1 ,int=1 );
    DoubleSubscriptedArray (const DoubleSubscriptedArray &);
    ~DoubleSubscriptedArray();
    size_t getSize()const;

    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
    bool operator==(const DoubleSubscriptedArray &)const;
    bool operator!=(const DoubleSubscriptedArray &right)const
    {
        return !(*this==right);
    }
    //subscript operator for non-const objects returns modifiable lvalue
    int &operator()(int,int);

    //subscript operator for const objects returns rvalue
    int operator()(int,int)const;

private:
    size_t size;
    size_t line;
    size_t row;
    int *ptr;
};


#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

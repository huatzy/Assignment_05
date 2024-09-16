#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
using namespace std;
class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);//重载<<
    friend istream &operator>>(istream &,const DoubleSubscriptedArray &);//重载>>
public:
    DoubleSubscriptedArray(int=10,int=10);//声明构造函数
    DoubleSubscriptedArray(const DoubleSubscriptedArray&);//声明复制构造函数
    size_t getrow()const;//row的get函数
    void setrow(int);//row的set函数
    void setcolumn(int);//column的get函数
    size_t getcolumn()const;//column的set函数
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//重载=
    bool operator==(const DoubleSubscriptedArray &);//重载==
    bool operator!=(const DoubleSubscriptedArray &);//重载!=
    int &operator()(int,int);//重载()
    int &operator()(int,int)const;//重载()

private:
    /*三个数据成员*/
    size_t row;
    size_t column;
    int *ptr;
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

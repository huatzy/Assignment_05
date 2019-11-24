#include<bits/stdc++.h>

class DoubleSubscriptedArray
{
   friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
   friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);
public:
   DoubleSubscriptedArray( int ,int  );
   int &operator()(int , int);
   const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
   bool operator==(const DoubleSubscriptedArray &) const;
   bool operator!=(const DoubleSubscriptedArray &right) const{
        return !(*this==right);
   }
private:
   int x;
   int y;
   int *ptr;
};
//这个头文件是直接使用github中样例中的头文件 ， 仅删除一个函数。。。

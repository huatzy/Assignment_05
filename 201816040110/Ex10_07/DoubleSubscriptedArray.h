#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
using namespace std;
class DoubleSubscriptedArray
{
friend std::ostream &operator<<(std::ostream & ,const DoubleSubscriptedArray &);
friend std::istream &operator>>(std::istream & ,DoubleSubscriptedArray &);
public:
    explicit DoubleSubscriptedArray( int=0 , int=0 );
    int  operator()( int , int  );
    void operator=( DoubleSubscriptedArray & );
    bool operator==( DoubleSubscriptedArray &  );
   bool operator!=(  DoubleSubscriptedArray & );
   int getsize1();
   int getsize2();
private:
    int rows;
    int columns;
    int **ptr;
    int size1;
    int size2;
    static unsigned int r;
    static unsigned int c;
    int temp;
};



#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

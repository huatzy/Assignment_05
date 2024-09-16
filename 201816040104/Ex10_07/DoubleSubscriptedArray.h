#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
using namespace std;

class DoubleSubscriptedArray
{
    //overload the << and >>
    friend ostream &operator<<( ostream &, const DoubleSubscriptedArray & );
    friend istream &operator>>( istream &, const DoubleSubscriptedArray & );
public:
    explicit DoubleSubscriptedArray ( double , double );//constructor function
    DoubleSubscriptedArray( const DoubleSubscriptedArray & );//copy constructor function
    ~DoubleSubscriptedArray();
    size_t getSize() const;//return size

    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray & );//overload =
    bool operator==( const DoubleSubscriptedArray & ) const;//overload operator ==
    bool operator!=( const DoubleSubscriptedArray &right ) const//overload operator !=
    {
        return !( *this == right );
    }
    int &operator()( double=0 , double=0 );//subscript operator for non-const objects returns modifiable lvalue
    int operator()( double=0 , double=0 )const;//subscript operator for const objects returns rvalue

private:
    int rows;//the rows of double dimensional array
    int columns;//the columns of double dimensional array
    size_t size;//pointer-based array size
    int *ptr;//pointer to first element of pointer-based array
};
#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED


class DoubleSubscriptedArray
{
    friend std::ostream &operator<<( std::ostream &, const DoubleSubscriptedArray & );
    friend std::istream &operator>>( std::istream &, DoubleSubscriptedArray & );
public:
    DoubleSubscriptedArray( int = 5, int = 2 ); // default constructor
    DoubleSubscriptedArray( const DoubleSubscriptedArray & ); // copy constructor
    ~DoubleSubscriptedArray(); // destructor
    size_t getSize() const; // return size
    DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray & );
    bool operator==( const DoubleSubscriptedArray & ) const;
    bool operator !=( const DoubleSubscriptedArray & ) const;
private:
    size_t row;
    size_t column;
    int *ptr;
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

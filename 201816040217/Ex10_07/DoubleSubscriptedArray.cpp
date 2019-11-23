#include"DoubleSubscriptedArray.h"

DoubleSubscriptedArray::DoubleSubscriptedArray(int arraySize, int arraySize2)
        : size( arraySize*arraySize2 > 0 ? arraySize*arraySize2 :
                throw invalid_argument("Array size must be greater than 0")),
            ptr( new int[size]),
            wid(arraySize),len(arraySize2)
{
    for ( size_t i = 0; i <size; ++i )
        ptr[i] = 0;

}

DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &arrayToCopy)
    :size(arrayToCopy.size),
     ptr( new int[size])
{
    for( size_t i= 0; i< size; ++i)
        ptr[i] = arrayToCopy.ptr[i];
}

DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}

size_t DoubleSubscriptedArray::getSize() const
{
    return size;
}

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if( &right != this)
    {
        if( size != right.size)
        {
            delete [] ptr;
            size = right.size;
            ptr = new int [ size ];
        }

        for (size_t i=0;i <size; ++i)
            ptr[i] = right.ptr[i];
        len = right.len;
        wid = right.wid;
    }

    return *this;
}

bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right ) const
{
    if ( size != right.size)
        return false;
    for(size_t i = 0; i< size; ++i)
        if(ptr[i] != right.ptr[ i ])
            return false;

    return true;
}

int &DoubleSubscriptedArray::operator[](int subscript)
{

    if( subscript < 0 || subscript >= size)
        throw out_of_range("Subscript out of range");

    return ptr[ subscript];
}

int DoubleSubscriptedArray::operator[](int subscript)const
{
    if( subscript < 0 || subscript >= size)
        throw out_of_range("Subscript out of range");

    return ptr[ subscript];
}
int &DoubleSubscriptedArray::operator()(int w, int l)
{
    w-=1;
    l-=1;
    if( w > wid|| l > len)
        throw out_of_range("Subscript out of range");

    return ptr[w*len+l];
}

int DoubleSubscriptedArray::operator()(int w, int l)const
{
    w-=1;
    l-=1;
    if( w > wid|| l > len)
        throw out_of_range("Subscript out of range");

    return ptr[w*len+l];
}



istream &operator>>( istream &input, DoubleSubscriptedArray &a)
{
    for (size_t i= 0;i<a.size; ++i)
        input >> a.ptr[i];

    return input;
}


ostream &operator<<(ostream &output, const DoubleSubscriptedArray &a)
{
    for (size_t i = 0; i<a.size; ++i)
    {
        output << setw(12)<<a.ptr[i];

        if((i+1)%a.len == 0)
            output <<endl;
    }
    if(a.size % a.len != 0)
        output <<endl;

    return output;
}

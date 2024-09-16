#include "DoubleSubscriptedArray.h"
#include <vector>
#include <iomanip>
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int r,int c)//constructor
{
    rows = r;
    columns = c;
    length = r*c;
    for(int i=0;i<rows*columns;++i)
    {
        a.push_back(0);
    }
}

//Overloaded bracket operator
int & DoubleSubscriptedArray::operator()(int r,int c)
{

    return a[(r-1)*columns+c-1];
}

const int & DoubleSubscriptedArray::operator()(size_t r,size_t c)
{

    return a[(r-1)*columns+c-1];
}

//get functions
int DoubleSubscriptedArray::getRows()
{
    return rows;
}

int DoubleSubscriptedArray::getColumns()
{
    return columns;
}

vector<int> &DoubleSubscriptedArray::getSum()
{
    return a;
}

//Overloaded assignment operator
DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &op)
{
    if(op.length==length)
        for(int i=0;i<rows*columns;++i)
        {
            a[i]=op.a[i];
        }
    else
        cout<<"Array lengths are not equal and cannot be assigned"<<endl;
    return *this;
}

//Overload comparison operator
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &op)
{
    if(op.length==length)
    {
        for(int i=0;i<rows*columns;++i)
            if(op.a[i]!=a[i])
            return false;
    }
    else
        return false;
    return true;
}

bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &op)
{
    return (*this==op)?false:true;
}

//Overloaded input and output operators
istream &operator>>(istream &input,DoubleSubscriptedArray &op)
{
    int number=0;
    for(int i=0;i<op.getRows()*op.getColumns();++i)
    {
        input>>number;
        (op.getSum())[i]=number;
    }
    return input;
}

ostream &operator<<(ostream &output,const DoubleSubscriptedArray &op)
{
    int sum=0;
    for(int i=0;i<op.rows*op.columns;++i)
    {
        output<<setfill(' ')<<setw(3)<<op.a[i];

        ++sum;
        if(sum==op.columns)
        {
            output<<endl;
            sum=0;
        }
    }
    return output;
}



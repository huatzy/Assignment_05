#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H
#include<iostream
using namespace std;
class DoubleSubscriptedArray
{
public:
	  explicit DoubleSubscriptedArray(int = 10, int = 10);
	  friend ostream& operator<<(ostream&, const DoubleSubscriptedArray&);
	  friend istream& operator>>(istream&, DoubleSubscriptedArray&);
    const Array &operator= (const Array&);
    bool operator ==( const Array &) const;
    bool operator !=(const Array &right) const
    {
        return ! (*this ==right);
    }
    int &operator()(int );
    int operator()(int ) const;
    int  operator()(int ,int ) const;
private:
    int row, column;
    vector < int > v;
};

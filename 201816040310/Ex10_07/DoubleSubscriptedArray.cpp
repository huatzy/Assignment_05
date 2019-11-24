#include "DoubleSubscriptedArray.h"
#include <iostream>
using namespace std;
DoubleSubscriptedArray::DoubleSubscriptedArray(int row, int col)
{
	if(row<0||col<0)
		cout<<"Out of range:row and col must greater than 0"<<endl; // print an error msg
	
    this->row = row>=0?row:0;
    this->col = col>=0?col:0;
    ptr = new int[row * col]; 
}

int &DoubleSubscriptedArray::operator()(int row, int col)
{
	if(row<0||col<0||row>this->row||col>this->col) // if out of range ,print an error msg.Then return ptr[0]
	{
		cout<<"Out of range: row or col out of range"<<endl;
		return ptr[0];
	}
    return ptr[row * (this->row) + col];
}

const int &DoubleSubscriptedArray::operator()(int row, int col)const
{
    if(row<0||col<0||row>this->row||col>this->col) // if out of range ,print an error msg.Then return ptr[0]
	{
		cout<<"Out of range: row or col out of range"<<endl;
		return ptr[0];
	}
    return ptr[row * (this->row) + col];
}

DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    delete[] ptr; // delete old data block which was ptr pointed;
    ptr = new int[right.row * right.col]; // get a new data block
    row = right.row, col = right.col; 
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            ptr[i * col + j] = right.ptr[i * col + j]; // assign each value to this object
    return *this;
}

 bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const{
	if(row!=right.row||col!=right.col) // first shapes of two Array must be same
		 return false; // eitherwise return false
	int tempRow = right.row, tempCol = right.col;
	for (int i = 0; i < tempRow; i++)
        for (int j = 0; j < tempCol; j++)
            if(ptr[i * col + j] != right.ptr[i * col + j]) // compare every elements
				return false;
	return true;
 }
 
 bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &right) const{
	return !(*this==right);
}

string DoubleSubscriptedArray::shape() const
{
    return "Shape: " + to_string(row) + " * " + to_string(col); // return shape
}

// simple output and input
ostream &operator<<(ostream &out, const DoubleSubscriptedArray &DoubleSubArray)  
{
    int row = DoubleSubArray.row, col = DoubleSubArray.col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            out << DoubleSubArray(i, j)<<' ';
        }
        out << '\n';
    }
    return out;
}

istream &operator>>(istream &in, DoubleSubscriptedArray &DoubleSubArray)
{
    int row = DoubleSubArray.row, col = DoubleSubArray.col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            in >> DoubleSubArray(i, j);
        }
    }
    return in;
}
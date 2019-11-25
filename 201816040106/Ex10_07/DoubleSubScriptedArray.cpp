#include"DoubleSubScriptedArray.h"
#include<iostream>
#include<iomanip>
using namespace std;
DoubleSubScriptedArray::DoubleSubScriptedArray(int r,int c){
    row=r;
    column=c;
    ptr=new int[r*c+1];
    for(size_t i=1;i<=r*c;i++) ptr[i]=0;
}
DoubleSubScriptedArray::~DoubleSubScriptedArray(){
    delete[] ptr;
}
const DoubleSubScriptedArray& DoubleSubScriptedArray::operator=(const DoubleSubScriptedArray& right){
    if(*this!=right){
        if(row!=right.row||column!=right.column){
            delete []ptr;
            ptr=new int[row*column+1];
        }
        for(size_t i=1;i<=row*column;i++)
            ptr[i]=right.ptr[i];
    }
    return *this;
}
bool DoubleSubScriptedArray::operator==(const DoubleSubScriptedArray& right) const
{
    if(row!=right.row||column!=right.column) return false;
    else{
        for(size_t i=1;i<=row*column;i++)
            if(ptr[i]!=right.ptr[i])
                return false;
        return true;
    }
}
ostream & operator<<(ostream& output,const DoubleSubScriptedArray& a){
    for(size_t i=1;i<=a.column*a.row;i++){
        output<<setw(12)<<a.ptr[i];
        if(i%a.column==0) output<<endl;
    }
    return output;
}
istream & operator>>(istream& input,DoubleSubScriptedArray& a){
    for(size_t i=1;i<=a.column*a.row;i++)
        input>>a.ptr[i];
    return input;
}
int &DoubleSubScriptedArray::operator()(int r,int c){
    if(r<0||r>row||c<0||c>column) throw out_of_range("row or column out of range");
    return ptr[r*c];
}
int &DoubleSubScriptedArray::operator()(int r,int c) const
{
    if(r<0||r>row||c<0||c>column) throw out_of_range("row or column out of range");
    return ptr[r*c];
}

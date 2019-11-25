#include<iostream>
using namespace std;
class DoubleSubScriptedArray
{
    friend ostream & operator<<(ostream&,const DoubleSubScriptedArray&);
    friend istream & operator>>(istream&,DoubleSubScriptedArray&);   
public:
    DoubleSubScriptedArray(int = 10, int = 10);
    ~DoubleSubScriptedArray();
    int &operator()(int ,int );
    int &operator()(int ,int) const;
    const DoubleSubScriptedArray &operator=(const DoubleSubScriptedArray&);
    bool operator==(const DoubleSubScriptedArray&) const;
    bool operator!=(const DoubleSubScriptedArray& right){
        return !(*this==right);
    }
private:
    int column;
    int row;
    int *ptr;
};

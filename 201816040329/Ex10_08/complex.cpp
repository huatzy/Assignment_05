#include"complex.h"
#include<iostream>
using std::ostream;
using std::istream;
using std::cout;

complex::complex(double Tp,double Fp)
{


}
complex complex::operator=(const complex &k)
{
    True=k.True;
    fiction=k.fiction;
    return *this;
}
complex complex::operator*(const complex &k)const
{
    return complex((True*k.True)+(fiction*k.fiction),(fiction*k.True)+(True*k.fiction));
}
complex complex::operator-(const complex &k)const
{
    return complex(True-k.True,fiction-k.fiction);
}
complex complex::operator+(const complex &k)const
{
    return complex(True+k.True,fiction+k.fiction);
}
bool complex::operator!=(const complex &k)const
{
    if(k.True!=True&&k.fiction!=fiction)
    {
        return true;
    }
    else
        return false;
}

bool complex::operator==(const complex &k)const
{
     if(k.True==True&&k.fiction==fiction)
    {
        return true;
    }
    else
        return false;
}

istream& operator>>(istream &input,complex &com)
{
    input.ignore();
    input>>com.True;
    input.ignore(2);
    input>>com.fiction;
    input.ignore();
    return input;
}
ostream& operator<<(ostream &output,const complex &com)
{
    output<<"("<<com.True<<","<<com.fiction<<")";
    return output;
}

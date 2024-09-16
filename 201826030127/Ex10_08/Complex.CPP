#include"complex.h"
using namespace std;
Complex:: Complex(double a,double b)
:real(a),image(b)
{

}
ostream & operator<<(ostream &output ,const Complex &data)
{
    output<<data.real<<"+"<<data.image<<"i";
    return output;
}
istream &  operator>>(istream &input,Complex &right)
{
    double r,i;
    input>>r>>i;
    right.real=r;
    right.image=i;

     return input;
}
Complex Complex::operator+(const Complex &right) const
{
    return Complex(real+right.real,image+right.image);
}
Complex Complex::operator-(const Complex &right) const
{
    return Complex(real-right.real,image-right.image);
}
Complex Complex::operator*(const Complex &right) const
{
    return Complex(real*right.real-image*right.image,image*right.real+real*right.image);

}
bool Complex::operator==(const Complex &right) const
{
    if(real!=right.real)
        return false;
    if(image!=right.image)
        return false;
    return true;
}
 bool Complex:: operator!=(const Complex &right) const
 {
     if(real==right.real)
        return false;
     if(image==right.image)
        return false;
     return true;
 }

#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(double l,double w)
{
    setLength(l);
    setWidth(w);
}

void Rectangle::setLength(double l)
{
    if(l>0&&l<20)
    length = l;
    else
        cout << "Length is not within the range of values";
}

double Rectangle::getLength()
{
    return length;
}

void Rectangle::setWidth(double w)
{
    if(w>0&&w<20)
        width = w;
    else
    cout << "Length is not within the range of values";
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::circumference()
{
    double e;
    e = (length+width)*2;
    return e;
}

double Rectangle::area()
{
    double a;
    a = length*width;
    return a;
}

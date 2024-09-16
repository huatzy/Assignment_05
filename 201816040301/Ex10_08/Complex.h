//#ifndef POINT_H_INCLUDED
//#define POINT_H_INCLUDED
using namespace std;

class Point
{
public:
    explicit Point(double,double);
    void setX(double);
    double getX();
    void setY(double);
    double getY();
private:
    double x;
    double y;
};


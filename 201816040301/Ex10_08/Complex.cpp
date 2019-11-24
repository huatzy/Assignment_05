#include"Point.h"



Point::Point(double xCoord,double yCoord)

{

    setX(xCoord);

    setY(yCoord);

}

void Point::setX(double xCoord)

{

    x = (xCoord >= 0.0&& xCoord <= 20.0)?xCoord : 0.0;

}

void Point::setY(double yCoord)

{

    y = (yCoord >= 0.0&& yCoord <=20.0)?ycoord : 0.0;

}

double Point::getY()

{

    return y;

}

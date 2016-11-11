#include <iostream>
#include "point.h"

using namespace std;

Point::Point()
{
	x = 0.0;
	y = 0.0;
}


Point::Point(double nx, double ny)
{
	x = nx;
	y = ny;
}
Point::Point(Point &n)
{
    x=n.x;
    y=n.y;
}

void Point::setx_y(double nx, double ny)
{
    x = nx;
    y = ny;
}

double Point::getx()
{
    return x;
}
double Point::gety()
{
    return y;
}

void Point::printpoint()
{
    cout << "(" << x << "," << y << ")";
}
void Point::modifypoint(double nx, double ny)
{
    x = nx;
    y = ny;
}

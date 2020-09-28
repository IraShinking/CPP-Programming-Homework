#include"Point.h"
#include<cmath>
#include<iostream>

using namespace std;
Point::Point()
{
    x = 0.0f;
    y = 0.0f;
}

Point::Point(float xx, float yy)
{
    x = 0.0f;
    y = 0.0f;
}

Point::Point(Point &p)
{
    x = p.x;
    y = p.y;
}

void Point::setPoint(float xx, float yy)
{
    x = xx;
    y = yy;
}

void Point::showPoint()
{
    cout << "The point is: (" << x << " , " << y << ")";
}

float Point::calculate_distance(Point p1)
{
    return sqrt((double)(p1.x - x) * (p1.x - x) + (double)(p1.y - y) * (p1.y - y));
}


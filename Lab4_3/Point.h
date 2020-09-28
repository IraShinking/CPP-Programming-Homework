//Point.h
#ifndef _POINT_H_

#define _POINT_H_

class Point
{
public:
    Point();
    Point(float xx, float yy);
    Point(Point &p);
    void setPoint(float xx, float yy);
    void showPoint();
    float calculate_distance(Point p1);

private:
    float x, y;
};

#endif//_POINT_H_

#include <cmath>
#include <iostream>
using namespace std;

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

int main(void)
{
    float x1, x2, y1, y2, x3, y3;
    Point a;
    Point b;
    Point c;
    cout << "Enter the three point of one traingle." << endl
         << endl;
    cout << "Enter the point 1 in form like: xx,yy:____\b\b\b\b";
    cin >> x1;
    cin.get();
    cin >> y1;
    cout << "Enter the point 2 in form like:xx,yy:____\b\b\b\b";
    cin >> x2;
    cin.get();
    cin >> y2;
    cout << "Enter the point 2 in form like:xx,yy:____\b\b\b\b";
    cin >> x3;
    cin.get();
    cin >> y3;
    a.setPoint(x1, y1);
    b.setPoint(x2, y2);
    c.setPoint(x3, y3);
    double sideA;
    double sideB;
    double sideC;
    sideA = c.calculate_distance(b);
    sideB = a.calculate_distance(c);
    sideC = a.calculate_distance(b);

    double p;
    p = (sideA + sideB + sideC) / 2;
    double area;
    area = sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));

    a.showPoint();
    b.showPoint();
    c.showPoint();
    cout << "\nThe distance AB is: " << sideC << endl;
    cout << "The distance AC is: " << sideB << endl;
    cout << "The distance BC is: " << sideA << endl;
    cout << "The area of this triangle is: " << area << endl;

    return 0;
}

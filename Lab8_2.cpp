#include <iostream>
using namespace std;
double const Pi = 3.14;
class Point
{
public:
    Point() { cout << "Constructor of Point is called." << endl; }
    ~Point() { cout << "Deconstructor of Point is called." << endl; }
    void display() { cout << "Point::display();" << endl; }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }

protected:
    int x;
    int y;
};

class Circle : public Point
{
public:
    Circle() { cout << "Constructor of Circle is called." << endl; }
    ~Circle() { cout << "Deconstructor of Circle is called." << endl; }
    void display() { cout << "Circle::display();" << endl; }
    double getR()
    {
        return r;
    }
    void setR(double Radius)
    {
        r = Radius;
    }
    double Area()
    {
        return Pi * getR() * getR();
    }

protected:
    double r;
};

class Cylinder : public Circle
{
public:
    Cylinder() { cout << "Constructor of Cylinder is called." << endl; }
    ~Cylinder() { cout << "Deconstructor of Cylinder is called." << endl; }
    void display() { cout << "Cylinder::display();" << endl; }
    double getH()
    {
        return h;
    }
    void setH(double h1)
    {
        h = h1;
    }
    double SArea()
    {
        return 2 * Area() + 2 * Pi * getR() * getH();
    }
    double Volume()
    {
        return Area() * getH();
    }

protected:
    double h;
};
void funTest(Point *ptr)
{
    ptr->display();
}
int main(void)
{
    Cylinder cy1;
    Circle cr1;
    Point pt1;
    funTest(&pt1);
    funTest(&cr1);
    funTest(&cy1);
    return 0;
}
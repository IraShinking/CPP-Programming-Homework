#include <iostream>
using namespace std;
const double Pi = 3.14;
class Point
{
public:
    Point() { cout << "Constructor of Point is called." << endl; }
    ~Point() { cout << "Deconstructor of Point is called." << endl; }
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
int main(void)
{
    Cylinder cy1;
    cy1.setH(2.7);
    cy1.setR(2.7);
    cout << "The volume of this cylinder is: " << cy1.Volume() << endl
         << "The area of this cylinder is: " << cy1.SArea() << endl;
    return 0;
}
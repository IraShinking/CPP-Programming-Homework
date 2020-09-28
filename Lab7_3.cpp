#include <iostream>
using namespace std;
const double PI = 3.14;

class Shape
{
public:
    Shape() { cout << "Constructor of Shape is called." << endl; }
    ~Shape() { cout << "Deconstructor of Shape is called." << endl; }
    void show() { cout << "It's the object of class Shape." << endl; }
    void setRadius(double R)
    {
        Radius = R;
    }
    void setA(double a)
    {
        Longside = a;
    }
    void setB(double b)
    {
        Shortside = b;
    }

protected:
    double Radius;
    double Longside;
    double Shortside;
};

class Rectangle : public Shape
{
public:
    Rectangle() { cout << "Constructor of Rectangle is called." << endl; }
    ~Rectangle() { cout << "Deconstructor of Rectangle is called." << endl; }
    void show() { cout << "It's the object of class Rectangle." << endl; }
    double getArea()
    {
        return Longside * Shortside;
    }
    double getRound()
    {
        return 2 * (Longside + Shortside);
    }
};

class Circle:public Shape
{
    public:
        Circle() { cout << "Constructor of Circle is called." << endl; }
        ~Circle() { cout << "Deconstructor of Circle is called." << endl; }
        void show() { cout << "It's the object of class Circle." << endl; }
        double getArea()
        {
            return PI*Radius*Radius;
        }
        double getRound()
        {
            return 2 * PI * Radius;
        }
};

class Square:public Rectangle
{
    public:
        Square() { cout << "Consturctor of Square is called." << endl; }
        ~Square() { cout << "Deconstructor of Square is called." << endl; }
        void show() { cout << "It's the object of class Square." << endl; }
};

int main(void)
{
    Shape s1;
    s1.show();
    Circle c1;
    c1.show();
    c1.setRadius(2.7);
    cout << "The area of Circle is: " << c1.getArea() << endl
         << "The round of Circle is: " << c1.getRound() << endl<<endl;
    Rectangle r1;
    r1.show();
    r1.setA(4.0);
    r1.setB(2.0);
    cout << "The area of Rectangle is: " << r1.getArea() << endl
         << "The round of Rectangle is: " << r1.getRound() << endl<<endl;
    Square sq1;
    sq1.show();
    sq1.setA(4.0);
    sq1.setB(4.0);
    cout << "The area of Square is: " << sq1.getArea() << endl
         << "The round of Square is: " << sq1.getRound() << endl<<endl;
    return 0;
}
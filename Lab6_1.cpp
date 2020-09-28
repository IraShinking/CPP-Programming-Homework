//6——16.cpp
#include<iostream>
using namespace std;
class Circle
{
    public:
    Circle():x(0),y(0),r(0.0){
        cout << "Defalut Constructor called." << endl;
    }
    Circle(int x,int y,int r):x(x),y(y),r(r)
    {
        cout << "Constructor called." << endl;
    }
    ~Circle() { cout << "Destructor called." << endl; }
    int getX() const { return x; }
    int getY() const { return y; }
    int getR() const { return r; }
    void move(int newX,int newY,int newR)
    {
        x = newX;
        y = newY;
        r = newR;
    }
    void show() { cout << "Circle(" << getX() << "," << getY() << ") the radius=" << getR() << endl; }

private:
    int x, y;
    int r;
};

int main()
{
    cout << "Building two circle..." << endl;
    Circle c1(1, 1, 5);
    Circle c2(7, 12, 10);
    c1.show();
    c2.show();
    return 0;
}
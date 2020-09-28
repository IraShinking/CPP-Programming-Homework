#include<iostream>
using namespace std;
const double PI=3.14;

class Oval
{
    public:  
    void setLr(double a)
    {
        Lr = a;
    }
    void setSr(double b)
    {
        Sr = b;
    }
    Oval()
    {
        cout << "Constructor of Oval called." << endl;
    }
    ~Oval()
    {
        cout << "Deconstructor of Oval called." << endl;
    }
    double getA() { return Lr; }
    double getB() { return Sr; }
    double Area()
    {
        return PI * getA()* getB();
    }
    double Round()
    {
        return (2 * PI * getB() + 4 * (getA() - getB()));
    }

    protected:
    double Lr;
    double Sr;
};

class Circle: public Oval
{
    public:
    Circle() { cout << "Constructor of Circle called."<<endl; }
    ~Circle() {
        cout << "Deconstructor of Circle called."<<endl;
    }
};

int main(void)
{
    Circle c1;
    c1.setLr(4.0);
    c1.setSr(2.0);
    cout << "The Area of the circle is: " << c1.Area()
         << endl
         << "The round of the circle is: " << c1.Round() << endl;
    return 0;
}